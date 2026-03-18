/*
 * XREFs of _GetWOWClass @ 0x1C01D50BC
 * Callers:
 *     NtUserGetWOWClass @ 0x1C0217570 (NtUserGetWOWClass.c)
 * Callees:
 *     GetClassPtr @ 0x1C00224A0 (GetClassPtr.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, const wchar_t *a2)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v11; // rcx
  wchar_t pszDest[256]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  if ( RtlStringCchCopyW(pszDest, 0x100uLL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(pszDest);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 424), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v11 = *(_QWORD *)(ThreadWin32Thread + 456);
    if ( v11 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v11 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411LL, v6, v7, v8);
  return 0LL;
}
