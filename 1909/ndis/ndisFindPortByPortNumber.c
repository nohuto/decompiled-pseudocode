/*
 * XREFs of ndisFindPortByPortNumber @ 0x1C0062204
 * Callers:
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C00617F4 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     NdisMFreePort @ 0x1C0061E30 (NdisMFreePort.c)
 *     ndisPnPPortActivation @ 0x1C0062234 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C00628FC (ndisPnPPortDeactivation.c)
 *     ndisUpdateMiniportPortStates @ 0x1C0062F50 (ndisUpdateMiniportPortStates.c)
 *     ndisOidPrePortState @ 0x1C006D9C0 (ndisOidPrePortState.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindPortByPortNumber(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 *i; // rax

  v2 = 0LL;
  for ( i = *(__int64 **)(a1 + 2720); i != (__int64 *)(a1 + 2720); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 7) == a2 )
      return i;
    if ( *((_DWORD *)i + 7) > a2 )
      return (__int64 *)v2;
  }
  return (__int64 *)v2;
}
