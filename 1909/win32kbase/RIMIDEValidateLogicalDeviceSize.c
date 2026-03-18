/*
 * XREFs of RIMIDEValidateLogicalDeviceSize @ 0x1C0149034
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C01415E4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIDEValidateLogicalDeviceSize(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 == -1 || a3 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 52, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    }
    v3 = -1073741668;
  }
  if ( a1[33] - a1[31] <= 1 || a1[34] - a1[32] <= 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 53, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids);
    }
    return (unsigned int)-1073741668;
  }
  return v3;
}
