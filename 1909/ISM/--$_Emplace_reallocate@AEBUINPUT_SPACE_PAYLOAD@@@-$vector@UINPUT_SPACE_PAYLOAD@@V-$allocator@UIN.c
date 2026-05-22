/*
 * XREFs of ??$_Emplace_reallocate@AEBUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEBU2@@Z @ 0x180011998
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18001179C (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A2B4 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180011CC8 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@PEAU1@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@YAPEAUINPUT_SPACE_PAYLOAD@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_PAYLOAD@@@0@@Z @ 0x1800800F0 (--$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@PEAU1@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r13
  size_t v10; // rcx
  unsigned __int64 v11; // r11
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  char v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h]
  void *v18; // [rsp+88h] [rbp+20h]

  v6 = (a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24LL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v17 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, v7 + 1);
  v9 = 3 * v17;
  v10 = 24 * v17;
  if ( v17 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v18 = v12;
  v13 = 3 * v6;
  *(_OWORD *)&v12[v13] = *(_OWORD *)a3;
  v12[v13 + 2] = *(_QWORD *)(a3 + 16);
  if ( a2 == a1[1] )
  {
    std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v16);
    memmove_0(v12, (const void *)*a1, v14 - *a1);
  }
  else
  {
    try
    {
      std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *,INPUT_SPACE_PAYLOAD *,std::allocator<INPUT_SPACE_PAYLOAD>>(
        *a1,
        a2,
        v12);
      std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *,INPUT_SPACE_PAYLOAD *,std::allocator<INPUT_SPACE_PAYLOAD>>(
        a2,
        a1[1],
        &v12[v13 + 3]);
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(24 * v17));
      throw;
    }
  }
  if ( *a1 )
    std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)(24 * ((a1[2] - *a1) / 24LL)));
  *a1 = v12;
  a1[1] = &v12[3 * v8];
  a1[2] = &v12[v9];
  return *a1 + 8 * v13;
}
