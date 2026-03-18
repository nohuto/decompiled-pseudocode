/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x1C0040834
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C00409F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        __int64 a16)
{
  __int64 v18; // rbx
  __int64 *v20; // rax
  unsigned int v21; // edi
  int v22; // edx
  int v24; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-28h] BYREF

  v18 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      418,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v30 = 0LL;
  if ( gpqForeground )
  {
    v20 = *(__int64 **)(gpqForeground + 120);
    if ( v20 || (v20 = *(__int64 **)(gpqForeground + 128)) != 0LL )
      v30 = *v20;
  }
  InputExtensibilityCallout::CoreMsgSendMessage(gpqForeground, 4LL, &v30);
  v21 = 0;
  if ( (int)IsEditionHandleAndPostKeyEventSupported() >= 0 )
  {
    LOBYTE(v24) = a5;
    v21 = EditionHandleAndPostKeyEvent(a1, v18, a3, a4, v24, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, v30);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v22) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      10,
      419,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v21;
}
