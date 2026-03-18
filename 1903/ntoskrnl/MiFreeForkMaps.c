/*
 * XREFs of MiFreeForkMaps @ 0x1402E439C
 * Callers:
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 * Callees:
 *     MiUnmapSinglePage @ 0x140142474 (MiUnmapSinglePage.c)
 *     MiFinishLastForkPageTable @ 0x1402E4130 (MiFinishLastForkPageTable.c)
 */

__int64 __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    result = MiUnmapSinglePage(v2);
  v4 = (__int64 *)(a1 + 8);
  v5 = 3LL;
  do
  {
    if ( *v4 != -1 )
      result = MiFinishLastForkPageTable(v2, *v4);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
