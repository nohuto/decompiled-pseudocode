/*
 * XREFs of ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@QEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x1803C68B0
 * Callers:
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1803C6B58 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022278 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXQEAUtagPOINT@@_K1@Z @ 0x18018947C (-_Change_array@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AEAAXQEAUtagPOINT@@_K1@Z.c)
 *     ??$_Ucopy@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z @ 0x1801E2FAC (--$_Ucopy@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAPEAPEAXPEAPEAX00@Z.c)
 *     ?_Umove_if_noexcept1@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@00U?$integral_constant@_N$00@2@@Z @ 0x1802A19FC (-_Umove_if_noexcept1@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@AEAAXPEAUtagPOINT@@.c)
 */

__int64 __fastcall std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>(void **a1, _BYTE *a2, __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rdx
  __int64 v18; // rcx
  void *v20; // [rsp+78h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (__int64)v13;
  v20 = v13;
  try
  {
    v15 = *a3;
    v13[v6] = *a3;
    v16 = (__int64)a1[1];
    v17 = *a1;
    if ( a2 == (_BYTE *)v16 )
    {
      std::vector<tagPOINT>::_Umove_if_noexcept1((__int64)a1, v17, v16, v13, 0);
    }
    else
    {
      std::vector<void *>::_Ucopy<void * *>(v15, v17, (__int64)a2, v13);
      std::vector<void *>::_Ucopy<void * *>(v18, a2, (__int64)a1[1], (void *)(v14 + 8 * (v6 + 1)));
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  std::vector<tagPOINT>::_Change_array((__int64)a1, v14, v8, v11);
  return (__int64)*a1 + 8 * v6;
}
