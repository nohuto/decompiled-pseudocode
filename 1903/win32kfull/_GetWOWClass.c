/*
 * XREFs of _GetWOWClass @ 0x1C01EA8D0
 * Callers:
 *     NtUserGetWOWClass @ 0x1C022F420 (NtUserGetWOWClass.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetClassPtr @ 0x1C00BEAC0 (GetClassPtr.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v13; // rcx
  char v14[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  if ( (int)RtlStringCchCopyW(v14, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v14);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 416), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v13 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( v13 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v13 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411LL, v8, v9, v10);
  return 0LL;
}
