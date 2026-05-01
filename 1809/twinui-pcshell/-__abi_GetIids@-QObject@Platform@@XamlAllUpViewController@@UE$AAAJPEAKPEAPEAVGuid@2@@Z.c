/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x18028B0A0
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6230 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6240 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6250 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6260 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6270 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6280 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 *     ?__abi_GetIids@?QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A6290 (-__abi_GetIids@-QObject@Platform@@XamlAllUpViewController@@WKA@E$AAAJPEAKPEAPEAVGuid@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180088448 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform__XamlAllUpViewController__UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  int v6; // [rsp+2Ch] [rbp-34h]
  int v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+34h] [rbp-2Ch]
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]

  v5 = -1050331480;
  v6 = 723772329;
  v7 = -1558760443;
  v8 = 1007450880;
  v9 = 1632090541;
  v10 = 1779938310;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)3,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3EA948107D3F0E38LL);
}
