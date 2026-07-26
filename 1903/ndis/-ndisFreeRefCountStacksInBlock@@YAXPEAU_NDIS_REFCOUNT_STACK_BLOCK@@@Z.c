/*
 * XREFs of ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C784C
 * Callers:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C77F8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 * Callees:
 *     ndisReleaseStackTrace @ 0x1C00C7FC4 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisFreeRefCountStacksInBlock(struct _NDIS_REFCOUNT_STACK_BLOCK *a1)
{
  _NDIS_REFCOUNT_STACK_ENTRY *Dereferences; // rbx
  __int64 v2; // rdi

  Dereferences = a1->Dereferences;
  v2 = 6LL;
  do
  {
    if ( (*(_DWORD *)&Dereferences[-6] & 0x3FFFFFF) != 0 )
    {
      ndisReleaseStackTrace(*(_DWORD *)&Dereferences[-6] & 0x3FFFFFF);
      *(_DWORD *)&Dereferences[-6] &= 0xFC000000;
    }
    if ( (*(_DWORD *)Dereferences & 0x3FFFFFF) != 0 )
    {
      ndisReleaseStackTrace(*(_DWORD *)Dereferences & 0x3FFFFFF);
      *(_DWORD *)Dereferences &= 0xFC000000;
    }
    ++Dereferences;
    --v2;
  }
  while ( v2 );
}
