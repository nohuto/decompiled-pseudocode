/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800338E0
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180031050 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180031050.c)
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180036BB0 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x180049348 (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800BCCC0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800BCCC0.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800BDF70 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x1800BE1B0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800BE1B0.c)
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x1800BFC50 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014568 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800336DC (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

char *__fastcall std::wstring::append(char *a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v7; // rsi
  bool v8; // cf
  _WORD *v9; // rax
  __int64 v10; // rcx
  _WORD *v11; // rax
  char *v12; // rax
  char *v13; // rdi
  unsigned __int64 i; // rcx
  _WORD *v15; // rax

  v5 = *((_QWORD *)a1 + 2);
  if ( ~v5 <= a2 )
    goto LABEL_28;
  if ( !a2 )
    return a1;
  v7 = v5 + a2;
  if ( v5 + a2 > 0x7FFFFFFFFFFFFFFELL )
LABEL_28:
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < v7 )
  {
    std::wstring::_Copy((const void **)a1, v5 + a2, (const void *)v5);
    goto LABEL_11;
  }
  if ( !v7 )
  {
    v8 = *((_QWORD *)a1 + 3) < 8uLL;
    *((_QWORD *)a1 + 2) = 0LL;
    if ( v8 )
      v9 = a1;
    else
      v9 = *(_WORD **)a1;
    *v9 = 0;
LABEL_11:
    if ( !v7 )
      return a1;
  }
  v10 = *((_QWORD *)a1 + 2);
  if ( a2 == 1 )
  {
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v11 = a1;
    else
      v11 = *(_WORD **)a1;
    v11[v10] = a3;
  }
  else
  {
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v12 = a1;
    else
      v12 = *(char **)a1;
    v13 = &v12[2 * v10];
    for ( i = a2; i; --i )
    {
      *(_WORD *)v13 = a3;
      v13 += 2;
    }
  }
  v8 = *((_QWORD *)a1 + 3) < 8uLL;
  *((_QWORD *)a1 + 2) = v7;
  if ( v8 )
    v15 = a1;
  else
    v15 = *(_WORD **)a1;
  v15[v7] = 0;
  return a1;
}
