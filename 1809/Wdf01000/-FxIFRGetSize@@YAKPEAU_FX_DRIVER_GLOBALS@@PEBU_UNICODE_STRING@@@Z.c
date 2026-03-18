/*
 * XREFs of ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003B830
 * Callers:
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C003B9F0 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017E54 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 */

__int64 __fastcall FxIFRGetSize(_FX_DRIVER_GLOBALS *FxDriverGlobals, _UNICODE_STRING *RegistryPath)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int numPages; // [rsp+20h] [rbp-69h] BYREF
  FxAutoRegKey parameters; // [rsp+28h] [rbp-61h] BYREF
  FxAutoRegKey service; // [rsp+30h] [rbp-59h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+38h] [rbp-51h] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+58h] [rbp-31h] BYREF
  wchar_t valueName_buffer[12]; // [rsp+88h] [rbp-1h] BYREF
  wchar_t parametersPath_buffer[16]; // [rsp+A0h] [rbp+17h] BYREF

  service.m_Key = 0LL;
  parameters.m_Key = 0LL;
  oa.RootDirectory = 0LL;
  v3 = 1;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  parametersPath.Buffer = parametersPath_buffer;
  wcscpy(valueName_buffer, L"LogPages");
  oa.ObjectName = RegistryPath;
  valueName.Buffer = valueName_buffer;
  numPages = 1;
  *(_DWORD *)&parametersPath.Length = 1966108;
  *(_DWORD *)&valueName.Length = 1179664;
  oa.Length = 48;
  oa.Attributes = 576;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&service.m_Key, 0x20019u, &oa) >= 0 )
  {
    oa.RootDirectory = service.m_Key;
    oa.Length = 48;
    oa.ObjectName = &parametersPath;
    oa.Attributes = 576;
    *(_OWORD *)&oa.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&parameters.m_Key, 0x20019u, &oa) >= 0 )
    {
      v4 = FxRegKey::_QueryULong(parameters.m_Key, &valueName, &numPages);
      v3 = numPages;
      if ( v4 >= 0 && !numPages )
        v3 = 1;
      if ( v3 > 0x10 )
      {
        if ( !FxDriverGlobals->FxVerifierOn || (v3 = 5, !FxDriverGlobals->FxVerboseOn) )
          v3 = 1;
      }
    }
  }
  v5 = v3 << 12;
  if ( parameters.m_Key )
    ZwClose(parameters.m_Key);
  if ( service.m_Key )
    ZwClose(service.m_Key);
  return v5;
}
