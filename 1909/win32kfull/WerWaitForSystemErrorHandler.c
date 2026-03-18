/*
 * XREFs of WerWaitForSystemErrorHandler @ 0x1C025CE74
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1C025C9B4 (WerKernelSubmitReportForHungProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerWaitForSystemErrorHandler(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  char v3; // dl
  union _LARGE_INTEGER *v4; // r8
  NTSTATUS v5; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+78h] [rbp+18h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6[1] = L"\\KernelObjects\\SystemErrorPortReady";
  v6[0] = 4718662LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v8 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 == -1 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      v8 = -10000 * v1;
    }
    v4 = (union _LARGE_INTEGER *)&v8;
    if ( v3 )
      v4 = 0LL;
    v5 = ZwWaitForSingleObject(EventHandle, 0, v4);
    ZwClose(EventHandle);
    return v5;
  }
  return result;
}
