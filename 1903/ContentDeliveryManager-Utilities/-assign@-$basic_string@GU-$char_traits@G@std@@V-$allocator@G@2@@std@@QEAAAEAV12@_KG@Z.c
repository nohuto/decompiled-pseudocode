/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800342A8
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800BA0E0 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800BD7F8 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x1800C2120 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800C2120.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18001481C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180034180 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
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
