/*
 * XREFs of SendClipChanged @ 0x1C0055E50
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0055C94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendClipChanged(__int128 *a1)
{
  __int128 v1; // xmm0
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = 2LL;
  v4 = v1;
  return ((__int64 (__fastcall *)(__int128 *, __int64, __int64 *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           a1,
           1LL,
           &v3,
           24LL);
}
