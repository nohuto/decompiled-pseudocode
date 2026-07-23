/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1406CA6C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRemoveResourcePort @ 0x140618574 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x140619F20 (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  _QWORD *v3; // rcx

  v1 = a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob(a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = (_QWORD *)a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], (__int64)a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, (__int64)a1);
    ObfDereferenceObject((PVOID)*a1);
  }
  return 0LL;
}
