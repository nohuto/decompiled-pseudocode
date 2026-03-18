/*
 * XREFs of NlsKbdSendIMENotificationBase @ 0x1C006ACF0
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C012C06C (NlsKbdSendIMEProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsKbdSendIMENotificationBase(int a1, int a2)
{
  if ( gpKbdNlsTbl && (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
  {
    gdwUpdateKeyboard |= 4u;
    LOWORD(gKbdImeStatus) = 0;
    HIDWORD(gKbdImeStatus) = a1;
    dword_1C01A21A8 = a2;
  }
  return 1LL;
}
