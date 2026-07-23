/*
 * XREFs of MiConfirmPageIsZero @ 0x1401122E0
 * Callers:
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 */

_BOOL8 __fastcall MiConfirmPageIsZero(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v1 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v2 = MiMapPageInHyperSpaceWorker((v1 >> 63) + v1, 0LL, 0x80000000);
  v3 = (_QWORD *)v2;
  v4 = (_QWORD *)(v2 + 4088);
  do
  {
    if ( *v3 | *v4 )
      break;
    ++v3;
    --v4;
  }
  while ( v3 <= v4 );
  MiUnmapPageInHyperSpaceWorker(v2, 0x11u, 0x80000000LL);
  return v3 > v4;
}
