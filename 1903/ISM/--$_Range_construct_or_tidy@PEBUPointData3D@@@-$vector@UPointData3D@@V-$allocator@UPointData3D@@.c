/*
 * XREFs of ??$_Range_construct_or_tidy@PEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAXPEBUPointData3D@@0Uforward_iterator_tag@1@@Z @ 0x180133C64
 * Callers:
 *     ?GetPoints@MPCHandProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180135290 (-GetPoints@MPCHandProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std.c)
 * Callees:
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A244 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

char *__fastcall std::vector<PointData3D>::_Range_construct_or_tidy<PointData3D const *>(
        void **a1,
        const void *a2,
        __int64 a3,
        char a4)
{
  size_t v6; // rsi
  __int64 v7; // kr08_8
  unsigned __int64 v8; // rdx
  char *result; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  char *v12; // rax
  char *v13; // rbx
  char v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = a4;
  v6 = a3 - (_QWORD)a2;
  v7 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) / 184;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 / 184 )
  {
    if ( v8 > 0x1642C8590B21642LL )
      std::_Xlength_error("vector<T> too long");
    v10 = 184 * v8;
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(184 * v8);
    *a1 = v11;
    a1[1] = v11;
    v12 = (char *)*a1;
    a1[2] = (char *)*a1 + v10;
    try
    {
      v13 = v12;
      std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v15);
      memmove_0(v13, a2, v6);
      result = &v13[v6];
      a1[1] = &v13[v6];
    }
    catch ( ... )
    {
      std::vector<PointData3D>::_Tidy((__int64)a1);
      throw;
    }
  }
  return result;
}
