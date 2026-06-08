/*
 * XREFs of Display_CPC @ 0x1C000B15C
 * Callers:
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 * Callees:
 *     DisplayGenAddr @ 0x1C0002648 (DisplayGenAddr.c)
 *     WPP_RECORDER_SF_s @ 0x1C0003520 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0009A50 (WPP_RECORDER_SF_d.c)
 */

unsigned __int8 __fastcall Display_CPC(_DWORD *a1, __int64 a2, int a3, int a4)
{
  const char **v5; // rbx
  __int64 v6; // rbp
  char *v7; // rsi
  unsigned __int8 result; // al
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x8Eu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            5u,
            2u,
            0x8Fu,
            (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x90u,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
              *a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v9) = a1[1];
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x91u,
              (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
              v9);
          }
        }
      }
    }
    v5 = (const char **)&off_1C0011348;
    v6 = 15LL;
    do
    {
      v7 = (char *)a1 + *((unsigned int *)v5 - 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x92u,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          *v5);
      result = DisplayGenAddr(v7, (__int64)"  ", a3, a4);
      v5 += 3;
      --v6;
    }
    while ( v6 );
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x93u,
                 (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    }
  }
  return result;
}
