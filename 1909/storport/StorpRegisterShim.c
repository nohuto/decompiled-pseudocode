/*
 * XREFs of StorpRegisterShim @ 0x1C0070208
 * Callers:
 *     DllInitialize @ 0x1C00208A0 (DllInitialize.c)
 * Callees:
 *     WPP_SF_D @ 0x1C0038C58 (WPP_SF_D.c)
 */

__int64 StorpRegisterShim()
{
  int v0; // r9d
  int v1; // eax
  __int64 result; // rax

  v0 = KseRegisterShim(&SrbShim, 0LL, 0LL);
  if ( v0 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_296d74ef2836386db84db064cfdd7f0b_Traceguids,
      v0);
  }
  v1 = KseRegisterShim(&DeviceIdShim, 0LL, 0LL);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_296d74ef2836386db84db064cfdd7f0b_Traceguids,
      v1);
  }
  result = KseRegisterShim(&ATADeviceIdShim, 0LL, 0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return WPP_SF_D(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             0xCu,
             (__int64)&WPP_296d74ef2836386db84db064cfdd7f0b_Traceguids,
             result);
  }
  return result;
}
