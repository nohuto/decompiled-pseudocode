/*
 * XREFs of SendOrientationChanged @ 0x1C0151550
 * Callers:
 *     NtSetShellCursorState @ 0x1C00EE310 (NtSetShellCursorState.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall SendOrientationChanged(int a1)
{
  __int64 v2; // rcx
  _DWORD v4[8]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[0] = 5;
  v4[2] = a1;
  return InputExtensibilityCallout::CoreMsgSendMessage(v2, 1);
}
