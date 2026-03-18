/*
 * XREFs of PopW32ThreadLock @ 0x1C010AC60
 * Callers:
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
