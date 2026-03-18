/*
 * XREFs of SendVisibilityChanged @ 0x1C00557B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendVisibilityChanged(__int64 a1)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2[1] = 0;
  v2[3] = 0;
  v3 = 0LL;
  v2[0] = 0;
  v2[2] = (unsigned __int8)a1;
  return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           a1,
           1LL,
           v2,
           24LL);
}
