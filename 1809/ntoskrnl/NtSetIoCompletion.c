/*
 * XREFs of NtSetIoCompletion @ 0x14068B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetIoCompletion(
        HANDLE IoCompletionPortHandle,
        PVOID CompletionKey,
        PVOID CompletionContext,
        NTSTATUS CompletionStatus,
        ULONG CompletionInformation)
{
  NTSTATUS v8; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v8 = ObReferenceObjectByHandle(
         IoCompletionPortHandle,
         2u,
         IoCompletionObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v8 >= 0 )
  {
    v8 = IoSetIoCompletionEx2(
           (__int64)Object,
           (__int64)CompletionKey,
           (__int64)CompletionContext,
           (unsigned int)CompletionStatus,
           *(__int64 *)&CompletionInformation,
           1u,
           0LL,
           0);
    ObfDereferenceObject(Object);
  }
  return v8;
}
