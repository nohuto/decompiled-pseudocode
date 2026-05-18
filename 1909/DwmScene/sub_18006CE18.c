/*
 * XREFs of sub_18006CE18 @ 0x18006CE18
 * Callers:
 *     sub_18006A5B4 @ 0x18006A5B4 (sub_18006A5B4.c)
 *     sub_18006DB00 @ 0x18006DB00 (sub_18006DB00.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E17C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

__int64 __fastcall sub_18006CE18(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 248);
  if ( !((*(_QWORD *)(a1 + 256) - v1) >> 4) )
    std::vector<void *>::_Xlen();
  return *(_QWORD *)v1;
}
