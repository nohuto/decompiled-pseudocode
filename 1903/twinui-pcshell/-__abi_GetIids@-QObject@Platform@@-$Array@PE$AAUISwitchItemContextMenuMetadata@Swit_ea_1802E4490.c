/*
 * XREFs of ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1802E4490
 * Callers:
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCEB0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCEC0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCEC0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCED0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCED0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCEE0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCEE0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCEF0 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCEF0.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WDA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCF00 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCF00.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WEA@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCF10 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCF10.c)
 *     ?__abi_GetIids@?QObject@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WHI@E$AAAJPEAKPEAPEAVGuid@2@@Z @ 0x1800BCF20 (-__abi_GetIids@-QObject@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1800BCF20.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18008B238 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall ___abi_GetIids__QObject_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJPEAKPEAPEAVGuid_2__Z(
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

  v5 = 1435220392;
  v6 = -13688208;
  v7 = 819308585;
  v8 = 1076264868;
  v9 = 1540864899;
  v10 = -1633071442;
  v11 = -965120979;
  v12 = 1553140353;
  v13 = 684393117;
  v14 = -1829520597;
  v15 = 56LL;
  v16 = 192;
  v17 = 1174405120;
  return __winRT::__getIids(
           (__winRT *)4,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3AACEFCCA69F87C1LL);
}
