/*
 * XREFs of ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1803A74F4
 * Callers:
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803A7648 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXQEAU?$pair@PEBGPEBG@2@_K1@Z @ 0x18016749C (-_Change_array@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXQ.c)
 *     ??$_Ucopy@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z @ 0x1801C3F9C (--$_Ucopy@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z.c)
 *     ?_Umove_if_noexcept1@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@00U?$integral_constant@_N$00@2@@Z @ 0x1802825BC (-_Umove_if_noexcept1@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@.c)
 */

unsigned __int64 __fastcall std::vector<tagRECT>::_Emplace_reallocate<tagRECT const &>(void **a1, char *a2, _OWORD *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  __int64 v17; // r8
  void *v18; // rdx
  __int64 v19; // rcx
  void *v21; // [rsp+78h] [rbp+10h]

  v6 = a2 - (_BYTE *)*a1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (__int64)v13;
  v21 = v13;
  try
  {
    v16 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)((char *)v13 + v16) = *a3;
    v17 = (__int64)a1[1];
    v18 = *a1;
    if ( a2 == (char *)v17 )
    {
      std::vector<tagPOINT>::_Umove_if_noexcept1((__int64)a1, v18, v17, v13, 0);
    }
    else
    {
      std::vector<void *>::_Ucopy<void * *>(v14, v18, (__int64)a2, v13);
      std::vector<void *>::_Ucopy<void * *>(v19, a2, (__int64)a1[1], (void *)(v15 + v16 + 16));
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Change_array((__int64)a1, v15, v8, v11);
  return (unsigned __int64)*a1 + v16;
}
