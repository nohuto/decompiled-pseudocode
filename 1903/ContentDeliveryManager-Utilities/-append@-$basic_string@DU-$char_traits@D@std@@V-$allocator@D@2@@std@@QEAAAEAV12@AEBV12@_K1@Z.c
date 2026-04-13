/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004A97C
 * Callers:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18004A84C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800B44F0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B44F0.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800145A8 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18001481C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180014B78 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800CB058 (memcpy_0.c)
 */

char *__fastcall std::string::append(char *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  _QWORD *v7; // r14
  size_t v9; // rax
  size_t v10; // r8
  size_t v11; // rdi
  _BYTE *v12; // rax
  char *v13; // rcx
  _BYTE *v14; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = v4 - a3;
  v10 = *((_QWORD *)a1 + 2);
  if ( v9 < a4 )
    v5 = v9;
  if ( ~v10 <= v5 )
    goto LABEL_25;
  if ( !v5 )
    return a1;
  v11 = v10 + v5;
  if ( v10 + v5 == -1LL )
LABEL_25:
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < v11 )
  {
    std::string::_Copy((const void **)a1, v10 + v5, v10);
    goto LABEL_14;
  }
  if ( !v11 )
  {
    if ( *((_QWORD *)a1 + 3) < 0x10uLL )
      v12 = a1;
    else
      v12 = *(_BYTE **)a1;
    *((_QWORD *)a1 + 2) = 0LL;
    *v12 = 0;
LABEL_14:
    if ( !v11 )
      return a1;
  }
  if ( v7[3] >= 0x10uLL )
    v7 = (_QWORD *)*v7;
  if ( *((_QWORD *)a1 + 3) < 0x10uLL )
    v13 = a1;
  else
    v13 = *(char **)a1;
  memcpy_0(&v13[*((_QWORD *)a1 + 2)], (char *)v7 + a3, v5);
  if ( *((_QWORD *)a1 + 3) < 0x10uLL )
    v14 = a1;
  else
    v14 = *(_BYTE **)a1;
  *((_QWORD *)a1 + 2) = v11;
  v14[v11] = 0;
  return a1;
}
