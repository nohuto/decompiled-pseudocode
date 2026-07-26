/*
 * XREFs of ndisNsiSetThreadInformation @ 0x1C000A680
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00FBC80 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C0100560 (NdisSetThreadObjectCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetThreadInformation(__int64 a1)
{
  int v2; // ecx

  if ( *(_DWORD *)(a1 + 60) )
    return 3221225474LL;
  if ( !*(_DWORD *)(a1 + 56) )
  {
    v2 = *(_DWORD *)(a1 + 52);
    if ( !v2 )
      return NdisSetThreadObjectCompartmentId(KeGetCurrentThread(), **(unsigned int **)(a1 + 40));
    if ( v2 == 4 )
      return NdisSetThreadObjectCompartmentScope(KeGetCurrentThread(), **(unsigned int **)(a1 + 40));
  }
  return 3221225485LL;
}
