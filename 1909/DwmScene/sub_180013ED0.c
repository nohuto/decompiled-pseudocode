/*
 * XREFs of sub_180013ED0 @ 0x180013ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800133E4 @ 0x1800133E4 (sub_1800133E4.c)
 */

__int64 __fastcall sub_180013ED0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  if ( *a2 == 0x4BD1CD637052B94FLL )
  {
    result = a2[1];
    if ( result == 0xDB6D126B7184B2B7uLL )
      return sub_1800133E4(a1 + 16);
  }
  return result;
}
