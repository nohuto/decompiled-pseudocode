/*
 * XREFs of WaitForWerSvc @ 0x1800DE9D8
 * Callers:
 *     SendMessageToWERService @ 0x1800DE71C (SendMessageToWERService.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenEvent @ 0x1800A0B00 (NtOpenEvent.c)
 */

NTSTATUS __fastcall WaitForWerSvc(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  LARGE_INTEGER *v3; // r8
  NTSTATUS v4; // ebx
  int v5; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v6; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v9; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v6 = L"\\KernelObjects\\SystemErrorPortReady";
  v5 = 4718662;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 != -1 )
      v9 = -10000 * v1;
    v3 = (LARGE_INTEGER *)&v9;
    if ( (_DWORD)v1 == -1 )
      v3 = 0LL;
    v4 = NtWaitForSingleObject(EventHandle, 0, v3);
    NtClose(EventHandle);
    return v4;
  }
  return result;
}
