/*
 * XREFs of ?do_unshift@?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@MEBAHAEAU_Mbstatet@@PEAD1AEAPEAD@Z @ 0x180174C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8_utf16<unsigned short,1114111,0>::do_unshift(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  *a5 = a3;
  return *a2 > 1u ? 2 : 0;
}
