/*
 * XREFs of GetEnhancedVerifierOptions @ 0x1C0044098
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0043B7C (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017E54 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0043650 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 */

void __fastcall GetEnhancedVerifierOptions(_CLIENT_INFO *ClientInfo, unsigned int *Options)
{
  __int64 v3; // rcx
  _UNICODE_STRING *v4; // rax
  unsigned int value; // [rsp+20h] [rbp-69h] BYREF
  FxAutoRegKey hWdf; // [rsp+28h] [rbp-61h] BYREF
  FxAutoRegKey hKey; // [rsp+30h] [rbp-59h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+38h] [rbp-51h] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  wchar_t parametersPath_buffer[16]; // [rsp+88h] [rbp-1h] BYREF
  wchar_t valueName_buffer[24]; // [rsp+A8h] [rbp+1Fh] BYREF

  hKey.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  parametersPath.Buffer = parametersPath_buffer;
  *(_DWORD *)&parametersPath.Length = 1966108;
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"EnhancedVerifierOptions";
  *(_DWORD *)&valueName.Length = 3145774;
  *Options = 0;
  wcscpy(&valueName_buffer[8], L"VerifierOptions");
  valueName.Buffer = valueName_buffer;
  if ( IsClientInfoValid(ClientInfo) )
  {
    v4 = *(_UNICODE_STRING **)(v3 + 8);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v4;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ObjectAttributes.RootDirectory = hWdf.m_Key;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &parametersPath;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes) >= 0
        && (int)FxRegKey::_QueryULong(hKey.m_Key, &valueName, &value) >= 0
        && value )
      {
        *Options = value;
      }
    }
  }
  else
  {
    if ( !WdfLdrDbgPrintOn )
      return;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Invalid ClientInfo received from wdfldr \n");
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
