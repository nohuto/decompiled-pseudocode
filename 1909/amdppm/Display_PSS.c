/*
 * XREFs of Display_PSS @ 0x1C0004FC4
 * Callers:
 *     InitAcpiPerfStates @ 0x1C002C354 (InitAcpiPerfStates.c)
 *     ValidatePssCore @ 0x1C002F34C (ValidatePssCore.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_i @ 0x1C0004090 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // esi
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x53u,
                   (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   (__int64)WPP_GLOBAL_Control->DeviceExtension,
                   5u,
                   2u,
                   0x54u,
                   (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v7) = i;
          result = WPP_RECORDER_SF_D(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     5u,
                     2u,
                     0x55u,
                     (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                     v7);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v7) = a1[12 * i + 2];
            result = WPP_RECORDER_SF_D(
                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                       5u,
                       2u,
                       0x56u,
                       (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                       v7);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v7) = a1[12 * i + 3];
              result = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         5u,
                         2u,
                         0x57u,
                         (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                         v7);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v7) = a1[12 * i + 4];
                result = WPP_RECORDER_SF_D(
                           (__int64)WPP_GLOBAL_Control->DeviceExtension,
                           5u,
                           2u,
                           0x58u,
                           (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                           v7);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v7) = a1[12 * i + 5];
                  result = WPP_RECORDER_SF_D(
                             (__int64)WPP_GLOBAL_Control->DeviceExtension,
                             5u,
                             2u,
                             0x59u,
                             (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
                             v7);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v7 = *(_QWORD *)&a1[12 * i + 6];
                    result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Au, v6);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v7 = *(_QWORD *)&a1[12 * i + 8];
                      result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Bu, v6);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v7 = *(_QWORD *)&a1[12 * i + 10];
                        result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Cu, v6);
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          v7 = *(_QWORD *)&a1[12 * i + 12];
                          result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x5Du, v6);
                        }
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            result = WPP_RECORDER_SF_(
                                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                       5u,
                                       2u,
                                       0x5Eu,
                                       (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
