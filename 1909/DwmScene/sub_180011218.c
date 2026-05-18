/*
 * XREFs of sub_180011218 @ 0x180011218
 * Callers:
 *     sub_180127BA5 @ 0x180127BA5 (sub_180127BA5.c)
 *     sub_180128301 @ 0x180128301 (sub_180128301.c)
 *     sub_18013437F @ 0x18013437F (sub_18013437F.c)
 *     sub_1801343C0 @ 0x1801343C0 (sub_1801343C0.c)
 *     sub_180134440 @ 0x180134440 (sub_180134440.c)
 *     sub_180134486 @ 0x180134486 (sub_180134486.c)
 *     sub_1801344DB @ 0x1801344DB (sub_1801344DB.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 */

__int64 __fastcall sub_180011218(__int64 a1, __int64 a2, __int64 a3)
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
