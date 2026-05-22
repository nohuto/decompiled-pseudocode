/*
 * XREFs of ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x18007FEFC
 * Callers:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180080138 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@PEAU1@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@YAPEAUINPUT_SPACE_PAYLOAD@@QEAU1@0PEAU1@AEAV?$allocator@UINPUT_SPACE_PAYLOAD@@@0@@Z @ 0x1800800F0 (--$_Uninitialized_move@PEAUINPUT_SPACE_PAYLOAD@@PEAU1@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@.c)
 *     ?_Change_array@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3D@@_K1@Z @ 0x180083F88 (-_Change_array@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@AEAAXQEAUPointData3.c)
 */

__int64 __fastcall std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // r13
  _OWORD *v16; // rcx
  __int64 v17; // rcx
  _OWORD *v18; // rsi
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 result; // rax
  void *v23; // [rsp+68h] [rbp+10h]

  v6 = (a2 - *a1) / 184;
  v7 = (a1[1] - *a1) / 184;
  if ( v7 == 0x1642C8590B21642LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 184;
  v10 = v9 >> 1;
  if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 184 * v11;
  if ( v11 > 0x1642C8590B21642LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v23 = v13;
  try
  {
    v15 = 23 * v6;
    v16 = &v13[v15];
    *v16 = *a3;
    v16[1] = a3[1];
    v16[2] = a3[2];
    v16[3] = a3[3];
    v16[4] = a3[4];
    v16[5] = a3[5];
    v16[6] = a3[6];
    v17 = (__int64)&v13[v15 + 16];
    *(_OWORD *)(v17 - 16) = a3[7];
    v18 = a3 + 8;
    *(_OWORD *)v17 = *v18;
    *(_OWORD *)(v17 + 16) = v18[1];
    *(_OWORD *)(v17 + 32) = v18[2];
    *(_QWORD *)(v17 + 48) = *((_QWORD *)v18 + 6);
    v19 = a1[1];
    v20 = v13;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *,INPUT_SPACE_PAYLOAD *,std::allocator<INPUT_SPACE_PAYLOAD>>(
        v21,
        a2,
        v13);
      v20 = &v14[v15 + 23];
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<INPUT_SPACE_PAYLOAD *,INPUT_SPACE_PAYLOAD *,std::allocator<INPUT_SPACE_PAYLOAD>>(
      v21,
      v19,
      v20);
    std::vector<PointData3D>::_Change_array(a1, v14, v8, v11, -2LL);
    result = v15 * 8 + *a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(184 * v11));
    throw;
  }
  return result;
}
