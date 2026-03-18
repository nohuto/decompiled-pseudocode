/*
 * XREFs of ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0090CCC
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C001B6E4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0090F7C (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

int __fastcall CUmdfSvcConfig::IsCompanionSecure(void *UmdfServiceKey, bool *SecureCompanion)
{
  int result; // eax
  unsigned int companionType; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING umdfServiceTypeKeyName; // [rsp+28h] [rbp-40h] BYREF
  wchar_t umdfServiceTypeKeyName_buffer[16]; // [rsp+38h] [rbp-30h] BYREF

  *SecureCompanion = 0;
  *(_DWORD *)&umdfServiceTypeKeyName.Length = 2097182;
  wcscpy(umdfServiceTypeKeyName_buffer, L"UmdfServiceType");
  umdfServiceTypeKeyName.Buffer = umdfServiceTypeKeyName_buffer;
  result = CUmdfSvcConfig::_QueryULong(UmdfServiceKey, &umdfServiceTypeKeyName, &companionType);
  if ( result >= 0 )
    *SecureCompanion = companionType == 2;
  return result;
}
