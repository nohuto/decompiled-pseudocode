/*
 * XREFs of ?StaticDeviceIdRetryTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180140450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z @ 0x18013F864 (-PerformLicenseCheckForAllEndpoints@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180140818 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall AtmosCheck::StaticDeviceIdRetryTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        _DWORD *Context,
        PTP_TIMER Timer)
{
  void (__fastcall ***v4)(_QWORD); // rcx
  bool v5; // [rsp+38h] [rbp+10h] BYREF

  ++Context[58];
  if ( (int)AtmosCheck::UpdateLicenseMapForAllEndpoints(Context) >= 0 )
  {
    v5 = 0;
    if ( (int)AtmosCheck::PerformLicenseCheckForAllEndpoints((AtmosCheck *)Context, &v5) >= 0 && v5 )
    {
      v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)Context + 5);
      if ( v4 )
        (**v4)(v4);
    }
  }
}
