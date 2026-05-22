/*
 * XREFs of ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180011B5C
 * Callers:
 *     ?OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z @ 0x18001182C (-OnInputConfigMessageReceived@InputConfigContextProvider@@IEAAXPEBU_MIT_INPUT_CONFIG_MESSAGE@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18000A1D0 (--$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPointData3D@@AEBQEAU2@@Z @ 0x18000A244 (--$_Ptr_copy_cat@$$CBUPointData3D@@U1@@std@@YA-AU_Really_trivial_ptr_iterator_tag@0@AEBQEBUPoint.c)
 *     ?_Buy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAA_N_K@Z @ 0x180011C6C (-_Buy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAA_N_K@Z.c)
 *     ?_Calculate_growth@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEBA_K_K@Z @ 0x180011D58 (-_Calculate_growth@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@.c)
 *     memmove_0 @ 0x180037D7B (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Assign_range<INPUT_SPACE_PAYLOAD *>(
        char **a1,
        char *a2,
        __int64 a3,
        char a4)
{
  char *v4; // r14
  size_t v6; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r10
  char *v13; // rbx
  __int64 result; // rax
  char *v15; // rdi
  char *v16; // rbx
  size_t v17; // r15
  char v18; // [rsp+58h] [rbp+20h] BYREF

  v18 = a4;
  v4 = *a1;
  v6 = a3 - (_QWORD)a2;
  v9 = (a3 - (__int64)a2) / 24;
  v10 = (a1[1] - *a1) / 24;
  if ( v9 > (a1[2] - *a1) / 24 )
  {
    if ( v9 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector<T> too long");
    v11 = std::vector<INPUT_SPACE_PAYLOAD>::_Calculate_growth(a1, v9);
    if ( v4 )
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(24 * v12));
    std::vector<INPUT_SPACE_PAYLOAD>::_Buy(a1, v11);
    v13 = *a1;
    std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v18);
    memmove_0(v13, a2, v6);
    result = (__int64)&v13[v6];
    goto LABEL_6;
  }
  if ( v9 > v10 )
  {
    v15 = &a2[24 * v10];
    std::_Move_unchecked<enum _Button *,enum _Button *>(a2, (__int64)v15, v4);
    v16 = a1[1];
    std::_Ptr_copy_cat<PointData3D const,PointData3D>(&v18);
    v17 = a3 - (_QWORD)v15;
    memmove_0(v16, v15, v17);
    result = (__int64)&v16[v17];
LABEL_6:
    a1[1] = (char *)result;
    return result;
  }
  std::_Move_unchecked<enum _Button *,enum _Button *>(a2, a3, v4);
  result = 3 * v9;
  a1[1] = &v4[24 * v9];
  return result;
}
