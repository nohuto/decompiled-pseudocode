/*
 * XREFs of ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@PEAX@Z @ 0x18003C990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIdStoreReferenceHostIdCallback(struct _HAM_HOSTID_STORE_LEAF_ENTRY *a1, _QWORD *a2)
{
  if ( *a2 != *((_QWORD *)a1 + 11) )
    return 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  a2[1] = a1;
  return 0LL;
}
