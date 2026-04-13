/*
 * XREFs of ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x18003F3EC
 * Callers:
 *     ??$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@PEBGU_FILETIME@@@std@@YA?AV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@0@$$QEAPEBG$$QEAU_FILETIME@@@Z @ 0x1800435D8 (--$make_shared@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentMan.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D120 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18003DF18 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::SubscriptionMapValue(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *this,
        const unsigned __int16 *a2,
        struct _FILETIME a3)
{
  void *v6; // r14
  DWORD LastError; // edi
  const char *v8; // r9
  const WCHAR *v9; // rdx
  HANDLE v10; // rax
  signed int v11; // eax
  signed int v12; // ecx
  const WCHAR *v13; // r8
  HANDLE v14; // rax
  signed int v15; // eax
  __int64 v16; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+20h] [rbp-60h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue *v21; // [rsp+48h] [rbp-38h]
  LPCWSTR lpName[3]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v20 = -2LL;
  v21 = this;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v6 = *(void **)this;
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v6);
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  CreativeFramework::SubscribedContentStore::GetSubscriptionPlacementNameFromSubscriptionId(lpName, (__int64)a2);
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;FA;;;IU)(A;;FA;;;SY)(A;;GA;;;S-1-15-2-350187224-1905355452-1037786396-3028148496-2624191407-3283318427-1255436723)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x129,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      v8);
    JUMPOUT(0x18003F5B5LL);
  }
  EventAttributes.nLength = 24;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  EventAttributes.bInheritHandle = 0;
  v9 = (const WCHAR *)lpName;
  if ( v23 >= 8 )
    v9 = lpName[0];
  v10 = CreateEventExW(&EventAttributes, v9, 0, 0x1F0003u);
  *(_QWORD *)this = v10;
  if ( v10 )
  {
    v12 = 0;
  }
  else
  {
    v11 = GetLastError();
    v12 = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      v12 = v11;
    if ( v12 >= 0 )
      v12 = -2147467259;
  }
  if ( v12 < 0 )
  {
    v13 = (const WCHAR *)lpName;
    if ( v23 >= 8 )
      v13 = lpName[0];
    v14 = OpenEventW(0xF0000u, 0, v13);
    *(_QWORD *)this = v14;
    if ( v14 )
    {
      v16 = 0LL;
    }
    else
    {
      v15 = GetLastError();
      v16 = (unsigned __int16)v15 | 0x80070000;
      if ( v15 <= 0 )
        v16 = (unsigned int)v15;
      if ( (int)v16 >= 0 )
        v16 = 2147500037LL;
    }
    if ( (int)v16 >= 0 )
      v16 = 0LL;
    if ( (int)v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x130,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)v16);
      __debugbreak();
    }
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v23 >= 8 )
    operator delete((void *)lpName[0]);
  *((struct _FILETIME *)this + 4) = a3;
  return this;
}
