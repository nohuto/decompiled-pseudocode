/*
 * XREFs of NtSuspendProcess @ 0x1408CA980
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendProcess @ 0x1408CAA00 (PsSuspendProcess.c)
 */

NTSTATUS __stdcall NtSuspendProcess(HANDLE ProcessHandle)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)ProcessHandle,
         2048,
         (__int64)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x75537350u,
         &Object,
         0LL,
         0LL);
  if ( v1 >= 0 )
  {
    v1 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return v1;
}
