/*
 * XREFs of MiFreeForkMaps @ 0x1402CA24C
 * Callers:
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 * Callees:
 *     MiUnmapSinglePage @ 0x14012190C (MiUnmapSinglePage.c)
 *     MiFinishLastForkPageTable @ 0x1402C9FE0 (MiFinishLastForkPageTable.c)
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
