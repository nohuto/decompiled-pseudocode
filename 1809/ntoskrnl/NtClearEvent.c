/*
 * XREFs of NtClearEvent @ 0x1406999A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtClearEvent(HANDLE EventHandle)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(
             EventHandle,
             2u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result >= 0 )
  {
    KeResetEvent((PRKEVENT)Object);
    ObfDereferenceObject(Object);
    return v2;
  }
  return result;
}
