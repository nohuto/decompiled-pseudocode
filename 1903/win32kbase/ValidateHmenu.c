/*
 * XREFs of ValidateHmenu @ 0x1C002EBF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C002E8E4 (HMValidateHandle.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  __int64 v4; // rdx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = HMValidateHandle(a1, 2);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(ThreadWin32Thread + 448) )
    {
      UserSetLastError(1401LL, v4);
      return 0LL;
    }
  }
  return result;
}
