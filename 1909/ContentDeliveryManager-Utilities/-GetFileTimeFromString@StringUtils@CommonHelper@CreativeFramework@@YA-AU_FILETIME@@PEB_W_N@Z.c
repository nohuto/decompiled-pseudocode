/*
 * XREFs of ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800A961C
 * Callers:
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006F910 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ??1?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18002FA94 (--1-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D480 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800765D4 (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008885C (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??0?$basic_istringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@H@Z @ 0x1800912D4 (--0-$basic_istringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV-$basic_strin.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800A986C (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AEF7C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
struct _FILETIME __fastcall CreativeFramework::CommonHelper::StringUtils::GetFileTimeFromString(
        CreativeFramework::CommonHelper::StringUtils *this,
        const wchar_t *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  const wchar_t *v4; // rax
  const char *v5; // r9
  __int64 v6; // rbx
  const char *v7; // r9
  struct _FILETIME v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-E0h] BYREF
  struct _FILETIME FileTime; // [rsp+30h] [rbp-D8h] BYREF
  FILETIME LocalFileTime; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h]
  _BYTE v14[16]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v15[128]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v16[12]; // [rsp+D8h] [rbp-30h] BYREF
  SYSTEMTIME SystemTime; // [rsp+138h] [rbp+30h] BYREF
  void *v18[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v19; // [rsp+158h] [rbp+50h]
  unsigned __int64 v20; // [rsp+160h] [rbp+58h]
  void *v21[4]; // [rsp+168h] [rbp+60h] BYREF
  _WORD v22[20]; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v13 = -2LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *((_WORD *)this + v2) );
  if ( !v2 )
    return (struct _FILETIME)`CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity'::`4'::_TlgActivityPrivacyTag;
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  if ( *(_WORD *)this )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)this + v3) );
  }
  else
  {
    v3 = 0LL;
  }
  std::wstring::assign(v18, (char *)this, v3);
  std::wistringstream::wistringstream((__int64)v14, v18);
  if ( v20 >= 8 )
    operator delete(v18[0]);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  v21[0] = v22;
  v4 = L"%Y-%m-%dT%H:%M:%S";
  v21[1] = L"%Y-%m-%dT%H:%M:%S";
  do
    ++v4;
  while ( *v4 );
  v21[2] = (void *)v4;
  std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>(v14, v21);
  SystemTime.wDayOfWeek = 0;
  SystemTime.wMilliseconds = 0;
  SystemTime.wYear = v22[10] + 1900;
  SystemTime.wMonth = v22[8] + 1;
  SystemTime.wDay = v22[6];
  SystemTime.wHour = v22[4];
  SystemTime.wMinute = v22[2];
  SystemTime.wSecond = v22[0];
  if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
      v5);
    JUMPOUT(0x1800A9853LL);
  }
  std::wstringbuf::str((__int64)v15, v21);
  LOWORD(v10) = 90;
  v6 = std::wstring::find((char *)v21, (unsigned __int16 *)&v10, 0LL, 1uLL);
  if ( v21[3] >= (void *)8 )
    operator delete(v21[0]);
  if ( v6 == -1 )
  {
    LocalFileTime = FileTime;
    if ( !LocalFileTimeToFileTime(&LocalFileTime, &FileTime) )
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\stringhelper.cpp",
        v7);
      __debugbreak();
    }
  }
  v8 = FileTime;
  std::wistringstream::~wistringstream((__int64)v16);
  v16[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v16);
  return v8;
}
