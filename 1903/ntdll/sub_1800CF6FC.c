/*
 * XREFs of sub_1800CF6FC @ 0x1800CF6FC
 * Callers:
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKeyEx @ 0x18009EA30 (ZwOpenKeyEx.c)
 */

bool sub_1800CF6FC()
{
  bool v0; // bl
  int v2; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  v2 = 13500620;
  v3 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v2;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKeyEx(&KeyHandle, 0x20119u, &ObjectAttributes, 0) >= 0;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
