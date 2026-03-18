/*
 * XREFs of MiZeroNodePages @ 0x14017F3E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3C20 (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x1400FA2E4 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140127690 (KeSignalGate.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x140127FB0 (KeFindFirstSetLeftGroupAffinity.c)
 *     MiCreateZeroThreadContext @ 0x14017F64C (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x140185094 (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14066AAE0 (PsCreateSystemThreadEx.c)
 */

void __fastcall MiZeroNodePages(char *P)
{
  int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // eax
  PVOID PoolWithTag; // rax
  __int64 v6; // r8
  void *v7; // r12
  int v8; // r14d
  unsigned __int64 Mask; // r13
  _DWORD *ZeroThreadContext; // r15
  int FirstSetLeftGroupAffinity; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  USHORT Count[8]; // [rsp+58h] [rbp-29h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY v22; // [rsp+98h] [rbp+17h] BYREF

  *((_QWORD *)P + 3) = 0LL;
  v2 = *((_DWORD *)P + 12);
  *((_QWORD *)P + 5) = P + 32;
  *((_QWORD *)P + 4) = P + 32;
  KeQueryNodeActiveAffinity(v2, &Affinity, Count);
  v3 = Count[0];
  if ( (unsigned __int8)HalIsHyperThreadingEnabled() )
    v3 /= KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  *(_WORD *)P = 263;
  P[2] = 6;
  if ( !v3 )
    v3 = 1;
  *((_DWORD *)P + 1) = 0;
  *((_QWORD *)P + 2) = P + 8;
  *((_QWORD *)P + 1) = P + 8;
  *((_DWORD *)P + 13) = v3;
  *((_DWORD *)P + 22) = 0;
  *((_DWORD *)P + 29) = 4;
  v4 = *((_DWORD *)P + 29);
  if ( v3 - 1 < 4 )
    v4 = v3 - 1;
  *((_DWORD *)P + 23) = v3;
  *((_DWORD *)P + 29) = v4;
  *((_DWORD *)P + 28) = v3;
  *((_DWORD *)P + 30) = v3;
  *((_WORD *)P + 32) = 0;
  *((_DWORD *)P + 17) = 0;
  P[66] = 6;
  *((_QWORD *)P + 10) = P + 72;
  *((_QWORD *)P + 9) = P + 72;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v3, 0x20206D4Du);
  v7 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 16LL * v3);
  else
    v3 = 0;
  v8 = 0;
  *((_QWORD *)P + 12) = v7;
  if ( v3 )
  {
    Mask = Affinity.Mask;
    while ( 1 )
    {
      ZeroThreadContext = (_DWORD *)MiCreateZeroThreadContext(P, 1LL);
      if ( !ZeroThreadContext )
        break;
      v22 = Affinity;
      if ( Mask )
      {
        FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&Affinity);
        *(_DWORD *)v22.Reserved = 0;
        v22.Reserved[2] = 0;
        v12 = KiProcessorIndexToNumberMappingTable[FirstSetLeftGroupAffinity] & 0x3F;
        v22.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[FirstSetLeftGroupAffinity] >> 6;
        v22.Mask = 1LL << v12;
        Mask &= ~(1LL << v12);
        Affinity.Mask = Mask;
      }
      ZeroThreadContext[62] = v8;
      if ( (int)PsCreateSystemThreadEx(
                  &Handle,
                  0x1FFFFFLL,
                  0LL,
                  0LL,
                  0LL,
                  MiZeroLargePageThread,
                  ZeroThreadContext,
                  &v22,
                  0LL) < 0 )
      {
        v13 = v3 - v8;
        MiDeleteZeroThreadContext(ZeroThreadContext);
        ExFreePoolWithTag(ZeroThreadContext, 0);
        goto LABEL_25;
      }
      ObCloseHandle(Handle, 0);
      if ( ++v8 >= v3 )
        goto LABEL_16;
    }
    v13 = v3 - v8;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 13, -v13) == v13 )
      KeSignalGate((__int64)P, 1LL, v6);
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
LABEL_16:
    if ( v8 )
      KeWaitForGate((__int64)P, 0);
  }
  if ( _InterlockedExchangeAdd(&dword_14043E300, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)&word_14043E308, 1LL, v6);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(P, 0);
}
