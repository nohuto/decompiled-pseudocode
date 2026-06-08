/*
 * XREFs of Display_CST @ 0x1C00059FC
 * Callers:
 *     InitAcpiCStates @ 0x1C002E340 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     DisplayGenAddr @ 0x1C00061A4 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_CST(int *a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  int *v4; // rsi
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                5u,
                                2u,
                                0x78u,
                                (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x79u,
                                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v6 = *a1;
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x7Au,
                                    (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                                    v6);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0x7Bu,
                                    (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      v4 = &a1[5 * i];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v5) = i;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x7Cu,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
            v5);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v5) = *((unsigned __int8 *)v4 + 16);
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x7Du,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
              v5);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v5) = *((unsigned __int16 *)v4 + 9);
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x7Eu,
                (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                v5);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v5) = v4[5];
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x7Fu,
                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                  v5);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0x80u,
                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
              }
            }
          }
        }
      }
      result = (_UNKNOWN **)DisplayGenAddr(v4 + 1, "    ");
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0x81u,
                                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      }
    }
  }
  return result;
}
