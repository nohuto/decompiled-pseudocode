/*
 * XREFs of sub_18006CF04 @ 0x18006CF04
 * Callers:
 *     sub_180024DD0 @ 0x180024DD0 (sub_180024DD0.c)
 *     sub_18006C800 @ 0x18006C800 (sub_18006C800.c)
 *     sub_18006DD70 @ 0x18006DD70 (sub_18006DD70.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 * Callees:
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006E17C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 */

_QWORD *__fastcall sub_18006CF04(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *result; // rax

  v4 = a3;
  sub_180063538(a1 + 24);
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
