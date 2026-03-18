/*
 * XREFs of _GetWOWClass @ 0x1C01B2990
 * Callers:
 *     NtUserGetWOWClass @ 0x1C01F0290 (NtUserGetWOWClass.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetClassPtr @ 0x1C0030EA0 (GetClassPtr.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, const wchar_t *a2)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v6; // rdx
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v9; // rcx
  wchar_t pszDest[256]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  if ( RtlStringCchCopyW(pszDest, 0x100uLL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(pszDest);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 416), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v9 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( v9 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v9 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411LL, v6);
  return 0LL;
}
