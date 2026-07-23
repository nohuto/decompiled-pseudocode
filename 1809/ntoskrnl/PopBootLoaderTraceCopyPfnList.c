/*
 * XREFs of PopBootLoaderTraceCopyPfnList @ 0x14056CC3C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14056C820 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __fastcall PopBootLoaderTraceCopyPfnList(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rbx
  PVOID *v6; // rsi

  v2 = MemoryMap[27];
  if ( v2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
    v6 = (PVOID *)(v2 + 48);
    memmove((void *)(a2 + 664), v6, 8 * v5);
    for ( *(_DWORD *)(a2 + 660) = v5; v5; --v5 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v6++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 660) = 0;
  }
}
