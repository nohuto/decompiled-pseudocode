/*
 * XREFs of ?ndisOpenProtocolSubkey@@YAHPEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C0023AF0
 * Callers:
 *     NdisOpenConfigurationKeyByName @ 0x1C002AD70 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C002CBE0 (NdisOpenConfigurationKeyByIndex.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisOpenProtocolSubkey(struct _NDIS_CONFIGURATION_HANDLE *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  v6[0] = 6815846LL;
  KeyHandle = 0LL;
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v5[0] = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = -1LL;
  v5[1] = (char *)a1 + 176;
  do
    ++v2;
  while ( *((_WORD *)a1 + v2 + 88) );
  ObjectAttributes.Length = 48;
  LOWORD(v5[0]) = 2 * v2;
  ObjectAttributes.RootDirectory = 0LL;
  WORD1(v5[0]) = 2 * v2 + 2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenKey((PHANDLE)a1 + 4, 0xBu, &ObjectAttributes);
    if ( v3 < 0 )
      *((_QWORD *)a1 + 4) = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
