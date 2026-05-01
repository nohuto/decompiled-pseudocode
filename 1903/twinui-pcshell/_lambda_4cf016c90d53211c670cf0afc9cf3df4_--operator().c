/*
 * XREFs of _lambda_4cf016c90d53211c670cf0afc9cf3df4_::operator() @ 0x1800A19A4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_4cf016c90d53211c670cf0afc9cf3df4__&_::Run @ 0x1800A4C50 (wil--details--functor_wrapper_void__lambda_4cf016c90d53211c670cf0afc9cf3df4__-_--Run.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetAppDisplayName@AEAPEBGPEBG@AppUsageTelemetry@@SAXAEAPEBG$$QEAPEBG@Z @ 0x1800A0470 (--$GetAppDisplayName@AEAPEBGPEBG@AppUsageTelemetry@@SAXAEAPEBG$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4cf016c90d53211c670cf0afc9cf3df4_::operator()(__int64 a1)
{
  const WCHAR *v2; // rcx
  HRESULT String; // eax
  const WCHAR *v4; // rax
  LPCWSTR v6; // [rsp+20h] [rbp-40h] BYREF
  LPCWSTR v7[2]; // [rsp+28h] [rbp-38h] BYREF
  PCNZWCH sourceString[2]; // [rsp+38h] [rbp-28h] BYREF
  UINT32 length; // [rsp+48h] [rbp-18h]
  unsigned __int64 v10; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v7[1] = (LPCWSTR)-2LL;
  v7[0] = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  (*(void (__fastcall **)(_QWORD, PCNZWCH *, LPCWSTR))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL) + 88LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL),
    sourceString,
    v7[0]);
  v2 = (const WCHAR *)sourceString;
  if ( v10 >= 8 )
    v2 = sourceString[0];
  String = WindowsCreateString(v2, length, **(HSTRING ***)(a1 + 16));
  if ( String < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      151LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      (const char *)(unsigned int)String);
    __debugbreak();
  }
  v4 = (const WCHAR *)sourceString;
  if ( v10 >= 8 )
    v4 = sourceString[0];
  v6 = v4;
  AppUsageTelemetry::GetAppDisplayName<unsigned short const * &,unsigned short const *>(v7, &v6);
  return std::wstring::_Tidy_deallocate(sourceString);
}
