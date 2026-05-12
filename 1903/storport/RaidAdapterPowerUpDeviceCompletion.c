/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C0016690
 * Callers:
 *     <none>
 * Callees:
 *     RaidPowerPassToMiniPort @ 0x1C00112EC (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0016380 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0022A98 (RaidAdapterSendPowerToMiniport.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  int Status; // r8d
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 29LL, &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids, v2, a2);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_20;
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
LABEL_8:
    RaidAdapterPowerUpDeviceCompletionLastStep(a2, v2);
    return 3221225494LL;
  }
  v7 = RaidPowerPassToMiniPort(a1, (__int64)a2, (__int64)RaidAdapterDevicePowerUpSrbComplete);
  Status = v7;
  if ( v7 < 0 )
  {
LABEL_20:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        30LL,
        &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
        v2,
        a2,
        Status);
    }
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids, v2, a2, v7);
  }
  return 3221225494LL;
}
