/*
 * XREFs of _GetKeyboardLayout @ 0x1C002DDE0
 * Callers:
 *     NtUserGetKeyboardLayout @ 0x1C002DB30 (NtUserGetKeyboardLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetKeyboardLayout(int a1)
{
  HANDLE v1; // rsi
  __int64 v2; // rax
  _QWORD **v4; // rdi
  _QWORD *i; // rbx

  v1 = (HANDLE)a1;
  if ( _GetProcessWindowStation(0LL) )
  {
    if ( (_DWORD)v1 )
    {
      v4 = (_QWORD **)(*((_QWORD *)gptiCurrent + 56) + 168LL);
      for ( i = *v4; i != v4; i = (_QWORD *)*i )
      {
        if ( PsGetThreadId((PETHREAD)*(i - 92)) == v1 )
        {
          v2 = *(i - 38);
          goto LABEL_4;
        }
      }
      return 0LL;
    }
    v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  }
  else
  {
    v2 = gspklGlobalActive;
  }
LABEL_4:
  if ( v2 )
    return *(_QWORD *)(v2 + 40);
  return 0LL;
}
