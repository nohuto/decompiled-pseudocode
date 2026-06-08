/*
 * XREFs of Display_CST @ 0x1C00024B4
 * Callers:
 *     InitAcpiCStates @ 0x1C00203AC (InitAcpiCStates.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002648 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall Display_CST(unsigned int *a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  unsigned int *v4; // rsi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                WPP_GLOBAL_Control->DeviceExtension,
                                5,
                                2,
                                120,
                                (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  2,
                                  121,
                                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    5,
                                    2,
                                    122,
                                    (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                                    *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    5,
                                    2,
                                    123,
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
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            124,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
            i);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              125,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
              *((_BYTE *)v4 + 16));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                2,
                126,
                (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                *((_WORD *)v4 + 9));
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  127,
                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                  v4[5]);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  128,
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
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  2,
                                  129,
                                  (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      }
    }
  }
  return result;
}
