/*
 * XREFs of SendPositionChanged @ 0x1C00559B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendPositionChanged(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 0LL;
  v3[2] = 0LL;
  v1 = *a1;
  LODWORD(v3[0]) = 1;
  v3[1] = v1;
  return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           a1,
           1LL,
           v3,
           24LL);
}
