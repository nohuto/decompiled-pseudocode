/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180093CA4
 * Callers:
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x1800BA77C (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x1800BDD98 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x1800C2730 (-do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@M_ea_1800C2730.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014C08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180068044 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 */

__int64 __fastcall std::wstring::assign(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  _WORD *v6; // rax
  _WORD *v7; // rax
  _WORD *v8; // rdi
  unsigned __int64 i; // rcx
  _WORD *v10; // rax

  if ( a2 >= 0x7FFFFFFFFFFFFFFFLL )
    std::wstring::_Xlen();
  if ( *(_QWORD *)(a1 + 24) < a2 )
  {
    std::wstring::_Copy((const void **)a1, a2, *(_QWORD *)(a1 + 16));
    goto LABEL_9;
  }
  if ( !a2 )
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v6 = (_WORD *)a1;
    else
      v6 = *(_WORD **)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
    *v6 = 0;
LABEL_9:
    if ( !a2 )
      return a1;
  }
  if ( a2 == 1 )
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v7 = (_WORD *)a1;
    else
      v7 = *(_WORD **)a1;
    *v7 = a3;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) < 8uLL )
      v8 = (_WORD *)a1;
    else
      v8 = *(_WORD **)a1;
    for ( i = a2; i; --i )
      *v8++ = a3;
  }
  if ( *(_QWORD *)(a1 + 24) < 8uLL )
    v10 = (_WORD *)a1;
  else
    v10 = *(_WORD **)a1;
  *(_QWORD *)(a1 + 16) = a2;
  v10[a2] = 0;
  return a1;
}
