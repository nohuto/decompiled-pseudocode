/*
 * XREFs of VmTerminateMemoryProcess @ 0x1408ED730
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     PsTerminateMinimalProcess @ 0x1408C9768 (PsTerminateMinimalProcess.c)
 */

NTSTATUS __fastcall VmTerminateMemoryProcess(void *a1, int a2)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  if ( result >= 0 )
  {
    PsTerminateMinimalProcess(Object, a2);
    ObfDereferenceObject(Object);
    return 0;
  }
  return result;
}
