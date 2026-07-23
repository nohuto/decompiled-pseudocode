/*
 * XREFs of sub_1800D0B68 @ 0x1800D0B68
 * Callers:
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 *     sub_1800D062C @ 0x1800D062C (sub_1800D062C.c)
 *     sub_1800D070C @ 0x1800D070C (sub_1800D070C.c)
 *     sub_1800D07EC @ 0x1800D07EC (sub_1800D07EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0B68(__int64 a1, const ULONG *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  LODWORD(v2) = 0;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *((_BYTE *)a2 + v2) );
  }
  if ( !a2 )
    a2 = &dword_18011D492;
  *(_DWORD *)(a1 + 12) = 0;
  result = (unsigned int)(v2 + 1);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
