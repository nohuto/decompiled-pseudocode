/*
 * XREFs of SendVisibilityChanged @ 0x1C0043BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C00409F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall SendVisibilityChanged(unsigned __int8 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  _DWORD v4[8]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  memset(v4, 0, sizeof(v4));
  v4[2] = v1;
  return InputExtensibilityCallout::CoreMsgSendMessage(v2, 1);
}
