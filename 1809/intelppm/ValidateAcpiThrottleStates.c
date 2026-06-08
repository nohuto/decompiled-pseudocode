/*
 * XREFs of ValidateAcpiThrottleStates @ 0x1C002B144
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0020AF4 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0008F84 (WPP_RECORDER_SF_ddd.c)
 *     Validate_PCT_PTC @ 0x1C0022254 (Validate_PCT_PTC.c)
 */

__int64 __fastcall ValidateAcpiThrottleStates(unsigned __int8 *a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v4; // r10d
  _DWORD *v5; // r8
  unsigned int v6; // ebx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-28h]
  unsigned int Number; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  *a3 = 0;
  if ( !a1 || !a2 )
    return (unsigned int)-1073741823;
  v4 = 1;
  if ( *a2 > 1 )
  {
    v5 = a2 + 7;
    while ( *(v5 - 1) < a2[5 * v4 - 4] && *v5 <= a2[5 * v4 - 3] )
    {
      ++v4;
      v5 += 5;
      if ( v4 >= *a2 )
        goto LABEL_8;
    }
    *a3 = 2048;
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, (__int64)v5, 0x11u, v9);
    return (unsigned int)-1073741823;
  }
LABEL_8:
  if ( a2[1] != 100 )
  {
    *a3 = 2048;
    Number = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x12u,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      Number);
    return (unsigned int)-1073741823;
  }
  v8 = Validate_PCT_PTC(a1);
  v6 = v8;
  if ( v8 < 0 )
  {
    *a3 = 1024;
    v12 = v8;
    v11 = KeGetPcr()->Prcb.Number;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x13u,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      v11,
      v12);
  }
  return v6;
}
