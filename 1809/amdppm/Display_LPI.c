/*
 * XREFs of Display_LPI @ 0x1C0007E48
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x1C0025EE0 (AcpiGetCoordinatedLpiStates.c)
 *     InitAcpiLpiStates @ 0x1C002E1E8 (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DS @ 0x1C000591C (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_S @ 0x1C0005BB8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_i @ 0x1C0005FC0 (WPP_RECORDER_SF_i.c)
 *     DisplayGenAddr @ 0x1C0007C04 (DisplayGenAddr.c)
 */

char __fastcall Display_LPI(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  unsigned int i; // esi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    v4 = &retaddr;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Cu,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_S(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2LL,
                     0x9Du,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                     a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Eu,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x9Fu,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, 0xA0u, v14);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v4) = WPP_RECORDER_SF_(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0xA1u,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DS(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)a2,
          a3,
          a4,
          v14,
          i,
          *(const wchar_t **)(v8 + a1 + 96));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA3u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA4u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA5u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA6u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA7u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA8u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xA9u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 48), "    ", a3, a4);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xAAu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 60), "    ", v9, v10);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      LOBYTE(v4) = DisplayGenAddr((char *)(v8 + a1 + 72), "    ", v11, v12);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v4) = WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0xACu,
                       (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
  }
  return (char)v4;
}
