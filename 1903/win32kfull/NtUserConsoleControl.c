/*
 * XREFs of NtUserConsoleControl @ 0x1C001A1B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxConsoleControl @ 0x1C001A2C8 (xxxConsoleControl.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rcx
  SIZE_T v7; // rsi
  unsigned int v8; // ebx
  _BYTE Src[24]; // [rsp+40h] [rbp-38h] BYREF

  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  if ( a1 > 6 )
  {
    v8 = -1073741823;
    UserSetLastStatus(-1073741811);
  }
  else if ( a3 > 0x18 )
  {
    v8 = -1073741811;
  }
  else if ( a2 && a3 )
  {
    v7 = a3;
    ProbeForRead(a2, a3, 2u);
    memmove(Src, (const void *)a2, a3);
    v8 = xxxConsoleControl(a1, Src, a3);
    ProbeForWrite(a2, v7, 2u);
    memmove((void *)a2, Src, v7);
  }
  else
  {
    v8 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
