/*
 * XREFs of sub_1800D0BA0 @ 0x1800D0BA0
 * Callers:
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     sub_18007D494 @ 0x18007D494 (sub_18007D494.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D0BA0(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  LODWORD(v2) = 0;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
  }
  *(_DWORD *)(a1 + 12) = 0;
  if ( !a2 )
    a2 = &word_18011C2FC;
  result = (unsigned int)(2 * v2 + 2);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
