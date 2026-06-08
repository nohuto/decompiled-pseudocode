/*
 * XREFs of Validate_PCT_PTC @ 0x1C0022254
 * Callers:
 *     ValidateAcpi2PStates @ 0x1C0020FF4 (ValidateAcpi2PStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C002B144 (ValidateAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Validate_PCT_PTC(unsigned __int8 *a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  unsigned __int8 v4; // al

  v1 = -1073741637;
  if ( !*((_QWORD *)a1 + 2) || (v4 = a1[12], *a1 == v4) )
  {
    v2 = *a1;
    if ( v2 == 1 || v2 == 127 )
      return 0;
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
        v2);
  }
  else
  {
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
      *a1,
      v4);
  }
  return v1;
}
