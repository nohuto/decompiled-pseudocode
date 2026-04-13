/*
 * XREFs of ?do_curr_symbol@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800AF9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180014240 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 */

__int64 __fastcall std::_Mpunct<char>::do_curr_symbol(__int64 a1, __int64 a2)
{
  size_t v3; // r8
  char *v4; // rdx
  __int64 v5; // rax

  v3 = 0LL;
  v4 = *(char **)(a1 + 32);
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)a2 = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    v3 = v5;
  }
  std::string::assign((void **)a2, v4, v3);
  return a2;
}
