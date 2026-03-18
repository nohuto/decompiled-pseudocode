/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x1C003637C
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
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
        __int16 a15)
{
  __int64 *v19; // rax
  unsigned int v20; // edi
  int v22; // [rsp+20h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-28h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Cu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v23 = 0LL;
  if ( gpqForeground )
  {
    v19 = *(__int64 **)(gpqForeground + 112);
    if ( v19 || (v19 = *(__int64 **)(gpqForeground + 120)) != 0LL )
      v23 = *v19;
  }
  InputExtensibilityCallout::CoreMsgSendMessage(gpqForeground, 4LL, &v23);
  v20 = 0;
  if ( (int)IsEditionHandleAndPostKeyEventSupported() >= 0 )
  {
    LOBYTE(v22) = a5;
    v20 = EditionHandleAndPostKeyEvent(a1, a2, a3, a4, v22, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x11Du,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v20;
}
