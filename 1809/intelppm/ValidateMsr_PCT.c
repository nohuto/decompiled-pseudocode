/*
 * XREFs of ValidateMsr_PCT @ 0x1C002BAE4
 * Callers:
 *     ValidateXPssPStates @ 0x1C002C124 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 *     ValidateMsrGenAddr @ 0x1C002BA5C (ValidateMsrGenAddr.c)
 */

__int64 __fastcall ValidateMsr_PCT(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v2 = ValidateMsrGenAddr((_BYTE *)a1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 4) )
    {
      if ( !*(_QWORD *)(a1 + 16) )
        return 0;
      v5 = ValidateMsrGenAddr((_BYTE *)(a1 + 12));
      v3 = v5;
      if ( v5 >= 0 )
        return 0;
      v4 = 36;
      v8 = v5;
    }
    else
    {
      v3 = -1073741811;
      v8 = -1073741811;
      v4 = 35;
    }
    Number = KeGetPcr()->Prcb.Number;
  }
  else
  {
    v4 = 34;
    v8 = v2;
    Number = KeGetPcr()->Prcb.Number;
  }
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v4,
    (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
    Number,
    v8);
  return v3;
}
