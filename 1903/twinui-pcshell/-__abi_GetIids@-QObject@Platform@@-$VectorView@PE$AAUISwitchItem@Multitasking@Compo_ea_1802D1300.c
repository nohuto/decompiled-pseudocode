/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802D1300
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB8B0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@In.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB8C0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@Compo_ea_1800BB8C0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB8D0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@Compo_ea_1800BB8D0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB8E0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@Compo_ea_1800BB8E0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB8F0 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@Compo_ea_1800BB8F0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BB900 (-__abi_GetIids@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@Compo_ea_1800BB900.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18008B238 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform____VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 320867459;
  v6 = -762838085;
  v7 = -1342212256;
  v8 = 1429743636;
  v9 = -1732316025;
  v10 = 679698462;
  v11 = 879613671;
  v12 = 1271109486;
  v13 = -487826047;
  v14 = 856669251;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3B1E9032761D0D48LL);
}
