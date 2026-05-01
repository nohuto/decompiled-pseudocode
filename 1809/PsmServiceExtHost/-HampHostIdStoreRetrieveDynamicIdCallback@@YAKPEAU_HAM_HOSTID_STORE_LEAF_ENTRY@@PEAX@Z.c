/*
 * XREFs of ?HampHostIdStoreRetrieveDynamicIdCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18006DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreRetrieveDynamicIdCallback(struct _HAM_HOSTID_STORE_LEAF_ENTRY *a1, _DWORD *a2)
{
  if ( *((_QWORD *)a1 + 11) != *(_QWORD *)a2 )
    return 1LL;
  if ( (int)PsmGetDynamicIdFromKey((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 48, *((_QWORD *)a2 + 1)) >= 0 )
    a2[4] = 1;
  return 0LL;
}
