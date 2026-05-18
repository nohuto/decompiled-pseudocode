/*
 * XREFs of sub_18006CDF4 @ 0x18006CDF4
 * Callers:
 *     sub_180024CC0 @ 0x180024CC0 (sub_180024CC0.c)
 *     sub_18006C6F0 @ 0x18006C6F0 (sub_18006C6F0.c)
 *     sub_18006DC60 @ 0x18006DC60 (sub_18006DC60.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 * Callees:
 *     sub_180063428 @ 0x180063428 (sub_180063428.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E06C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

_QWORD *__fastcall sub_18006CDF4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *result; // rax

  v4 = a3;
  sub_180063428(a1 + 24);
  v7 = *(_QWORD *)(a1 + 248);
  if ( (*(_QWORD *)(a1 + 256) - v7) >> 4 <= v4 )
    std::vector<void *>::_Xlen(v6, (unsigned int)v4);
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4 + 8);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4 + 8);
  }
  *a2 = *(_QWORD *)(v7 + 16LL * (unsigned int)v4);
  result = a2;
  a2[1] = v8;
  return result;
}
