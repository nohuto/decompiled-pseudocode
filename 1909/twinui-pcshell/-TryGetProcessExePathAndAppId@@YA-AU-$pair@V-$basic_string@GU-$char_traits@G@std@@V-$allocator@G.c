/*
 * XREFs of ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800BE2C8
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800BC19C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180027870 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180027DEC (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18005449C (--$QueryFullProcessImageNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B65D8 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18012DC8C (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall TryGetProcessExePathAndAppId(_OWORD *a1, DWORD a2)
{
  __m128i v3; // xmm6
  __int64 v4; // rdx
  char *v5; // rdi
  int v6; // eax
  void *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned int **v9; // rdx
  unsigned __int16 **v10; // r8
  __int64 v11; // rax
  LPVOID pv; // [rsp+28h] [rbp-59h] BYREF
  LPVOID v14; // [rsp+30h] [rbp-51h] BYREF
  void *v15[3]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v16; // [rsp+50h] [rbp-31h] BYREF
  __m128i v17; // [rsp+60h] [rbp-21h] BYREF
  __int128 v18; // [rsp+70h] [rbp-11h] BYREF
  __m128i si128; // [rsp+80h] [rbp-1h]
  _QWORD v20[4]; // [rsp+90h] [rbp+Fh] BYREF

  v15[2] = (void *)-2LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v18) = 0;
  v3 = si128;
  v17 = si128;
  LOWORD(v16) = 0;
  v5 = (char *)OpenProcess(0x1000u, 0, a2);
  v15[0] = v5;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v14 = 0LL;
    v6 = wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           (__int64)v5,
           v4,
           (__int64)&v14);
    v7 = v14;
    if ( v6 >= 0 && v14 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)v14 + v8) );
      std::wstring::assign((char *)&v18, v14, v8);
    }
    pv = 0LL;
    v9 = (unsigned int **)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&pv);
    if ( (int)CallerIdentity::GetProcessAppId(v5, v9, v10) >= 0 )
    {
      v11 = Windows::Internal::FamilySafety::AppLimits::AumidToAppId((__int64)v20, (const unsigned __int16 *)pv);
      std::wstring::operator=(&v16, v11);
      std::wstring::_Tidy_deallocate(v20);
      v3 = _mm_loadu_si128(&v17);
    }
    if ( pv )
      CoTaskMemFree(pv);
    if ( v7 )
      CoTaskMemFree(v7);
  }
  *a1 = v18;
  a1[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v18) = 0;
  a1[2] = v16;
  a1[3] = v3;
  v17 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v16) = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(v15);
  std::wstring::_Tidy_deallocate(&v16);
  std::wstring::_Tidy_deallocate(&v18);
  return a1;
}
