/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x180260910
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3B50 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAA.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3B60 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBA@E$A.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3B70 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$A.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3B80 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCA@E$A.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3B90 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$A.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3BA0 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WDA@E$A.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WEA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3BB0 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WEA@E$A.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WHI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800A3BC0 (-__abi_GetIids@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WHI@E$A.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180088448 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  int v5; // [rsp+28h] [rbp-48h]
  int v6; // [rsp+2Ch] [rbp-44h]
  int v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+34h] [rbp-3Ch]
  int v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+3Ch] [rbp-34h]
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  v5 = 639045002;
  v6 = 975021596;
  v7 = 819308585;
  v8 = 1076264868;
  v9 = 1540864899;
  v10 = -1633071442;
  v11 = 2120490263;
  v12 = 1343316573;
  v13 = 500875198;
  v14 = 23865584;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x37DC63CCE894A67DLL);
}
