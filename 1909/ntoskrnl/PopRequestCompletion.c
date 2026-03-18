/*
 * XREFs of PopRequestCompletion @ 0x1401725B0
 * Callers:
 *     <none>
 * Callees:
 *     PopFreeIrp @ 0x140172750 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140172860 (PopDequeueQuerySetIrp.c)
 *     PopDiagTraceIrpFinish @ 0x140172A68 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14017B52C (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x14017B964 (PopPepDeviceDState.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x140180EB8 (PopFxNotifyPreDIrpCompletion.c)
 *     PopPepDeviceWaitWake @ 0x14019DC94 (PopPepDeviceWaitWake.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1402F14BC (PopDirectedDripsStartDisengageTimer.c)
 *     PopFxReleaseDevice @ 0x1402F4628 (PopFxReleaseDevice.c)
 *     PopUpdateWakeSource @ 0x1402F728C (PopUpdateWakeSource.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  char v5; // si
  IRP *v6; // rbp
  char v7; // r14
  void (__fastcall *v8)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *); // rax
  __int64 v9; // r8
  __int64 v11; // rdx
  int Status; // eax
  __int64 v13; // rax
  __int64 v14; // rcx

  v3 = *(volatile signed __int32 **)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 209);
  v6 = a2;
  v7 = *(_BYTE *)(a3 + 184);
  if ( v3 && v7 == 2 )
    PopFxNotifyPreDIrpCompletion((ULONG_PTR)v3);
  v8 = *(void (__fastcall **)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *))(a3 + 216);
  if ( v8 )
  {
    LOBYTE(a2) = v7;
    v8(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192), *(_QWORD *)(a3 + 224), &v6->IoStatus);
  }
  if ( v7 )
  {
    PopDequeueQuerySetIrp(v6);
    if ( v3 && *(_BYTE *)(a3 + 184) == 2 && *(_DWORD *)(a3 + 188) == 1 && v5 )
    {
      if ( *(_DWORD *)(a3 + 192) == 1 )
      {
        _m_prefetchw((const void *)(v3 + 8));
        v5 = (_InterlockedAnd(v3 + 8, 0xFFFFFFFD) & 2) != 0;
      }
      if ( v5 )
      {
        LOBYTE(v9) = 1;
        PopPepDeviceDState(*((_QWORD *)v3 + 7), *(unsigned int *)(a3 + 192), v9, *(unsigned int *)(a3 + 248));
        PopDiagTraceFxDevicePowerState(*((_QWORD *)v3 + 6), *(unsigned int *)(a3 + 192));
      }
    }
  }
  else
  {
    PopDiagTraceIrpFinish(v6);
    Status = v6->IoStatus.Status;
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(a3 + 240) )
      {
        PopUpdateWakeSource(*(PVOID *)(a3 + 24));
        Status = v6->IoStatus.Status;
      }
      if ( Status >= 0 )
      {
        v13 = *(_QWORD *)(a3 + 24);
        v14 = v13 ? *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) : 0LL;
        if ( v14 && (*(_DWORD *)(v14 + 760) & 0x30000) != 0 )
          PopDirectedDripsStartDisengageTimer(0LL);
      }
    }
    if ( v3 )
    {
      LOBYTE(v11) = 1;
      PopPepDeviceWaitWake(*((_QWORD *)v3 + 7), v11);
      PopFxReleaseDevice(v3);
    }
  }
  PopFreeIrp(v6);
  return 3221225494LL;
}
