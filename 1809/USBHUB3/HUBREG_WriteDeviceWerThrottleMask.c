/*
 * XREFs of HUBREG_WriteDeviceWerThrottleMask @ 0x1C00775BC
 * Callers:
 *     WER_UpdateThrottlePolicy @ 0x1C00373FC (WER_UpdateThrottlePolicy.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_WriteDeviceWerThrottleMask(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v12[0] = 0LL;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, _QWORD *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         a1,
         1LL,
         131103LL,
         0LL,
         v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, int, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v12[0],
           &g_DeviceWerKey,
           131103LL,
           1,
           0LL,
           0LL,
           &v13);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, _QWORD))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v13,
             &g_ThrottleMask,
             a2);
      v6 = v8;
      if ( v8 < 0 )
      {
        LODWORD(v11) = v8;
        WPP_RECORDER_SF_d(a3, 2u, 5u, 0x88u, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v11);
      }
    }
    else
    {
      LODWORD(v11) = v7;
      WPP_RECORDER_SF_d(a3, 2u, 5u, 0x87u, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v11);
    }
  }
  else
  {
    LODWORD(v10) = v5;
    WPP_RECORDER_SF_d(a3, 2u, 5u, 0x86u, (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids, v10);
  }
  if ( v13 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v12[0] )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v6;
}
