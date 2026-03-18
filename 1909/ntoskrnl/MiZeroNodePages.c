/*
 * XREFs of MiZeroNodePages @ 0x1401886D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     MiCreateZeroThreadContext @ 0x14018892C (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x14018FB94 (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     KeIsHyperThreadingEnabled @ 0x140A3B8CC (KeIsHyperThreadingEnabled.c)
 */

void __fastcall MiZeroNodePages(char *P)
{
  int v2; // eax
  _QWORD *v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  PVOID PoolWithTag; // rax
  void *v7; // r12
  int v8; // r14d
  unsigned __int64 Mask; // r15
  __int64 ZeroThreadContext; // rax
  void *v11; // r13
  unsigned __int64 v12; // rcx
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  USHORT Count[2]; // [rsp+58h] [rbp-29h] BYREF
  int v17; // [rsp+5Ch] [rbp-25h]
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY v21; // [rsp+98h] [rbp+17h] BYREF

  *((_QWORD *)P + 3) = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *((_DWORD *)P + 12);
  v3 = P + 32;
  v3[1] = v3;
  *v3 = v3;
  KeQueryNodeActiveAffinity(v2, &Affinity, Count);
  v4 = Count[0];
  if ( (unsigned __int8)KeIsHyperThreadingEnabled() )
    v4 /= KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  *(_WORD *)P = 263;
  P[2] = 6;
  if ( !v4 )
    v4 = 1;
  *((_DWORD *)P + 1) = 0;
  *((_QWORD *)P + 2) = P + 8;
  *((_QWORD *)P + 1) = P + 8;
  *((_DWORD *)P + 13) = v4;
  *((_DWORD *)P + 22) = 0;
  *((_DWORD *)P + 29) = 4;
  v5 = *((_DWORD *)P + 29);
  if ( v4 - 1 < 4 )
    v5 = v4 - 1;
  *((_DWORD *)P + 23) = v4;
  *((_DWORD *)P + 29) = v5;
  *((_DWORD *)P + 28) = v4;
  *((_DWORD *)P + 30) = v4;
  *((_WORD *)P + 32) = 0;
  *((_DWORD *)P + 17) = 0;
  P[66] = 6;
  *((_QWORD *)P + 10) = P + 72;
  *((_QWORD *)P + 9) = P + 72;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v4, 0x20206D4Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 16LL * v4);
  else
    v4 = 0;
  v8 = 0;
  *((_QWORD *)P + 12) = v7;
  if ( v4 )
  {
    Mask = Affinity.Mask;
    while ( 1 )
    {
      ZeroThreadContext = MiCreateZeroThreadContext(P, 1LL);
      v11 = (void *)ZeroThreadContext;
      if ( !ZeroThreadContext )
        break;
      v21 = Affinity;
      if ( Mask )
      {
        _BitScanReverse64(&v12, Mask);
        v21.Mask = 1LL << v12;
        Mask &= ~(1LL << v12);
        v17 = v12;
        Affinity.Mask = Mask;
      }
      *(_DWORD *)(ZeroThreadContext + 248) = v8;
      if ( (int)PsCreateSystemThreadEx(
                  &Handle,
                  0x1FFFFFLL,
                  0LL,
                  0LL,
                  0LL,
                  MiZeroLargePageThread,
                  ZeroThreadContext,
                  &v21,
                  0LL) < 0 )
      {
        v13 = v4 - v8;
        MiDeleteZeroThreadContext(v11);
        ExFreePoolWithTag(v11, 0);
        goto LABEL_25;
      }
      ObCloseHandle(Handle, 0);
      if ( ++v8 >= v4 )
        goto LABEL_16;
    }
    v13 = v4 - v8;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 13, -v13) == v13 )
      KeSignalGate((__int64)P, 1u);
LABEL_25:
    if ( v13 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 3, &LockHandle);
      *((_DWORD *)P + 32) += v13;
      v14 = *((_DWORD *)P + 31);
      v15 = v14 + *((_DWORD *)P + 32);
      *((_DWORD *)P + 22) = 4;
      if ( v15 == *((_DWORD *)P + 30) && v14 )
        KeSetEvent((PRKEVENT)(P + 64), 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
LABEL_16:
    if ( v8 )
      KeWaitForGate((__int64)P, 0);
  }
  if ( _InterlockedExchangeAdd(&dword_140469E80, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)&word_140469E88, 1u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(P, 0);
}
