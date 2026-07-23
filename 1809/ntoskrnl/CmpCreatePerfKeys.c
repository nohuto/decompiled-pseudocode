/*
 * XREFs of CmpCreatePerfKeys @ 0x140733FFC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     CmpCreatePredefined @ 0x1407340B4 (CmpCreatePredefined.c)
 */

int CmpCreatePerfKeys()
{
  int result; // eax
  unsigned __int16 v1; // cx
  __int64 v2; // r9
  int v3; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-48h] BYREF
  wchar_t pszDest[8]; // [rsp+68h] [rbp-18h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpPerflibPathString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
  if ( result >= 0 )
  {
    CmpCreatePredefined(KeyHandle, L"009", -2147483568LL);
    CmpCreatePredefined(KeyHandle, L"CurrentLanguage", -2147483552LL);
    if ( PsDefaultSystemLocaleId != 1033 )
    {
      v1 = PsDefaultUILanguageId;
      v2 = 4LL;
      v3 = PsDefaultUILanguageId & 0x3FF;
      if ( v3 == 4 )
      {
        if ( (PsDefaultUILanguageId & 0xFC00) != 0x800 )
          v1 = 1028;
      }
      else if ( v3 == 22 )
      {
        if ( (PsDefaultUILanguageId & 0xFC00) != 0x400 )
          v1 = 2070;
      }
      else
      {
        v1 = PsDefaultUILanguageId & 0x3FF;
        v2 = 3LL;
      }
      RtlStringCbPrintfW(pszDest, 0xAuLL, L"%0*X", v2, v1);
      CmpCreatePredefined(KeyHandle, pszDest, -2147483552LL);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
