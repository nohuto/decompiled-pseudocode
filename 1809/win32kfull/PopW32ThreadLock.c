/*
 * XREFs of PopW32ThreadLock @ 0x1C0124630
 * Callers:
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
