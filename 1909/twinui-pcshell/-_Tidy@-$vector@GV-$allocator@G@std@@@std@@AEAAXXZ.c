/*
 * XREFs of ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x180181B1C
 * Callers:
 *     _std::vector_unsigned_short_std::allocator_unsigned_short___::vector_unsigned_short_std::allocator_unsigned_short____::_1_::catch$25 @ 0x180181444 (_std--vector_unsigned_short_std--allocator_unsigned_short___--vector_unsigned_short_std--allocat.c)
 *     ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x180181490 (--1-$vector@GV-$allocator@G@std@@@std@@QEAA@XZ.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x180181694 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
