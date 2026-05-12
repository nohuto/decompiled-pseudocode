/*
 * XREFs of RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78
 * Callers:
 *     RaidAdapterDevicePowerUpSrbComplete @ 0x1C0012330 (RaidAdapterDevicePowerUpSrbComplete.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0015EA0 (RaidAdapterPowerUpDeviceCompletion.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00108BC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015AF8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C2C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterRestartQueues @ 0x1C0016154 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0016230 (RaidResumeAdapterQueue.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00166B0 (StorUpdateCrashDumpPowerReady.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     RaidAdapterReInitialize @ 0x1C0035A5C (RaidAdapterReInitialize.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     McTemplateK0qpd @ 0x1C003FF48 (McTemplateK0qpd.c)
 *     StorPortUnitIdleState @ 0x1C0041BB0 (StorPortUnitIdleState.c)
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
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0LL;
  v13 = 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a2, 2) )
    RaidAdapterRestartAdapter(a2);
  else
    RaidAdapterReInitialize(a2);
  RaidResumeAdapterQueue(a2);
  v4 = KfRaiseIrql(2u);
  RaidAdapterRestartQueues(a2);
  KeLowerIrql(v4);
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 80), &LockHandle);
  *(_DWORD *)(a2 + 268) = LowPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoSetPowerState(*(PDEVICE_OBJECT *)(a2 + 8), DevicePowerState, (POWER_STATE)LowPart);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      a2,
      Irp,
      Irp->IoStatus.Status);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    IoGetActivityIdIrp(Irp, v15);
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0qpd(v7, v6, (unsigned int)v15, *(_DWORD *)(a2 + 56), (char)Irp, Irp->IoStatus.Status);
  }
  if ( *(char *)(a2 + 109) < 0 )
  {
    LODWORD(v12) = *(_DWORD *)(a2 + 676);
    v13 = *(_QWORD *)(a2 + 664);
    IoReportInterruptActive(&v12);
  }
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5080) )
    StorUpdateCrashDumpPowerReady(a2);
  RaidCompleteRequestEx(Irp, 0, Irp->IoStatus.Status);
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a2 + 5008));
    if ( !v8 )
      break;
    v9 = (__int64)&v8[-121];
    if ( *((_BYTE *)&v8[-2].Next + 9) )
    {
      v10 = *(IRP **)(v9 + 1920);
      *(_QWORD *)(v9 + 1920) = 0LL;
      *(_BYTE *)(v9 + 1913) = 0;
      RaidUnitProcessSetDevicePowerIrp((__int64)&v8[-121], v10);
      RaUnitReleaseRemoveLock(v9);
    }
    else if ( *(_BYTE *)(v9 + 1912) )
    {
      v11 = *(unsigned int *)(v9 + 1916);
      *(_BYTE *)(v9 + 1912) = 0;
      StorPortUnitIdleState(&v8[-121], 0LL, v11);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 256));
}
