/*
 * XREFs of sub_18006DEA4 @ 0x18006DEA4
 * Callers:
 *     sub_18012FC63 @ 0x18012FC63 (sub_18012FC63.c)
 *     sub_18013461F @ 0x18013461F (sub_18013461F.c)
 *     sub_180134660 @ 0x180134660 (sub_180134660.c)
 *     sub_1801346E0 @ 0x1801346E0 (sub_1801346E0.c)
 *     sub_180134726 @ 0x180134726 (sub_180134726.c)
 *     sub_18013477B @ 0x18013477B (sub_18013477B.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 */

__int64 __fastcall sub_18006DEA4(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_116(v4);
      v4 += 4;
    }
    while ( v4 != a3 );
  }
  return result;
}
