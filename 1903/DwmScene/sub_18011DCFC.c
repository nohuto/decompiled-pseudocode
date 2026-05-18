/*
 * XREFs of sub_18011DCFC @ 0x18011DCFC
 * Callers:
 *     sub_180109108 @ 0x180109108 (sub_180109108.c)
 * Callees:
 *     ?do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z @ 0x18011DD24 (-do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 */

__int64 __fastcall sub_18011DCFC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  std::time_put<char,std::ostreambuf_iterator<char>>::do_put(a1, a2, v3);
  return a1;
}
