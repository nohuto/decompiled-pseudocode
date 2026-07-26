/*
 * XREFs of ndisNsiSetAllJobInformation @ 0x1C00F8270
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetJobObjectCompartmentId @ 0x1C00F8008 (NdisSetJobObjectCompartmentId.c)
 */

NTSTATUS __fastcall ndisNsiSetAllJobInformation(__int64 a1)
{
  int v1; // ebx
  NTSTATUS result; // eax
  unsigned int *v3; // rdi
  PVOID v4; // rsi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = -1073741811;
  if ( *(_DWORD *)(a1 + 52) )
    return -1073741822;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v3 = *(unsigned int **)(a1 + 32);
    if ( v3 )
    {
      result = ObReferenceObjectByHandle(**(HANDLE **)(a1 + 16), 4u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
      v4 = Object;
      if ( result < 0 )
        return result;
      v1 = NdisSetJobObjectCompartmentId((PVOID *)Object, *v3);
      ObfDereferenceObject(v4);
    }
  }
  return v1;
}
