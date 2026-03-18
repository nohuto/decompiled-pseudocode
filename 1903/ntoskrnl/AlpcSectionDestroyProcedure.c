/*
 * XREFs of AlpcSectionDestroyProcedure @ 0x1406DB020
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     AlpcpRemoveResourcePort @ 0x14064C4F0 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x14064CA20 (AlpcDeleteBlobByHandle.c)
 */

__int64 __fastcall AlpcSectionDestroyProcedure(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    AlpcDeleteBlobByHandle(v2, *(_QWORD *)(a1 + 24), a1);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 40));
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObject(*(PVOID *)a1);
  return 0LL;
}
