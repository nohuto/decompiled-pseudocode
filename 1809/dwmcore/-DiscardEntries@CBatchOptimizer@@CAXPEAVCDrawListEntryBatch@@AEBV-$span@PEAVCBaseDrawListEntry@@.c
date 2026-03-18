/*
 * XREFs of ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x18000A710
 * Callers:
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18000A440 (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000A624 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CBatchOptimizer::DiscardEntries(gsl::details *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx

  v2 = 0LL;
  dword_180308080 += *(_DWORD *)a2;
  result = *a2;
  v6 = *a2;
  v7 = 0LL;
  while ( v2 != v6 )
  {
    if ( v2 == result
      || (v8 = *(_QWORD *)(v7 + a2[1]),
          (*(void (__fastcall **)(__int64, gsl::details *))(*(_QWORD *)v8 + 48LL))(v8, a1),
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8),
          v7 < 0)
      || (result = *a2, v2 == *a2) )
    {
      gsl::details::terminate(a1);
      JUMPOUT(0x18000A7AALL);
    }
    ++v2;
    v7 += 8LL;
  }
  return result;
}
