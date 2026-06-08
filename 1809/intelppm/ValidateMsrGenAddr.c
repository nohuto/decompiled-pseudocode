/*
 * XREFs of ValidateMsrGenAddr @ 0x1C002BA5C
 * Callers:
 *     ValidateMsr_PCT @ 0x1C002BAE4 (ValidateMsr_PCT.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall ValidateMsrGenAddr(_BYTE *a1)
{
  unsigned __int16 v1; // r9
  unsigned int v2; // ebx
  unsigned int Number; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  if ( *a1 != 127 )
  {
    v1 = 37;
LABEL_9:
    v2 = -1073741811;
    v5 = -1073741811;
    Number = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v1,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      Number,
      v5);
    return v2;
  }
  if ( a1[1] != 64 )
  {
    v1 = 38;
    goto LABEL_9;
  }
  v2 = 0;
  if ( a1[2] )
  {
    v1 = 39;
    goto LABEL_9;
  }
  if ( a1[3] != 64 )
  {
    v1 = 40;
    goto LABEL_9;
  }
  return v2;
}
