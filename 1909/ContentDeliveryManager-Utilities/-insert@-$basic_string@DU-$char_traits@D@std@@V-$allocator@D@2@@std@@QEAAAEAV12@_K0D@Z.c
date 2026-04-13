/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B5548
 * Callers:
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x1800B0644 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x1800B2F10 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800BBD34 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x1800BC990 (-_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$bas.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800C5D44 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x1800C76AC (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180014994 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014C08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180014F64 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memmove_0 @ 0x1800CB1F4 (memmove_0.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

char *__fastcall std::string::insert(char *a1, size_t a2, size_t a3, char a4)
{
  size_t v6; // r8
  size_t v9; // rdi
  _BYTE *v10; // rax
  unsigned __int64 v11; // rax
  char *v12; // rdx
  char *v13; // rcx
  size_t v14; // r8
  _BYTE *v15; // rax
  char *v16; // rax
  bool v17; // cf
  _BYTE *v18; // rax

  v6 = *((_QWORD *)a1 + 2);
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    goto LABEL_35;
  if ( !a3 )
    return a1;
  v9 = v6 + a3;
  if ( v6 + a3 == -1LL )
LABEL_35:
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < v9 )
  {
    std::string::_Copy((const void **)a1, v6 + a3, v6);
    goto LABEL_12;
  }
  if ( !v9 )
  {
    *((_QWORD *)a1 + 2) = 0LL;
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v10 = a1;
    else
      v10 = *(_BYTE **)a1;
    *v10 = 0;
LABEL_12:
    if ( !v9 )
      return a1;
  }
  v11 = *((_QWORD *)a1 + 3);
  if ( v11 < 0x10 )
    v12 = a1;
  else
    v12 = *(char **)a1;
  if ( v11 < 0x10 )
    v13 = a1;
  else
    v13 = *(char **)a1;
  v14 = *((_QWORD *)a1 + 2) - a2;
  if ( v14 )
  {
    memmove_0(&v13[a2 + a3], &v12[a2], v14);
    v11 = *((_QWORD *)a1 + 3);
  }
  if ( a3 == 1 )
  {
    if ( v11 < 0x10 )
      v15 = a1;
    else
      v15 = *(_BYTE **)a1;
    v15[a2] = a4;
  }
  else
  {
    if ( v11 < 0x10 )
      v16 = a1;
    else
      v16 = *(char **)a1;
    memset_0(&v16[a2], a4, a3);
  }
  v17 = *((_QWORD *)a1 + 3) < 0x10uLL;
  *((_QWORD *)a1 + 2) = v9;
  if ( v17 )
    v18 = a1;
  else
    v18 = *(_BYTE **)a1;
  v18[v9] = 0;
  return a1;
}
