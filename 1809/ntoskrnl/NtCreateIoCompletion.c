/*
 * XREFs of NtCreateIoCompletion @ 0x1406A7740
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeQueue @ 0x140121AA0 (KeInitializeQueue.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG NumberOfConcurrentThreads)
{
  int v5; // r10d
  char PreviousMode; // si
  __int64 v9; // r8
  NTSTATUS Object; // ecx
  ULONG v11; // edx
  PRKQUEUE v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  PRKQUEUE Queue[3]; // [rsp+68h] [rbp-20h] BYREF

  v5 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoCompletionHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  Object = ObCreateObjectEx(PreviousMode, IoCompletionObjectType, v5, PreviousMode, v14, 80, 0, 0, Queue, 0LL);
  if ( Object >= 0 )
  {
    v11 = NumberOfConcurrentThreads;
    v12 = Queue[0];
    KeInitializeQueue(Queue[0], v11);
    *(_QWORD *)&v12[1].Header.Lock = 0LL;
    LOBYTE(v12[1].Header.WaitListHead.Flink) = 0;
    Object = ObInsertObjectEx(v12, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v15);
    if ( Object >= 0 )
      *IoCompletionHandle = (HANDLE)v15;
  }
  return Object;
}
