/*
 * XREFs of _GetKeyboardLayout @ 0x1C003B000
 * Callers:
 *     GetActiveHKL @ 0x1C00EACD4 (GetActiveHKL.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetKeyboardLayout(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rax
  _QWORD **v6; // rdi
  _QWORD *v7; // rbx
  HANDLE v8; // rsi

  if ( (_DWORD)a1 )
  {
    v6 = (_QWORD **)(*(_QWORD *)(gptiCurrent + 448LL) + 168LL);
    v7 = *v6;
    if ( *v6 == v6 )
      return 0LL;
    v8 = (HANDLE)(int)a1;
    while ( PsGetThreadId((PETHREAD)*(v7 - 91)) != v8 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == v6 )
        return 0LL;
    }
    v4 = *(v7 - 37);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, (unsigned __int8)a1) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v2 = *ThreadWin32Thread;
    }
    v4 = *(_QWORD *)(v2 + 432);
  }
  if ( v4 )
    return *(_QWORD *)(v4 + 40);
  return 0LL;
}
