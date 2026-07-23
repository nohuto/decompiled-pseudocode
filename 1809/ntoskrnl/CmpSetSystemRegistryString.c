/*
 * XREFs of CmpSetSystemRegistryString @ 0x140180F94
 * Callers:
 *     CmpSetSystemValues @ 0x1409C3DC0 (CmpSetSystemValues.c)
 * Callees:
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073370C (RtlCreateUnicodeStringFromAsciiz.c)
 */

__int64 __fastcall CmpSetSystemRegistryString(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCSZ Source)
{
  wchar_t *Buffer; // rdi
  BOOLEAN v6; // al
  unsigned int v7; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( Source )
  {
    v6 = RtlCreateUnicodeStringFromAsciiz(&UnicodeString, Source);
    Buffer = UnicodeString.Buffer;
    if ( v6 )
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = ZwDeleteValueKey(KeyHandle, ValueName);
    if ( v7 != -1073741772 )
      return v7;
    v7 = 0;
  }
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return v7;
}
