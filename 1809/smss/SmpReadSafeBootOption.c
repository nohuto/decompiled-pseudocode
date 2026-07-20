/*
 * XREFs of SmpReadSafeBootOption @ 0x14000CC6C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 */

__int64 SmpReadSafeBootOption()
{
  NTSTATUS v0; // ebx
  int v2; // eax
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+70h] [rbp-90h] BYREF
  int v7; // [rsp+7Ch] [rbp-84h]

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&SmpSafebootOptionKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    v0 = NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&SmpSafebootOptionValue,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x200u,
           &ResultLength);
    NtClose(KeyHandle);
    v2 = SmpSafeBootOption;
    if ( v0 >= 0 )
      v2 = v7;
    SmpSafeBootOption = v2;
  }
  return (unsigned int)v0;
}
