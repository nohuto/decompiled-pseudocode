/*
 * XREFs of MiConfirmPageIsZero @ 0x140142AA0
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v1 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v2 = MiMapPageInHyperSpaceWorker((v1 >> 63) + v1, 0LL, 0x80000000);
  v4 = (_QWORD *)v2;
  v5 = (_QWORD *)(v2 + 4088);
  do
  {
    if ( *v4 | *v5 )
      break;
    ++v4;
    --v5;
  }
  while ( v4 <= v5 );
  LOBYTE(v3) = 17;
  MiUnmapPageInHyperSpaceWorker(v2, v3, 0x80000000LL);
  return v4 > v5;
}
