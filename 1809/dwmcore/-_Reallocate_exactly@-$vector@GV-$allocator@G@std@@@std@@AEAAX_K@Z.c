/*
 * XREFs of ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1800C4750
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned short>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  SIZE_T v5; // rcx
  char *v6; // rdi
  char *result; // rax

  v2 = 2 * a2;
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 1;
  v5 = 2 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 1));
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = &v6[2 * v4];
  result = &v6[v2];
  *(_QWORD *)(a1 + 16) = &v6[v2];
  return result;
}
