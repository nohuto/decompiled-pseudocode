/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0015BE0
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0015C80 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C01215D0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     freepathalloc @ 0x1C0011F80 (freepathalloc.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  __int64 v1; // rax
  struct PATHALLOC *v3; // rcx
  struct PATHALLOC *v4; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(struct PATHALLOC **)(v1 + 24);
  if ( v3 )
  {
    do
    {
      v4 = *(struct PATHALLOC **)v3;
      if ( *((_DWORD *)v3 + 4) == 4032 )
        freepathalloc(v3);
      v3 = v4;
    }
    while ( v4 );
    v1 = *((_QWORD *)this + 1);
  }
  *(_QWORD *)(v1 + 24) = 0LL;
}
