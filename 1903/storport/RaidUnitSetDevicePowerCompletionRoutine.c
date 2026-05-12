/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011E50
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00079A0 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C0037AC0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v7; // rcx
  int v8; // esi
  char v9; // al

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      DeviceExtension,
      Context);
  }
  v7 = DeviceExtension[3];
  if ( *(_QWORD *)(v7 + 5024) )
  {
    v9 = *((_BYTE *)DeviceExtension + 161);
    if ( (v9 & 8) != 0 )
    {
      *((_BYTE *)DeviceExtension + 161) = v9 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
    }
  }
  *((_BYTE *)DeviceExtension + 161) &= ~1u;
  v8 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      DeviceExtension,
      Context,
      v8);
  }
}
