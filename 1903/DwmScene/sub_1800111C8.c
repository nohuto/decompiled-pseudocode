/*
 * XREFs of sub_1800111C8 @ 0x1800111C8
 * Callers:
 *     sub_180127A95 @ 0x180127A95 (sub_180127A95.c)
 *     sub_1801281F1 @ 0x1801281F1 (sub_1801281F1.c)
 *     sub_18013426F @ 0x18013426F (sub_18013426F.c)
 *     sub_1801342B0 @ 0x1801342B0 (sub_1801342B0.c)
 *     sub_180134330 @ 0x180134330 (sub_180134330.c)
 *     sub_180134376 @ 0x180134376 (sub_180134376.c)
 *     sub_1801343CB @ 0x1801343CB (sub_1801343CB.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 */

__int64 __fastcall sub_1800111C8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = unknown_libname_115(v4, 0);
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
