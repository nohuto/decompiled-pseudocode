/*
 * XREFs of ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0100F24
 * Callers:
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

UNDORENDERLOCKCOUNTS *__fastcall UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    *(_DWORD *)this = *(_DWORD *)(ThreadWin32Thread + 104);
    *((_DWORD *)this + 1) = *(_DWORD *)(ThreadWin32Thread + 108);
    *(_DWORD *)(ThreadWin32Thread + 104) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 108LL) = 0;
  }
  return this;
}
