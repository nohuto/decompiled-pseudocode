/*
 * XREFs of _GetWOWClass @ 0x1C01EA750
 * Callers:
 *     NtUserGetWOWClass @ 0x1C022EE00 (NtUserGetWOWClass.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetClassPtr @ 0x1C00601A0 (GetClassPtr.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

_QWORD *__fastcall GetWOWClass(__int64 a1, char *a2, __int64 a3)
{
  __int64 ClassPtr; // rdi
  __int64 ThreadWin32Thread; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 Atom; // ax
  _QWORD *result; // rax
  __int64 v12; // rcx
  char v13[512]; // [rsp+40h] [rbp-228h] BYREF

  ClassPtr = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3);
  if ( (int)RtlStringCchCopyW(v13, 256LL, a2) < 0 )
    Atom = 0;
  else
    Atom = UserFindAtom(v13);
  if ( Atom )
    ClassPtr = GetClassPtr(Atom, *(_QWORD *)(ThreadWin32Thread + 416), a1);
  if ( ClassPtr )
  {
    result = *(_QWORD **)ClassPtr;
    v12 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( v12 == *(_QWORD *)(*(_QWORD *)ClassPtr + 32LL) )
      return result;
    for ( result = (_QWORD *)result[8]; result; result = (_QWORD *)*result )
    {
      if ( v12 == result[4] )
        return result;
    }
  }
  UserSetLastError(1411LL, v7, v8, v9);
  return 0LL;
}
