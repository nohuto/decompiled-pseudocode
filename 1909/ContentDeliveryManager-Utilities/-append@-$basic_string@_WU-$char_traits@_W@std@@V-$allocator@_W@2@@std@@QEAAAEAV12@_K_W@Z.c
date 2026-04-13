/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1800937B8
 * Callers:
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800921B0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800921B0.c)
 *     ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800C1020 (-do_get@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800C1020.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800C24F0 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$ostre.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800C2730 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800C2730.c)
 *     ?do_put@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBUtm@@DD@Z @ 0x1800C3BD0 (-do_put@-$time_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 *     ?do_transform@?$collate@_W@std@@MEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@PEB_W0@Z @ 0x1800C3E50 (-do_transform@-$collate@_W@std@@MEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014C08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180068044 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 */

char *__fastcall std::wstring::append(char *a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v5; // r8
  unsigned __int64 v7; // rsi
  _WORD *v8; // rax
  __int64 v9; // rcx
  _WORD *v10; // rax
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 i; // rcx
  _WORD *v14; // rax

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
    std::wstring::_Copy((const void **)a1, v5 + a2, v5);
    goto LABEL_11;
  }
  if ( !v7 )
  {
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v8 = a1;
    else
      v8 = *(_WORD **)a1;
    *((_QWORD *)a1 + 2) = 0LL;
    *v8 = 0;
LABEL_11:
    if ( !v7 )
      return a1;
  }
  v9 = *((_QWORD *)a1 + 2);
  if ( a2 == 1 )
  {
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v10 = a1;
    else
      v10 = *(_WORD **)a1;
    v10[v9] = a3;
  }
  else
  {
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v11 = a1;
    else
      v11 = *(char **)a1;
    v12 = &v11[2 * v9];
    for ( i = a2; i; --i )
    {
      *(_WORD *)v12 = a3;
      v12 += 2;
    }
  }
  if ( *((_QWORD *)a1 + 3) < 8uLL )
    v14 = a1;
  else
    v14 = *(_WORD **)a1;
  *((_QWORD *)a1 + 2) = v7;
  v14[v7] = 0;
  return a1;
}
