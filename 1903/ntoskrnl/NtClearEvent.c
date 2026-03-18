/*
 * XREFs of NtClearEvent @ 0x1406BDA60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtClearEvent(HANDLE EventHandle)
{
  NTSTATUS v1; // eax
  PVOID v2; // rdi
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = ObReferenceObjectByHandle(
         EventHandle,
         2u,
         (POBJECT_TYPE)ExEventObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v2 = Object;
  v3 = v1;
  if ( v1 >= 0 )
    KeResetEvent((PRKEVENT)Object);
  if ( v2 )
    ObfDereferenceObject(v2);
  return v3;
}
