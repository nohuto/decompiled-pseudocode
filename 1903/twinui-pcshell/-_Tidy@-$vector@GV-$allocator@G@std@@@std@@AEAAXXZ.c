/*
 * XREFs of ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1801627BC
 * Callers:
 *     _std::vector_unsigned_short_std::allocator_unsigned_short___::vector_unsigned_short_std::allocator_unsigned_short____::_1_::catch$25 @ 0x180161F1C (_std--vector_unsigned_short_std--allocator_unsigned_short___--vector_unsigned_short_std--allocat.c)
 *     ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x180162098 (--1-$vector@GV-$allocator@G@std@@@std@@QEAA@XZ.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801622E0 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned short>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 1)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
