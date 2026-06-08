/*
 * XREFs of ProcLibDeviceCreate @ 0x1C00265C4
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C001FB10 (EvtDriverDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  int v2; // edi
  _QWORD v4[9]; // [rsp+30h] [rbp-48h] BYREF

  DeferredContext[77] = 0;
  *((_DWORD *)DeferredContext + 180) = 100;
  *((_DWORD *)DeferredContext + 181) = 100;
  memset(v4, 0, 0x38uLL);
  v4[3] = 0x100000001LL;
  LODWORD(v4[0]) = 56;
  v4[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            DeferredContext);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         v4,
         DeferredContext + 208);
  if ( v2 >= 0 )
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 760), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 824), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 912), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 976), (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Au,
      (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
