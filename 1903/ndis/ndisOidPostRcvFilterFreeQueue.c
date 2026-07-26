/*
 * XREFs of ndisOidPostRcvFilterFreeQueue @ 0x1C005F600
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005EE58 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostRcvFilterFreeQueue(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rcx
  int v3; // eax
  __int64 v4; // rax

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (v2->Flags & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v4 + 48) >= 0xCu )
      {
        ndisFreeReceiveQueue(v2, *(_DWORD *)(*(_QWORD *)(v4 + 40) + 8LL));
        *(_DWORD *)(a1 + 40) = 0;
      }
    }
  }
}
