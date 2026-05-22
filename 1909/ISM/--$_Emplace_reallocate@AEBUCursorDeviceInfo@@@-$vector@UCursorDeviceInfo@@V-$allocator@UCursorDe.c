/*
 * XREFs of ??$_Emplace_reallocate@AEBUCursorDeviceInfo@@@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@QEAAPEAUCursorDeviceInfo@@QEAU2@AEBU2@@Z @ 0x1800CB3C8
 * Callers:
 *     ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800CD420 (-OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UCursorDeviceInfo@@V?$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAUCursorDeviceInfo@@_K1@Z @ 0x1800302C8 (-_Change_array@-$vector@UCursorDeviceInfo@@V-$allocator@UCursorDeviceInfo@@@std@@@std@@AEAAXQEAU.c)
 *     ??$_Ucopy@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@PEAW42@00@Z @ 0x18006647C (--$_Ucopy@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Butto.c)
 *     ?_Umove_if_noexcept1@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@00U?$integral_constant@_N$00@2@@Z @ 0x1800664D8 (-_Umove_if_noexcept1@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEA.c)
 */

unsigned __int64 __fastcall std::vector<CursorDeviceInfo>::_Emplace_reallocate<CursorDeviceInfo const &>(
        void **a1,
        char *a2,
        _OWORD *a3)
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
      std::vector<Windows::UI::Color>::_Umove_if_noexcept1((__int64)a1, v18, v17, v13, 0);
    }
    else
    {
      std::vector<enum _Button>::_Ucopy<enum _Button *>(v14, v18, (__int64)a2, v13);
      std::vector<enum _Button>::_Ucopy<enum _Button *>(v19, a2, (__int64)a1[1], (void *)(v15 + v16 + 16));
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(16 * v11));
    throw;
  }
  std::vector<CursorDeviceInfo>::_Change_array((__int64)a1, v15, v8, v11);
  return (unsigned __int64)*a1 + v16;
}
