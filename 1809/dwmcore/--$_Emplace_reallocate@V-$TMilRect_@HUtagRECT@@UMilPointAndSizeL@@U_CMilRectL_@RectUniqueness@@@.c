/*
 * XREFs of ??$_Emplace_reallocate@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAV2@$$QEAV2@@Z @ 0x1800C50D4
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>::_Emplace_reallocate<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>(
        __int64 a1,
        char *a2,
        _OWORD *a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rsi
  char *v6; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  _OWORD *v14; // rax
  _OWORD *v15; // rbp
  char *v16; // r14
  char *v17; // rdx
  char *v18; // rcx
  char *result; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  signed __int64 v22; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = a2;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v5 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = v11;
  v13 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = v14;
  v16 = (char *)v14 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_OWORD *)v16 = *a3;
  v17 = *(char **)(a1 + 8);
  v18 = *(char **)a1;
  if ( v6 == v17 )
  {
    while ( v18 != v17 )
    {
      v20 = *(_OWORD *)v18;
      v18 += 16;
      *v14++ = v20;
    }
  }
  else
  {
    if ( v18 != v6 )
    {
      do
      {
        v21 = *(_OWORD *)v18;
        v18 += 16;
        *v14++ = v21;
      }
      while ( v18 != v6 );
      v17 = *(char **)(a1 + 8);
    }
    if ( v6 != v17 )
    {
      v22 = v16 - v6;
      do
      {
        *(_OWORD *)&v6[v22 + 16] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v17 );
    }
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  result = v16;
  *(_QWORD *)a1 = v15;
  *(_QWORD *)(a1 + 8) = &v15[v8];
  *(_QWORD *)(a1 + 16) = &v15[v12];
  return result;
}
