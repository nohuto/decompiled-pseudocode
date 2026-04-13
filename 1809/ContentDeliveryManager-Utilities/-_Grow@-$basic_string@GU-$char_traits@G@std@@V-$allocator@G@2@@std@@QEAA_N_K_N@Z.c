/*
 * XREFs of ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x180032774
 * Callers:
 *     ??$_Construct@V?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@std@@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXV?$_String_iterator@V?$_String_val@U?$_Simple_types@D@std@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x180036BB0 (--$_Construct@V-$_String_iterator@V-$_String_val@U-$_Simple_types@D@std@@@std@@@std@@@-$basic_st.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014568 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800336DC (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800C7147 (memcpy_0.c)
 */

bool __fastcall std::wstring::_Grow(void **a1, unsigned __int64 a2, char a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  void *v6; // rbp
  bool v7; // zf
  bool v8; // cf

  v4 = a1;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( (unsigned __int64)a1[3] < a2 )
  {
    std::wstring::_Copy(a1);
LABEL_17:
    v7 = a2 == 0;
    return !v7;
  }
  if ( a3 && a2 < 8 )
  {
    v5 = (unsigned __int64)a1[2];
    if ( a2 < v5 )
      v5 = a2;
    if ( (unsigned __int64)a1[3] >= 8 )
    {
      v6 = *a1;
      if ( v5 )
        memcpy_0(a1, *a1, 2 * v5);
      operator delete(v6);
    }
    v4[3] = 7LL;
    v4[2] = v5;
    *((_WORD *)v4 + v5) = 0;
    goto LABEL_17;
  }
  v7 = a2 == 0;
  if ( !a2 )
  {
    v8 = (unsigned __int64)a1[3] < 8;
    a1[2] = 0LL;
    if ( !v8 )
      v4 = *a1;
    *(_WORD *)v4 = 0;
    goto LABEL_17;
  }
  return !v7;
}
