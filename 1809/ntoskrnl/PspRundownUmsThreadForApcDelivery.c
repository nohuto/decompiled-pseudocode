/*
 * XREFs of PspRundownUmsThreadForApcDelivery @ 0x1408903AC
 * Callers:
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 *     KiSuspendUmsThread @ 0x140846974 (KiSuspendUmsThread.c)
 *     PspUmsUnInitThread @ 0x14088C0B4 (PspUmsUnInitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     KeInitializeGate @ 0x14013A474 (KeInitializeGate.c)
 *     PsLookupThreadByThreadId @ 0x140649960 (PsLookupThreadByThreadId.c)
 *     KeClearUmsThreadKernelLock @ 0x140846518 (KeClearUmsThreadKernelLock.c)
 *     KeSetUmsThreadKernelLock @ 0x1408466C8 (KeSetUmsThreadKernelLock.c)
 *     KeSynchronizeUmsThread @ 0x140846738 (KeSynchronizeUmsThread.c)
 */

__int64 __fastcall PspRundownUmsThreadForApcDelivery(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v8; // r15
  __int64 result; // rax
  NTSTATUS v10; // r14d
  __int64 v11; // rdi
  PETHREAD v12; // rdi
  HANDLE ThreadId[2]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v14[88]; // [rsp+50h] [rbp-59h] BYREF
  _DWORD *v15; // [rsp+A8h] [rbp-1h]
  int v16; // [rsp+B0h] [rbp+7h]
  _BYTE v17[72]; // [rsp+B8h] [rbp+Fh] BYREF
  PETHREAD Thread; // [rsp+110h] [rbp+67h] BYREF
  __int64 v19; // [rsp+120h] [rbp+77h]

  v19 = a3;
  v4 = *(_QWORD *)(a1 + 496);
  Thread = 0LL;
  v8 = 0;
  result = KeSetUmsThreadKernelLock(a3, (unsigned __int64 *)ThreadId);
  v10 = result;
  if ( (int)result < 0 )
    return result;
  *a2 |= 4u;
  --*(_WORD *)(a1 + 486);
  if ( a4 )
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 504), -1LL);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 504);
    if ( v11 == -1 )
      goto LABEL_18;
  }
  if ( !*(_QWORD *)(v4 + 72) )
  {
    *a2 |= 1u;
LABEL_19:
    v12 = Thread;
    goto LABEL_20;
  }
  if ( !v11 )
  {
    if ( ThreadId[0] )
    {
      v10 = PsLookupThreadByThreadId(ThreadId[0], &Thread);
      if ( v10 >= 0 )
      {
        v12 = Thread;
        v8 = 1;
        if ( Thread->Process != *(_KPROCESS **)(a1 + 544) )
        {
          *a2 |= 2u;
          goto LABEL_20;
        }
        goto LABEL_9;
      }
    }
LABEL_18:
    *a2 |= 2u;
    goto LABEL_19;
  }
  v12 = *(PETHREAD *)(v11 + 96);
  ObReferenceObjectSafe((__int64)v12);
LABEL_9:
  KeInitializeGate((__int64)v17);
  v15 = a2;
  KeInitializeApc((__int64)v14, (__int64)v12, 0, (__int64)PspRelinquishUmsThreadSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( KeInsertQueueApc((__int64)v14, (__int64)v12, a1, 2u) )
  {
    KeWaitForGate((__int64)v17, 0);
    v10 = v16;
    v8 = 1;
    if ( v16 >= 0 && (*a2 & 1) != 0 )
    {
      KeSynchronizeUmsThread(a1, a4);
LABEL_21:
      ObfDereferenceObject(v12);
      goto LABEL_22;
    }
  }
  else
  {
    *a2 |= 2u;
    v8 = 1;
  }
LABEL_20:
  KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    goto LABEL_21;
LABEL_22:
  if ( v10 < 0 )
  {
    KeClearUmsThreadKernelLock(v19);
    *a2 &= ~4u;
  }
  return (unsigned int)v10;
}
