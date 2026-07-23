/*
 * XREFs of OpenOrCreateKeyWithFlags @ 0x14031FB98
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031FA44 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 */

int __fastcall OpenOrCreateKeyWithFlags(__int64 a1, char a2, UNICODE_STRING *a3, HANDLE *a4, PULONG Disposition)
{
  int result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !a3 || !Disposition )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *Disposition = 2;
  result = ZwOpenKey(a4, 8u, &ObjectAttributes);
  if ( result < 0 && (a2 & 2) != 0 )
    return ZwCreateKey(a4, 8u, &ObjectAttributes, 0, 0LL, 0, Disposition);
  return result;
}
