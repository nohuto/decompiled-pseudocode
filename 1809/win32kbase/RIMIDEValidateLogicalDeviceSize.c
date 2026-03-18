/*
 * XREFs of RIMIDEValidateLogicalDeviceSize @ 0x1C011FC0C
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C011B37C (RIMPopulatePointerDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIDEValidateLogicalDeviceSize(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 == -1 || a3 == -1 )
  {
    WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0x14u, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids);
    v3 = -1073741668;
  }
  if ( a1[33] - a1[31] <= 1 || a1[34] - a1[32] <= 1 )
  {
    WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0x15u, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids);
    return (unsigned int)-1073741668;
  }
  return v3;
}
