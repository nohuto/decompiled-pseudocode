/*
 * XREFs of ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0092760
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0043988 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0061E50 (-_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall CUmdfSvcConfig::IsCompanionSecure(void *UmdfServiceKey, bool *SecureCompanion)
{
  __int64 result; // rax
  unsigned int companionType; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING umdfServiceTypeKeyName; // [rsp+28h] [rbp-40h] BYREF
  wchar_t umdfServiceTypeKeyName_buffer[16]; // [rsp+38h] [rbp-30h] BYREF

  *SecureCompanion = 0;
  *(_QWORD *)&umdfServiceTypeKeyName.Length = 2097182LL;
  wcscpy(umdfServiceTypeKeyName_buffer, L"UmdfServiceType");
  umdfServiceTypeKeyName.Buffer = umdfServiceTypeKeyName_buffer;
  result = CUmdfSvcConfig::_QueryULong(UmdfServiceKey, &umdfServiceTypeKeyName, &companionType);
  if ( (int)result >= 0 )
  {
    *SecureCompanion = companionType == 2;
    return (unsigned int)result;
  }
  return result;
}
