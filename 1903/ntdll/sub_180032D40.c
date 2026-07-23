/*
 * XREFs of sub_180032D40 @ 0x180032D40
 * Callers:
 *     sub_18007D570 @ 0x18007D570 (sub_18007D570.c)
 *     sub_1800FAF40 @ 0x1800FAF40 (sub_1800FAF40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180032D40(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d

  v2 = a1 + (a2 << 16);
  if ( qword_180163B78 && v2 && v2 <= HIDWORD(qword_180163B78[22].Ptr) )
    return *((_QWORD *)qword_180163B78[23].Ptr - v2);
  else
    return 0LL;
}
