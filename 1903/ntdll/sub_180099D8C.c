/*
 * XREFs of sub_180099D8C @ 0x180099D8C
 * Callers:
 *     _snscanf_s @ 0x180097050 (_snscanf_s.c)
 *     sscanf_s @ 0x180097AF0 (sscanf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_18009941C @ 0x18009941C (sub_18009941C.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180099D8C(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, _DWORD *a4)
{
  __int64 v9[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    LODWORD(v9[3]) = 73;
    v9[2] = a1;
    v9[0] = a1;
    LODWORD(v9[1]) = a2;
    return sub_18009941C(v9, a3, a4);
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
