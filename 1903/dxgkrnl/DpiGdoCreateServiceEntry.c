/*
 * XREFs of DpiGdoCreateServiceEntry @ 0x1C015D04C
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C015C9B0 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     wcsrchr_0 @ 0x1C002334F (wcsrchr_0.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiGdoCreateServiceEntry(__int64 a1, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  wchar_t *v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Video");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v8 = (wchar_t *)v4;
  if ( v4 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v11 + 24) = v8;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    v8 = wcsrchr_0(*(const wchar_t **)(a1 + 8), 0x5Cu) + 1;
    RtlInitUnicodeString(&ValueName, L"Service");
    v9 = -1LL;
    do
      ++v9;
    while ( v8[v9] );
    LODWORD(v8) = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, v8, 2 * v9 + 2);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v8;
}
