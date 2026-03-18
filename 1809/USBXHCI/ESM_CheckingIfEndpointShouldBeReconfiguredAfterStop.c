/*
 * XREFs of ESM_CheckingIfEndpointShouldBeReconfiguredAfterStop @ 0x1C0040570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeReconfiguredAfterStop(__int64 a1)
{
  _BYTE *v1; // rax
  bool v2; // cf
  __int64 result; // rax

  v1 = *(_BYTE **)(a1 + 960);
  if ( !v1[37] )
    return 21LL;
  v2 = (*(_QWORD *)(*(_QWORD *)v1 + 272LL) & 0x200000LL) != 0;
  result = 33LL;
  if ( !v2 )
    return 21LL;
  return result;
}
