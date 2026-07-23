/*
 * XREFs of sub_1800DC5E8 @ 0x1800DC5E8
 * Callers:
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenEvent @ 0x18009CEE0 (ZwOpenEvent.c)
 */

NTSTATUS __fastcall sub_1800DC5E8(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  char v3; // dl
  LARGE_INTEGER *v4; // r8
  NTSTATUS v5; // ebx
  int v6; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v7 = L"\\KernelObjects\\SystemErrorPortReady";
  v6 = 4718662;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
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
      v10 = -10000 * v1;
    }
    v4 = (LARGE_INTEGER *)&v10;
    if ( v3 )
      v4 = 0LL;
    v5 = ZwWaitForSingleObject(EventHandle, 0, v4);
    ZwClose(EventHandle);
    return v5;
  }
  return result;
}
