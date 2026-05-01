/*
 * XREFs of ?HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006100
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006080 (-HampUtilCreateVolatileUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x10006230 (RtlStringLengthWorkerW.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 *     _memset @ 0x1000D154 (_memset.c)
 */

unsigned int __userpurge HampUtilCreateUserRegKey@<eax>(void *a1@<ecx>, HKEY *a2, unsigned int a3, HKEY *a4)
{
  WCHAR *v5; // eax
  int v6; // esi
  int v7; // ecx
  char *v8; // edi
  WCHAR v9; // dx
  LSTATUS v10; // eax
  unsigned int v11; // esi
  bool v12; // sf
  int v14; // [esp+8h] [ebp-210h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+Ch] [ebp-20Ch] BYREF
  HKEY phkResult; // [esp+14h] [ebp-204h] BYREF
  WCHAR SubKey[254]; // [esp+18h] [ebp-200h] BYREF

  phkResult = 0;
  memset(SubKey, 0, sizeof(SubKey));
  UnicodeString.Length = 0;
  UnicodeString.MaximumLength = 508;
  UnicodeString.Buffer = SubKey;
  RtlConvertSidToUnicodeString(&UnicodeString, a1, 0);
  if ( (int)RtlStringLengthWorkerW(&v14) >= 0 )
  {
    v5 = &SubKey[v14];
    v6 = 254 - v14;
    if ( v14 == 254 )
      goto LABEL_7;
    v7 = 66;
    v8 = (char *)((char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - (char *)v5);
    while ( v7 )
    {
      v9 = *(WCHAR *)((char *)v5 + (_DWORD)v8);
      if ( !v9 )
        break;
      *v5 = v9;
      --v7;
      ++v5;
      if ( !--v6 )
        goto LABEL_7;
    }
    if ( !v6 )
LABEL_7:
      --v5;
    *v5 = 0;
  }
  v10 = RegCreateKeyExW(HKEY_USERS, SubKey, 0, 0, 0, 1u, 0, &phkResult, 0);
  v11 = v10;
  v12 = v10 < 0;
  if ( v10 > 0 )
  {
    v11 = (unsigned __int16)v10 | 0xC0070000;
    v12 = 1;
  }
  if ( v12 )
  {
    if ( phkResult )
      RegCloseKey(phkResult);
    return v11;
  }
  else
  {
    *a2 = phkResult;
    return 0;
  }
}
