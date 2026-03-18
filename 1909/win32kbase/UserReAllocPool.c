/*
 * XREFs of UserReAllocPool @ 0x1C00913E0
 * Callers:
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0075110 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     UserReAllocPoolZInit @ 0x1C0091380 (UserReAllocPoolZInit.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

void *__fastcall UserReAllocPool(void *Src, size_t Size, __int64 a3, unsigned int a4)
{
  size_t v6; // rbx
  void *v7; // rax
  void *v8; // rdi

  v6 = a3;
  v7 = (void *)Win32AllocPool(a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( Size <= v6 )
      v6 = Size;
    memmove(v7, Src, v6);
    Win32FreePool((__int64)Src);
  }
  return v8;
}
