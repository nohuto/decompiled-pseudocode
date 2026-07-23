/*
 * XREFs of PsGetProcessSignatureLevel @ 0x1402E9E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsGetProcessSignatureLevel(__int64 a1, _BYTE *a2)
{
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 1737);
  return *(_BYTE *)(a1 + 1736);
}
