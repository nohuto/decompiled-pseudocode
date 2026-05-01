/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180260A50
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3C10 (-__abi_GetIids@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3C20 (-__abi_GetIids@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@_ea_1800A3C20.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3C30 (-__abi_GetIids@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@_ea_1800A3C30.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180088448 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 931621284;
  v6 = -960019994;
  v7 = 819308585;
  v8 = 1076264868;
  v9 = 1540864899;
  v10 = -1633071442;
  v11 = 56LL;
  v12 = 192;
  v13 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)3,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3599DBD3D35AA93CLL);
}
