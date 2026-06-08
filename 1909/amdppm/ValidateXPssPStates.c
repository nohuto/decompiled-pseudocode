/*
 * XREFs of ValidateXPssPStates @ 0x1C002EAAC
 * Callers:
 *     InitAcpiPerfStates @ 0x1C002C354 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 *     ValidateMsr_PCT @ 0x1C002F184 (ValidateMsr_PCT.c)
 *     ValidatePssCore @ 0x1C002F34C (ValidatePssCore.c)
 */

__int64 __fastcall ValidateXPssPStates(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  unsigned __int16 v6; // r9
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  v5 = ValidatePssCore(a2, "XPSS");
  if ( v5 >= 0 )
  {
    v5 = ValidateMsr_PCT(a1);
    if ( v5 < 0 )
    {
      *a3 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 16;
        v9 = v5;
        Number = KeGetPcr()->Prcb.Number;
        goto LABEL_7;
      }
    }
  }
  else
  {
    *a3 |= 0x80u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 15;
      v9 = v5;
      Number = KeGetPcr()->Prcb.Number;
LABEL_7:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v6,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        Number,
        v9);
    }
  }
  return (unsigned int)v5;
}
