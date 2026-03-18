/*
 * XREFs of PopSystemIrpCompletion @ 0x14059C460
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x14017ACE0 (PoFxReportDevicePoweredOn.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     ExReleaseSpinLockExclusive @ 0x14010A2A0 (ExReleaseSpinLockExclusive.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140165A10 (PopCompleteNotifyTransitionCommon.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140165CAC (PopFxIncrementDeviceSleepCount.c)
 *     IoFindDeviceThatFailedIrp @ 0x140171E30 (IoFindDeviceThatFailedIrp.c)
 *     PopFreeIrp @ 0x140172020 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140172130 (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopDiagTraceIrpPended @ 0x1402FEB64 (PopDiagTraceIrpPended.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 DeviceThatFailedIrp; // rdi
  char v5; // bp
  __int64 *v6; // r14
  int v7; // ebx
  int v8; // ebp
  PRKSEMAPHORE *v9; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  KIRQL v13; // bp
  IRP *v14; // [rsp+30h] [rbp-48h] BYREF
  NTSTATUS Status; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v17[2]; // [rsp+40h] [rbp-38h] BYREF

  DeviceThatFailedIrp = 0LL;
  v5 = PopErrataDisablePrimaryDeviceFastResume;
  v6 = *(__int64 **)(a3 + 216);
  v7 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v16 = 0;
    v17[0] = &v14;
    v14 = a2;
    v17[1] = 16LL;
    EtwTraceKernelEvent((__int64)v17, 1u, 0x80008000, 0x1227u, 0x401802u);
  }
  if ( (PopPoFxSystemIrpWaitForReportDevicePoweredReg || v5) && v7 == 1 )
  {
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6 - 14);
    v12 = *(v6 - 8);
    v13 = v11;
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 136) )
      {
        _m_prefetchw((const void *)(v12 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v6 - 14, v13);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v6 - 14, v11);
  }
  v8 = 0;
  if ( (PopCurrentBroadcast & 0x80000000000000LL) == 0 )
    v8 = a2->IoStatus.Status;
  if ( v8 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v9 = (PRKSEMAPHORE *)qword_140442FD0;
  if ( (unsigned __int8)(*(_BYTE *)qword_140442FD0 - 2) <= 1u && *((int *)qword_140442FD0 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v6 - 14));
    ObfDereferenceObjectWithTag((PVOID)*(v6 - 14), 0x72496F50u);
  }
  PopCompleteNotifyTransitionCommon((__int64)v9, v6, v8, DeviceThatFailedIrp);
  KeReleaseSemaphore(v9[5], 0, 1, 0);
  return 3221225494LL;
}
