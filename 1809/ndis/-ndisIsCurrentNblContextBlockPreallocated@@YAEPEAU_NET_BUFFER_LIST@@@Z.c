/*
 * XREFs of ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0011B50
 * Callers:
 *     NdisFreeNetBufferListContext @ 0x1C00118F0 (NdisFreeNetBufferListContext.c)
 *     NdisAllocateNetBufferListContext @ 0x1C00119E0 (NdisAllocateNetBufferListContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCurrentNblContextBlockPreallocated(struct _NET_BUFFER_LIST *a1)
{
  int v1; // edx
  __int64 v3; // rax

  v1 = *((_DWORD *)a1->NdisPoolHandle + 15);
  if ( (v1 & 2) == 0 )
    return 0;
  v3 = 384LL;
  if ( (v1 & 1) != 0 )
    v3 = 560LL;
  return a1->Context == (_NET_BUFFER_LIST_CONTEXT *)((char *)a1 + v3);
}
