/*
 * XREFs of ndisOpenProtocolSubkey @ 0x1C00C7330
 * Callers:
 *     NdisOpenConfigurationKeyByName @ 0x1C00C52C0 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00D1100 (NdisOpenConfigurationKeyByIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOpenProtocolSubkey(__int64 a1)
{
  __int64 v1; // rax
  NTSTATUS v3; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  v6 = 6815846;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v5[1] = a1 + 176;
  v5[0] = 0LL;
  v1 = -1LL;
  KeyHandle = 0LL;
  do
    ++v1;
  while ( *(_WORD *)(a1 + 176 + 2 * v1) );
  ObjectAttributes.Length = 48;
  LOWORD(v5[0]) = 2 * v1;
  ObjectAttributes.RootDirectory = 0LL;
  WORD1(v5[0]) = 2 * v1 + 2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey((PHANDLE)(a1 + 32), 0xBu, &ObjectAttributes);
    if ( v3 < 0 )
      *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
