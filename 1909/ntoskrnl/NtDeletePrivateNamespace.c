/*
 * XREFs of NtDeletePrivateNamespace @ 0x1408A00E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14069EFA8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRemoveNamespaceFromTable @ 0x1406D94EC (ObpRemoveNamespaceFromTable.c)
 */

NTSTATUS __cdecl NtDeletePrivateNamespace(HANDLE NamespaceHandle)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v2; // rbx
  NTSTATUS v3; // edi
  struct _OBJECT_HANDLE_INFORMATION v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  result = ObReferenceObjectByHandle(
             NamespaceHandle,
             0x10000u,
             ObpDirectoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             &v4);
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
