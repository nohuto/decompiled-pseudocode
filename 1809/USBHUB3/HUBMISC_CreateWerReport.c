/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C002D2E0
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x1C00176B0 (HUBPDO_ReportDeviceFailure.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C0072980 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C003775C (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, int a2, int a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // r9d
  _QWORD v11[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+38h] BYREF

  if ( KeGetCurrentIrql() < 2u )
  {
    v9 = 0;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v9 = 12289;
      }
      else if ( a2 == 2 )
      {
        v9 = 12291;
      }
    }
    else
    {
      v9 = 12288;
    }
    return (unsigned int)WER_CreateReport(a1, a2, a3, v9, a3);
  }
  else
  {
    memset(v12, 0, sizeof(v12));
    v12[6] = off_1C005F158;
    v12[4] = *(_QWORD *)(a1 + 16);
    v12[3] = 0x100000001LL;
    v11[1] = HUBMISC_WerReportWorkItem;
    v11[2] = 1LL;
    LODWORD(v12[0]) = 56;
    v11[0] = 24LL;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v11,
           v12,
           &v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v13,
             off_1C005F158);
      *(_QWORD *)v8 = a1;
      *(_DWORD *)(v8 + 8) = a2;
      *(_DWORD *)(v8 + 12) = a3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v13);
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x76u,
        (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
        v6);
    }
  }
  return v7;
}
