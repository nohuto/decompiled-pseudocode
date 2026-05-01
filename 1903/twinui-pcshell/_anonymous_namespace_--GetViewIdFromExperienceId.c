/*
 * XREFs of _anonymous_namespace_::GetViewIdFromExperienceId @ 0x18030FEC4
 * Callers:
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800863D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$InvalidExperienceId@AEAPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG@Z @ 0x18030C16C (--$InvalidExperienceId@AEAPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18031B7A4 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::GetViewIdFromExperienceId(HSTRING *a1)
{
  const WCHAR *StringRawBuffer; // rax
  wchar_t *v2; // rax
  unsigned int v3; // ebx
  __int64 result; // rax
  UINT32 length; // [rsp+20h] [rbp-48h] BYREF
  LPCWSTR v6[2]; // [rsp+28h] [rbp-40h] BYREF
  wchar_t String[16]; // [rsp+38h] [rbp-30h] BYREF

  v6[1] = (LPCWSTR)-2LL;
  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*a1, &length);
  v6[0] = StringRawBuffer;
  if ( !length || !StringRawBuffer )
    return 0xFFFFFFFFLL;
  v2 = wcsstr(StringRawBuffer, L"view:");
  if ( !v2 )
  {
LABEL_4:
    TouchKeyboardExperienceTelemetryLogger::InvalidExperienceId<unsigned short const * &>(v6);
    return 0xFFFFFFFFLL;
  }
  try
  {
    std::wstring::wstring((__int64)String, v2 + 5);
    v3 = std::stoul(String);
    std::wstring::_Tidy_deallocate(String);
    result = v3;
  }
  catch ( ... )
  {
    goto LABEL_4;
  }
  return result;
}
