/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C001C1C0
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001C130 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C00C0F70 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     freepathalloc @ 0x1C0064170 (freepathalloc.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  __int64 v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(__int64 **)(v1 + 24);
  if ( v3 )
  {
    do
    {
      v4 = (__int64 *)*v3;
      if ( *((_DWORD *)v3 + 4) == 4032 )
        freepathalloc();
      v3 = v4;
    }
    while ( v4 );
    v1 = *((_QWORD *)this + 1);
  }
  *(_QWORD *)(v1 + 24) = 0LL;
}
