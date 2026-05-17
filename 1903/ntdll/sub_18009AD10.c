/*
 * XREFs of sub_18009AD10 @ 0x18009AD10
 * Callers:
 *     _snwscanf_s @ 0x180097170 (_snwscanf_s.c)
 *     swscanf_s @ 0x180098080 (swscanf_s.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18009AD10(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    LODWORD(v9[3]) = 73;
    LODWORD(v9[1]) = 2 * a2;
    v9[2] = a1;
    v9[0] = a1;
    return sub_18009AE0C(v9, a3, a4);
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
