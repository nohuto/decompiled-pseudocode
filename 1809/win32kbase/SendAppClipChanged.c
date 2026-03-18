/*
 * XREFs of SendAppClipChanged @ 0x1C0038B20
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0038B6C (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall SendAppClipChanged(__int128 *a1)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  _QWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *a1;
  LODWORD(v5[0]) = 2;
  *(_OWORD *)&v5[1] = v2;
  return InputExtensibilityCallout::CoreMsgSendMessage(v3, 1);
}
