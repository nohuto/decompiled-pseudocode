/*
 * XREFs of RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0011FB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 */

void __fastcall RaidAdapterQueryDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *DeviceExtension; // rdi
  int v7; // esi

  DeviceExtension = (PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      36LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      DeviceExtension,
      Context);
  }
  v7 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  ExReleaseRundownProtectionCacheAware(DeviceExtension[32]);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      37LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      DeviceExtension,
      Context,
      v7);
  }
}
