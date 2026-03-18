/*
 * XREFs of IoSetSystemPartition @ 0x1408569C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     IopCreateRegistryKeyEx @ 0x1406E8650 (IopCreateRegistryKeyEx.c)
 */

NTSTATUS __stdcall IoSetSystemPartition(PUNICODE_STRING VolumeNameString)
{
  HANDLE v2; // rbx
  int v3; // edi
  int v4; // eax
  ULONG DataSize; // eax
  wchar_t *Data; // [rsp+20h] [rbp-69h]
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-59h] BYREF
  HANDLE v9; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  int v13; // [rsp+90h] [rbp+7h] BYREF
  int v14; // [rsp+94h] [rbp+Bh]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  int v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A4h] [rbp+1Bh]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v2 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ValueName.Buffer = (wchar_t *)&v13;
    v13 = 6619219;
    v14 = 7667828;
    v15 = 112;
    *(_DWORD *)&ValueName.Length = 786442;
    v4 = IopCreateRegistryKeyEx(&v9, KeyHandle, &ValueName, 0xF003Fu, 0, 0LL);
    v2 = v9;
    v3 = v4;
    if ( v4 >= 0 )
    {
      DataSize = VolumeNameString->Length + 2;
      v13 = 7929939;
      Data = VolumeNameString->Buffer;
      v14 = 7602291;
      v15 = 7143525;
      v16 = 6357072;
      v17 = 7602290;
      v18 = 7602281;
      v19 = 7274601;
      v20 = 110;
      *(_DWORD *)&ValueName.Length = 2097182;
      v3 = ZwSetValueKey(v9, &ValueName, 0, 1u, Data, DataSize);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ZwClose(v2);
  return v3;
}
