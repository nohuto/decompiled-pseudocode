/*
 * XREFs of ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180046C64
 * Callers:
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x180046A1C (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x1800484B4 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800145C0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800492E0 (--1-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180049380 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004A394 (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ??$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004AC64 (--$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Wi.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
const WCHAR *__fastcall MobilityExperience::ActivityWrapper::GetUserActivityPayload(__int64 a1, const WCHAR *a2)
{
  char *v4; // rax
  size_t v5; // r8
  HSTRING_HEADER *Reserved1; // r8
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(_QWORD *, PVOID, const WCHAR *); // r14
  const WCHAR *v9; // rax
  HSTRING_HEADER *v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v14; // [rsp+30h] [rbp-D8h] BYREF
  const WCHAR *v15[3]; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING_HEADER v16; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-A0h]
  void *v18[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-80h]
  _BYTE v20[112]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v15[1] = (const WCHAR *)-2LL;
  v15[2] = a2;
  wil::GetActivationFactory<Windows::ApplicationModel::Internal::UserActivities::IUserActivityPayloadFactory>(&v14);
  v4 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 136LL))(*(_QWORD *)(a1 + 8));
  v17 = 15LL;
  *(_QWORD *)&v16.Reserved.Reserved2[16] = 0LL;
  v16.Reserved.Reserved2[0] = 0;
  if ( *v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::string::assign(&v16.Reserved.Reserved1, v4, v5);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v20);
  Reserved1 = &v16;
  if ( v17 >= 0x10 )
    Reserved1 = (HSTRING_HEADER *)v16.Reserved.Reserved1;
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::from_bytes(
    v20,
    v18,
    Reserved1,
    (char *)Reserved1 + *(_QWORD *)&v16.Reserved.Reserved2[16],
    0);
  std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v20);
  if ( v17 >= 0x10 )
    operator delete(v16.Reserved.Reserved1);
  *(_QWORD *)a2 = 0LL;
  v7 = v14;
  v8 = *(__int64 (__fastcall **)(_QWORD *, PVOID, const WCHAR *))(*v14 + 56LL);
  v9 = (const WCHAR *)v18;
  if ( v19 >= 8 )
    v9 = (const WCHAR *)v18[0];
  v15[0] = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, v15);
  v11 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = v8(v7, v10[1].Reserved.Reserved1, a2);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x297,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x180046E35LL);
  }
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 16LL))(v14, *v14);
  return a2;
}
