/*
 * XREFs of NlsKbdSendIMENotificationBase @ 0x1C009AE30
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C017FFA8 (NlsKbdSendIMEProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsKbdSendIMENotificationBase(int a1, int a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( gpKbdNlsTbl )
  {
    if ( (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
    {
      gdwUpdateKeyboard |= 4u;
      LOWORD(gKbdImeStatus) = 0;
      HIDWORD(gKbdImeStatus) = a1;
      dword_1C0215A20 = a2;
    }
  }
  return result;
}
