/*
 * XREFs of SendSuppressionStateChanged @ 0x1C0151680
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall SendSuppressionStateChanged(unsigned __int8 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0]) = 4;
  LODWORD(v6[1]) = v3;
  v6[2] = a2;
  return InputExtensibilityCallout::CoreMsgSendMessage(v4, 1);
}
