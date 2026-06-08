/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C0020CA4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 *     AcquirePccInterface @ 0x1C0020EF4 (AcquirePccInterface.c)
 *     ValidatePccEntry @ 0x1C002BB98 (ValidatePccEntry.c)
 *     AcpiEval_PCCP @ 0x1C002DE3C (AcpiEval_PCCP.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int v5; // eax
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v2 = AcquirePccInterface();
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[26],
      0LL);
    v5 = AcpiEval_PCCP(a1, a1 + 69);
    v3 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids);
      }
      else
      {
        v7 = v5;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids,
          v7);
      }
      goto LABEL_14;
    }
    v3 = ValidatePccEntry(a1[69]);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)(dword_1C001A874 - 1) > 0x26 )
      {
LABEL_14:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
        return (unsigned int)v3;
      }
      v9 = 40;
      v8 = dword_1C001A874;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0xEu,
        (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids,
        v8,
        v9);
      v3 = -1073741823;
    }
    a1[33] &= ~0x80000000uLL;
    goto LABEL_14;
  }
  if ( v2 == -1073741637 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids);
  }
  else
  {
    v6 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids,
      v6);
  }
  return (unsigned int)v3;
}
