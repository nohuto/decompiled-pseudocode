/*
 * XREFs of Display_LPI @ 0x1C000B630
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0020AA4 (InitAcpiLpiStates.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1C0030CAC (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002648 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009A50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DS @ 0x1C000BF08 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_S @ 0x1C000C1A4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_i @ 0x1C000C5B4 (WPP_RECORDER_SF_i.c)
 */

char __fastcall Display_LPI(__int64 a1, __int64 a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rdi
  unsigned int i; // esi
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // r9d
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    v4 = &retaddr;
    v5 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        LOBYTE(v4) = WPP_RECORDER_SF_(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x9Cu,
                       (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          LOBYTE(v4) = WPP_RECORDER_SF_S(
                         WPP_GLOBAL_Control->DeviceExtension,
                         a2,
                         2,
                         157,
                         (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                         v5);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            LOBYTE(v4) = WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           5u,
                           2u,
                           0x9Eu,
                           (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              LOBYTE(v4) = WPP_RECORDER_SF_D(
                             (__int64)WPP_GLOBAL_Control->DeviceExtension,
                             5u,
                             2u,
                             0x9Fu,
                             (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                LOBYTE(v4) = WPP_RECORDER_SF_i(
                               WPP_GLOBAL_Control->DeviceExtension,
                               a2,
                               a3,
                               160,
                               v14,
                               *(_QWORD *)(a1 + 8));
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v4) = WPP_RECORDER_SF_(
                               (__int64)WPP_GLOBAL_Control->DeviceExtension,
                               5u,
                               2u,
                               0xA1u,
                               (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DS(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v14, i, *(_QWORD *)(v8 + a1 + 96));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0xA3u,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0xA4u,
                (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0xA5u,
                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0xA6u,
                    (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0xA7u,
                      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xA8u,
                        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      WPP_RECORDER_SF_(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xA9u,
                        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                    }
                  }
                }
              }
            }
          }
        }
      }
      DisplayGenAddr((char *)(v8 + a1 + 48), (__int64)"    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xAAu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      DisplayGenAddr((char *)(v8 + a1 + 60), (__int64)"    ", v9, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0xABu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      LOBYTE(v4) = DisplayGenAddr((char *)(v8 + a1 + 72), (__int64)"    ", v11, v12);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
