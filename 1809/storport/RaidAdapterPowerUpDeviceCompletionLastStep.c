/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C00121F0 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0013050 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012874 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterRestartAdapter @ 0x1C0012D80 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C001435C (RaidResumeAdapterQueue.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016964 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C0038A8C (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     McTemplateK0qpd @ 0x1C0041ED0 (McTemplateK0qpd.c)
 *     StorPortUnitIdleState @ 0x1C0043E00 (StorPortUnitIdleState.c)
 */

void __fastcall RaidAdapterPowerUpDeviceCompletionLastStep(PIRP Irp, __int64 a2)
{
  KIRQL v4; // bl
  unsigned int LowPart; // ebx
  int v6; // edx
  int v7; // ecx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rbx
  IRP *v10; // rdx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-20h] BYREF

  if ( (unsigned int)RaidIsAdapterControlSupported(a2, 2LL) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2, 0LL);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 284) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    IoGetActivityIdIrp(Irp, v15);
    if ( (byte_1C00617E2 & 0x10) != 0 )
      McTemplateK0qpd(v7, v6, (unsigned int)v15, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(char *)(a2 + 109) < 0 )
  {
    v12 = *(_DWORD *)(a2 + 700);
    v13 = *(_QWORD *)(a2 + 688);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5208) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5136));
    if ( !v8 )
      break;
    v9 = (__int64)&v8[-121];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1920);
      *(_QWORD *)(v9 + 1920) = 0LL;
      *(_BYTE *)(v9 + 1913) = 0;
      RaidUnitProcessSetDevicePowerIrp(&v8[-121], v10);
      RaUnitReleaseRemoveLock(v9);
    }
    else if ( *(_BYTE *)(v9 + 1912) )
    {
      v11 = *(unsigned int *)(v9 + 1916);
      *(_BYTE *)(v9 + 1912) = 0;
      StorPortUnitIdleState(&v8[-121], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 272));
}
