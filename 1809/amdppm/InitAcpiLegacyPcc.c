/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C002DFA0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     AcquirePccInterface @ 0x1C00214C0 (AcquirePccInterface.c)
 *     AcpiEval_PCCP @ 0x1C0024FC0 (AcpiEval_PCCP.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  _DWORD *v5; // rcx
  unsigned __int16 v6; // r9

  v2 = AcquirePccInterface((__int64)a1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[26],
      0LL);
    v4 = AcpiEval_PCCP((__int64)a1, a1 + 69);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( v4 == -1073741772 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids);
      else
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids,
          v4);
      goto LABEL_20;
    }
    v5 = (_DWORD *)a1[69];
    if ( qword_1C00118C8 )
    {
      if ( *v5 <= (unsigned int)(dword_1C00118D0 - 4) )
      {
        if ( v5[1] <= (unsigned int)(dword_1C00118D0 - 4) )
        {
          v3 = 0;
          if ( (unsigned int)(dword_1C00118C4 - 1) > 0x26 )
          {
LABEL_20:
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
            return v3;
          }
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0xEu,
            (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids,
            dword_1C00118C4,
            40);
          v3 = -1073741823;
LABEL_19:
          a1[33] &= ~0x80000000uLL;
          goto LABEL_20;
        }
        v6 = 50;
      }
      else
      {
        v6 = 49;
      }
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v6,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        KeGetPcr()->Prcb.Number);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x30u,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids);
    }
    v3 = -1073741811;
    goto LABEL_19;
  }
  if ( v2 == -1073741637 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids);
  else
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_efe3bcbd9fba319583ae282d013a539b_Traceguids,
      v2);
  return v3;
}
