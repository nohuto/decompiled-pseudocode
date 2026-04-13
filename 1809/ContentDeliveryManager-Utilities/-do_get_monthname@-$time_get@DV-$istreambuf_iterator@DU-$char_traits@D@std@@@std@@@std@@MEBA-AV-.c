/*
 * XREFs of ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800C4D90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x1800ABAD4 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 */

_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get_monthname(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  int v9; // ecx
  _OWORD *result; // rax

  v9 = std::_Getloctxt<char,std::istreambuf_iterator<char>>(a3, a4, 0LL, *(_BYTE **)(a1 + 24));
  if ( v9 >= 0 )
    *(_DWORD *)(a7 + 16) = v9 >> 1;
  else
    *a6 |= 2u;
  result = a2;
  *a2 = *(_OWORD *)a3;
  return result;
}
