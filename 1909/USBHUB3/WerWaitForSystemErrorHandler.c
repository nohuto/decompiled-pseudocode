/*
 * XREFs of WerWaitForSystemErrorHandler @ 0x1C0040A10
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0040ADC (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerWaitForSystemErrorHandler(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  union _LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+78h] [rbp+18h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v5[1] = L"\\KernelObjects\\SystemErrorPortReady";
  v5[0] = 4718662LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v7 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 != -1 )
      v7 = -10000 * v1;
    v3 = (union _LARGE_INTEGER *)&v7;
    if ( (_DWORD)v1 == -1 )
      v3 = 0LL;
    v4 = ZwWaitForSingleObject(EventHandle, 0, v3);
    ZwClose(EventHandle);
    return v4;
  }
  return result;
}
