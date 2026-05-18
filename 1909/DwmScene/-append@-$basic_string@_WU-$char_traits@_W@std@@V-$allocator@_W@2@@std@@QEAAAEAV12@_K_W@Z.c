/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18011E098
 * Callers:
 *     ?do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z @ 0x18011DE34 (-do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 * Callees:
 *     sub_18011DCCC @ 0x18011DCCC (sub_18011DCCC.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, unsigned __int64 a2, __int16 a3)
{
  __int64 v4; // rcx
  bool v5; // cf
  __int64 v6; // r11
  _QWORD *v7; // r9
  __int16 *v8; // rdi
  unsigned __int64 i; // rcx

  v4 = Src[2];
  if ( a2 > Src[3] - v4 )
    return sub_18011DCCC(Src, a2, 0LL, a2, a3);
  v5 = Src[3] < 8uLL;
  v6 = v4 + a2;
  Src[2] = v4 + a2;
  v7 = Src;
  if ( !v5 )
    v7 = (_QWORD *)*Src;
  v8 = (__int16 *)v7 + v4;
  if ( a2 )
  {
    for ( i = a2; i; --i )
      *v8++ = a3;
  }
  *((_WORD *)v7 + v6) = 0;
  return Src;
}
