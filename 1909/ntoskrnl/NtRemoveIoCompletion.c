/*
 * XREFs of NtRemoveIoCompletion @ 0x1406048D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *CompletionKey,
        PVOID *CompletionContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  LARGE_INTEGER *v14; // rbx
  NTSTATUS result; // eax
  NTSTATUS v16; // edi
  LARGE_INTEGER *v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  ULONG v19[4]; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+68h] [rbp-50h] BYREF
  _OWORD v21[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v22; // [rsp+90h] [rbp-28h]
  PLIST_ENTRY v23; // [rsp+98h] [rbp-20h] BYREF

  memset(v21, 0, sizeof(v21));
  v18 = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)CompletionContext;
    if ( (unsigned __int64)CompletionContext >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)CompletionKey;
    if ( (unsigned __int64)CompletionKey >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    v13 = (__int64)Timeout;
    if ( Timeout )
    {
      v17 = (LARGE_INTEGER *)&v18;
      if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      v22 = *(_QWORD *)v13;
      v18 = v22;
    }
    v14 = v17;
  }
  else
  {
    v14 = 0LL;
    if ( Timeout )
      v14 = Timeout;
  }
  result = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = IoRemoveIoCompletion((struct _KQUEUE *)Object, (__int64)v21, &v23, 1u, v19, PreviousMode, v14, 0);
    ObfDereferenceObject(Object);
    if ( !v16 )
    {
      *CompletionKey = *(PVOID *)&v21[0];
      *CompletionContext = (PVOID)*((_QWORD *)&v21[0] + 1);
      *IoStatusBlock = (struct _IO_STATUS_BLOCK)v21[1];
    }
    return v16;
  }
  return result;
}
