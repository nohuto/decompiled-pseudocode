/*
 * XREFs of ??$_Assign_range@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEAW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800FBE10
 * Callers:
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FCE70 (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18000A240 (--$_Move_unchecked@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??$_Ucopy@PEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Button@@PEAW42@00@Z @ 0x18006647C (--$_Ucopy@PEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAPEAW4_Butto.c)
 *     ?_Calculate_growth@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_K_K@Z @ 0x1800AF988 (-_Calculate_growth@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEBA_.c)
 *     ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x1800FDDBC (-_Buy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z.c)
 */

char *__fastcall std::vector<enum _Button>::_Assign_range<enum _Button *>(void **a1, void *a2, __int64 a3)
{
  char *v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rcx
  void *v12; // r9
  void *v13; // rdx
  char *result; // rax
  void *v15; // r8
  __int64 v16; // rbx

  v3 = (char *)*a1;
  v4 = (a3 - (__int64)a2) >> 2;
  v5 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v4 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2 )
  {
    v15 = *a1;
    if ( v4 <= v5 )
    {
      std::_Move_unchecked<enum _Button *,enum _Button *>(a2, a3, v15);
      result = &v3[4 * v4];
      goto LABEL_11;
    }
    v16 = (__int64)a2 + 4 * v5;
    std::_Move_unchecked<enum _Button *,enum _Button *>(a2, v16, v15);
    v12 = a1[1];
    v13 = (void *)v16;
  }
  else
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v9 = std::vector<Windows::UI::Color>::_Calculate_growth(a1, (a3 - (__int64)a2) >> 2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(4 * v10));
    std::vector<enum _Button>::_Buy(a1, v9);
    v12 = *a1;
    v13 = a2;
  }
  result = std::vector<enum _Button>::_Ucopy<enum _Button *>(v11, v13, a3, v12);
LABEL_11:
  a1[1] = result;
  return result;
}
