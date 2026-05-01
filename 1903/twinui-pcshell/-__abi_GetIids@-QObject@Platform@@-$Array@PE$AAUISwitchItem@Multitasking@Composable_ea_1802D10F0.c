/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802D10F0
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB770 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB780 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB780.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB790 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB790.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB7A0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB7A0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB7B0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB7B0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB7C0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB7C0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WEA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB7D0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB7D0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@WHI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB7E0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Multitasking@Composable_ea_1800BB7E0.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18008B238 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform____Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = -978260051;
  v6 = -805088279;
  v7 = 819308585;
  v8 = 1076264868;
  v9 = 1540864899;
  v10 = -1633071442;
  v11 = 284910632;
  v12 = 1565865015;
  v13 = 244990133;
  v14 = 1501386519;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x34CC35BB1DE77EC5LL);
}
