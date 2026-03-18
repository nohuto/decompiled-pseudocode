/*
 * XREFs of NtSetContextThread @ 0x14088B910
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IoThreadToProcess @ 0x1400ACF00 (IoThreadToProcess.c)
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 */

NTSTATUS __stdcall NtSetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS v5; // edi
  PEPROCESS v6; // rax
  PETHREAD v7; // rbx
  NTSTATUS v9; // [rsp+30h] [rbp-48h] BYREF
  PETHREAD Thread; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v5 = ObReferenceObjectByHandle(ThreadHandle, 0x10u, (POBJECT_TYPE)PsThreadType, PreviousMode, (PVOID *)&Thread, 0LL);
  if ( v5 >= 0 )
  {
    v6 = IoThreadToProcess(CurrentThread);
    v7 = Thread;
    if ( (v6[1].DirectoryTableBase & 0x20000) != 0 && v6 == IoThreadToProcess(Thread) )
    {
      v5 = -1073740278;
    }
    else if ( (v7->MiscFlags & 0x400) != 0 || v7[1].WaitBlock[2].WaitListEntry.Blink )
    {
      v5 = -1073741816;
    }
    else
    {
      v5 = PspSetContextThreadInternal(v7, (__int64)Context, PreviousMode, PreviousMode, 1);
    }
    ObfDereferenceObject(v7);
  }
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v9;
  v9 = v5;
  UserData.Size = 4;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_SETCONTEXTTHREAD, 0LL, 1u, &UserData);
  return v5;
}
