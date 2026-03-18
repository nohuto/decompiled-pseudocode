/*
 * XREFs of ClassUnlock @ 0x1C0111958
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C01119A0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4) + 16) = *a2;
  return ClassUnlockWorker(a1);
}
