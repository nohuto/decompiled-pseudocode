/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180308E30
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800E0340 (-__abi_GetIids@-QObject@Platform@@XamlAltTabViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800E0350 (-__abi_GetIids@-QObject@Platform@@XamlAltTabViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800E0360 (-__abi_GetIids@-QObject@Platform@@XamlAltTabViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800E0370 (-__abi_GetIids@-QObject@Platform@@XamlAltTabViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800E0380 (-__abi_GetIids@-QObject@Platform@@XamlAltTabViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800E0390 (-__abi_GetIids@-QObject@Platform@@XamlAltTabViewController@@WJI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18008DE18 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__XamlAltTabViewController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+28h] [rbp-28h]
  int v6; // [rsp+2Ch] [rbp-24h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  int v8; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+3Ch] [rbp-14h]

  v5 = -567777393;
  v6 = -1036765875;
  v7 = 56LL;
  v8 = 192;
  v9 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)2,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x39552CE76F08590DLL);
}
