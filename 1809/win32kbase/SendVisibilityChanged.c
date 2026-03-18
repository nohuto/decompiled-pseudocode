/*
 * XREFs of SendVisibilityChanged @ 0x1C008C050
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall SendVisibilityChanged(unsigned __int8 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  _DWORD v4[8]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  memset(v4, 0, sizeof(v4));
  v4[0] = 0;
  v4[2] = v1;
  return InputExtensibilityCallout::CoreMsgSendMessage(v2, 1);
}
