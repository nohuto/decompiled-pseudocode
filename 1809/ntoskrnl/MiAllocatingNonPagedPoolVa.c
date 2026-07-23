/*
 * XREFs of MiAllocatingNonPagedPoolVa @ 0x140164160
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 *     MiReplenishNonPagedSlists @ 0x140163FA4 (MiReplenishNonPagedSlists.c)
 * Callees:
 *     <none>
 */

void __fastcall MiAllocatingNonPagedPoolVa(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 i; // r8
  _QWORD *v7; // rdx
  unsigned __int64 j; // rax

  v4 = a3 + a4;
  v5 = 2 * (a2 + 21LL);
  for ( i = a3 & 0xFFFFFFFFFFFFFE00uLL; i < v4; i += 512LL )
  {
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 376) + 8 * (i >> 6));
    for ( j = 0LL; j < 8; ++j )
    {
      if ( *v7 != -1LL )
        break;
      ++v7;
    }
    if ( j == 8 )
      _bittestandset64(*(signed __int64 **)(a1 + 8 * v5 + 8), i >> 9);
  }
}
