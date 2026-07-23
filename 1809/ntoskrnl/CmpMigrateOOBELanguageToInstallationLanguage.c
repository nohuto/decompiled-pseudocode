/*
 * XREFs of CmpMigrateOOBELanguageToInstallationLanguage @ 0x1409C3FE4
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 */

__int64 CmpMigrateOOBELanguageToInstallationLanguage()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  unsigned __int16 v2; // dx
  __int64 i; // rcx
  unsigned __int16 v4; // ax
  __int16 v5; // ax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-48h] BYREF
  __int64 Data; // [rsp+68h] [rbp-18h] BYREF

  result = 0LL;
  KeyHandle = 0LL;
  Data = 0LL;
  if ( CmInstallUILanguageFallbackToOOBm )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentControlSetControlNlsLanguagePathString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( v1 >= 0 )
    {
      v2 = WORD1(NlsMbCodePageTag);
      for ( i = 3LL; i >= 0; --i )
      {
        v4 = v2 & 0xF;
        if ( v4 <= 9u )
          v5 = v4 + 48;
        else
          v5 = v4 + 55;
        v2 >>= 4;
        *((_WORD *)&Data + i) = v5;
      }
      v1 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpInstallLanguageString, 0, 1u, &Data, 8u);
      if ( v1 >= 0 )
        v1 = 0;
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
