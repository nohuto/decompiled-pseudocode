/*
 * XREFs of ?GetAccessibilitySettings@@YA_N_KPEAUIPropertySet@Collections@Foundation@Windows@@PEA_K2PEAEPEA_N@Z @ 0x18006CC00
 * Callers:
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x18006DC48 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 * Callees:
 *     ?GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z @ 0x18006C7FC (-GetUInt64KeyFromUInt64Value@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@_KPEA_K@Z.c)
 *     ??$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x18006F71C (--$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z.c)
 *     ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x18006F950 (--$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     swprintf_s @ 0x18012C678 (swprintf_s.c)
 */

bool __fastcall GetAccessibilitySettings(
        __int64 a1,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int8 *a5,
        bool *a6)
{
  bool v10; // bl
  __int64 v11; // rdx
  bool result; // al
  bool v13; // zf
  int v14; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-61h] BYREF
  __int64 v16; // [rsp+30h] [rbp-59h] BYREF
  wchar_t Buffer[20]; // [rsp+38h] [rbp-51h] BYREF
  wchar_t v18[20]; // [rsp+60h] [rbp-29h] BYREF

  v16 = 0LL;
  v14 = 0;
  v15 = 0xFEDCBA9876543210uLL;
  v10 = 0;
  swprintf_s(Buffer, 0x11uLL, L"%llx", a1);
  swprintf_s(v18, 0x11uLL, L"%llX", a1);
  *a3 = 0LL;
  GetPropertyValue<unsigned __int64>(a2, L"GamepadAccessibilityButtonSettings", &v15);
  GetPropertyValue<unsigned __int64>(a2, L"GamepadAccessibilityAnalogSettings", &v16);
  GetPropertyValue<unsigned long>(a2, v11, &v14);
  if ( (int)GetPropertyValue<unsigned __int64>(a2, Buffer, a3) < 0
    && (int)GetPropertyValue<unsigned __int64>(a2, v18, a3) < 0
    || !*a3 )
  {
    v10 = (int)GetUInt64KeyFromUInt64Value(a2, a1, a3) >= 0;
  }
  result = v10;
  *a4 = v15;
  v13 = v14 == 0;
  *a5 = v16 & 0xF;
  *a6 = !v13;
  return result;
}
