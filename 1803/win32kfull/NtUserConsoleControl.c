/*
 * XREFs of NtUserConsoleControl @ 0x1C0011E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     xxxConsoleControl @ 0x1C0011F74 (xxxConsoleControl.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _W32ExceptionHandler @ 0x1C0216FFC (_W32ExceptionHandler.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  SIZE_T v11; // rsi
  _BYTE Src[24]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  memset(Src, 0, sizeof(Src));
  EnterCrit(0LL, 1LL);
  if ( a1 <= 6 )
  {
    if ( (unsigned int)v3 <= 0x18 )
    {
      if ( a2 && (_DWORD)v3 )
      {
        v11 = v3;
        ProbeForRead(a2, v3, 2u);
        memmove(Src, (const void *)a2, v3);
        v10 = xxxConsoleControl(a1, Src, (unsigned int)v3);
        ProbeForWrite(a2, v11, 2u);
        memmove((void *)a2, Src, v11);
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741811;
    }
  }
  else
  {
    v10 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
