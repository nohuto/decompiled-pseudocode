/*
 * XREFs of sub_18006CD08 @ 0x18006CD08
 * Callers:
 *     sub_18006A4A4 @ 0x18006A4A4 (sub_18006A4A4.c)
 *     sub_18006D9F0 @ 0x18006D9F0 (sub_18006D9F0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E06C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

__int64 __fastcall sub_18006CD08(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 248);
  if ( !((*(_QWORD *)(a1 + 256) - v1) >> 4) )
    std::vector<void *>::_Xlen();
  return *(_QWORD *)v1;
}
