/*
 * XREFs of NtDeletePrivateNamespace @ 0x140707FF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406558C4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406B776C (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v2; // rbx
  NTSTATUS v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(
             NamespaceHandle,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             &v5);
  if ( result >= 0 )
  {
    v2 = (volatile signed __int32 *)Object;
    if ( *((_QWORD *)Object + 40) )
    {
      v3 = ObpVerifyCreatorAccessCheck((__int64)Object + 392);
      if ( v3 >= 0 )
        v3 = ObpRemoveNamespaceFromTable(v2);
    }
    else
    {
      v3 = -1073741816;
    }
    ObfDereferenceObject((PVOID)v2);
    return v3;
  }
  return result;
}
