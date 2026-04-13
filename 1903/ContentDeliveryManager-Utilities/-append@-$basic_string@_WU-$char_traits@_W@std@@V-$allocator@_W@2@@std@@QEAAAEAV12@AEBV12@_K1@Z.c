/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180076514
 * Callers:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800762BC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180091FF0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_180091FF0.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x180095F5C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009AB38 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800145A8 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18001481C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180067DE4 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800CB058 (memcpy_0.c)
 */

char *__fastcall std::wstring::append(char *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdi
  _WORD *v12; // rax
  char *v13; // rcx
  _WORD *v14; // rax

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
  if ( v10 + v5 > 0x7FFFFFFFFFFFFFFELL )
LABEL_25:
    std::wstring::_Xlen();
  if ( *((_QWORD *)a1 + 3) < v11 )
  {
    std::wstring::_Copy((const void **)a1, v10 + v5, v10);
    goto LABEL_14;
  }
  if ( !v11 )
  {
    if ( *((_QWORD *)a1 + 3) < 8uLL )
      v12 = a1;
    else
      v12 = *(_WORD **)a1;
    *((_QWORD *)a1 + 2) = 0LL;
    *v12 = 0;
LABEL_14:
    if ( !v11 )
      return a1;
  }
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  if ( *((_QWORD *)a1 + 3) < 8uLL )
    v13 = a1;
  else
    v13 = *(char **)a1;
  memcpy_0(&v13[2 * *((_QWORD *)a1 + 2)], (char *)v7 + 2 * a3, 2 * v5);
  if ( *((_QWORD *)a1 + 3) < 8uLL )
    v14 = a1;
  else
    v14 = *(_WORD **)a1;
  *((_QWORD *)a1 + 2) = v11;
  v14[v11] = 0;
  return a1;
}
