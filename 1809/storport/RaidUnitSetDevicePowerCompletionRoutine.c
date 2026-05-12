/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00139D0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
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
      &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      DeviceExtension,
      Context);
  }
  v7 = DeviceExtension[3];
  if ( *(_QWORD *)(v7 + 5152) )
  {
    v9 = *((_BYTE *)DeviceExtension + 449);
    if ( (v9 & 8) != 0 )
    {
      *((_BYTE *)DeviceExtension + 449) = v9 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
    }
  }
  *((_BYTE *)DeviceExtension + 449) &= ~1u;
  v8 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      DeviceExtension,
      Context,
      v8);
  }
}
