/*
 * XREFs of EtwpUseDescriptorTypeUm @ 0x1408B7748
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpUseDescriptorTypeUm(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // ebx
  char v4; // al
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = *(_BYTE *)(a1 + 8);
    if ( v4 == 1 )
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x200u);
    }
    else if ( v4 )
    {
      v3 = -1073741811;
    }
    else
    {
      _InterlockedAnd16((volatile signed __int16 *)Object + 49, 0xFDFFu);
    }
    ObfDereferenceObject(Object);
    return v3;
  }
  return result;
}
