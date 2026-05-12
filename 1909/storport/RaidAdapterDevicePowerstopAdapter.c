/*
 * XREFs of RaidAdapterDevicePowerstopAdapter @ 0x1C0015CFC
 * Callers:
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C00121F0 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0018750 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaidAdapterStop @ 0x1C0015CAC (RaidAdapterStop.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00166B0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidAdapterClearCryptoKeyTable @ 0x1C003467C (RaidAdapterClearCryptoKeyTable.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 */

NTSTATUS __fastcall RaidAdapterDevicePowerstopAdapter(PIRP Irp, __int64 a2)
{
  unsigned int LowPart; // esi
  struct _DEVICE_OBJECT *v5; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v10 = 0LL;
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids, a2, Irp);
  }
  RaidAdapterStop(a2);
  v5 = *(struct _DEVICE_OBJECT **)(a2 + 8);
  *(_DWORD *)(a2 + 268) = LowPart;
  PoSetPowerState(v5, DevicePowerState, (POWER_STATE)LowPart);
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5080) )
    StorUpdateCrashDumpPowerReady(a2);
  if ( *(_QWORD *)(a2 + 5632) && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength == 3 )
    RaidAdapterClearCryptoKeyTable(a2);
  if ( *(char *)(a2 + 109) < 0 )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 676);
    v10 = *(_QWORD *)(a2 + 664);
    IoReportInterruptInactive(&v9);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v7 = Irp->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))RaidAdapterPowerDownDeviceCompletion;
  v7[-1].Context = 0LL;
  v7[-1].Control = -32;
  result = PoCallDriver(*(PDEVICE_OBJECT *)(a2 + 24), Irp);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    return WPP_SF_qqD(
             WPP_GLOBAL_Control->AttachedDevice,
             21LL,
             &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
             a2,
             Irp,
             result);
  }
  return result;
}
