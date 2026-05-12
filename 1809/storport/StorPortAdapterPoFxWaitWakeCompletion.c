/*
 * XREFs of StorPortAdapterPoFxWaitWakeCompletion @ 0x1C0043A80
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_D @ 0x1C003B9A0 (WPP_SF_D.c)
 */

void __fastcall StorPortAdapterPoFxWaitWakeCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // ebx
  __int64 v6; // rcx

  Status = IoStatus->Status;
  *(_QWORD *)(Context[644] + 72LL) = 0LL;
  v6 = Context[644];
  if ( v6
    && (*((_DWORD *)Context + 71) != 1 || (*((_BYTE *)Context + 108) & 2) != 0)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 0) )
  {
    RaidAdapterPoFxActivateComponent((__int64)Context, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x42u,
      (__int64)&WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      Status);
  }
}
