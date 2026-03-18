/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C002FD68
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x1C0018DC0 (HUBPDO_ReportDeviceFailure.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C00798C0 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C003BABC (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, int a2, int a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // edi
  int v9; // esi
  __int64 v10; // rax
  int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h]
  _QWORD v16[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+38h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  memset(v16, 0, sizeof(v16));
  v8 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
          v8 = 12291;
      }
      else
      {
        v8 = 12289;
      }
    }
    else
    {
      v8 = 12288;
    }
    return (unsigned int)WER_CreateReport(a1, v6, v7, v8, a3);
  }
  else
  {
    v16[6] = off_1C0064158;
    v16[4] = *(_QWORD *)(a1 + 16);
    v16[3] = 0x100000001LL;
    v14 = HUBMISC_WerReportWorkItem;
    LOBYTE(v15) = 1;
    *(_OWORD *)((char *)v16 + 4) = 0LL;
    HIDWORD(v16[2]) = 0;
    v16[5] = 0LL;
    LODWORD(v16[0]) = 56;
    LODWORD(v13) = 24;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           &v13,
           v16,
           &v17);
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v17,
              off_1C0064158);
      *(_QWORD *)v10 = a1;
      *(_DWORD *)(v10 + 8) = a2;
      *(_DWORD *)(v10 + 12) = a3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v17);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x77u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
        v9);
    }
  }
  return (unsigned int)v9;
}
