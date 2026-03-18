/*
 * XREFs of ValidateHmenu @ 0x1C002D790
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C002D7E0 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmenu(void *a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = HMValidateHandle(a1);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(ThreadWin32Thread + 456) )
    {
      UserSetLastError(1401LL);
      return 0LL;
    }
  }
  return result;
}
