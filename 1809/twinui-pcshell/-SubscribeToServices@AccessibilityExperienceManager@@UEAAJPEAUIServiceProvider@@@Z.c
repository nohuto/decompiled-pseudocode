/*
 * XREFs of ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802D2E20
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18005EDB8 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EA5E8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1802D25BC (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibilityExperienceManager::SubscribeToServices(
        AccessibilityExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rbx
  PVOID Reserved1; // r8
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v22 = -2LL;
  v4 = (__int64 *)((char *)this + 224);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 28, (__int64)a2);
  v5 = *v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v5 + 24LL))(
         v5,
         &SID_ViewEventDispatcher,
         &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
         (char *)this + 216);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)&v21 = AccessibilityExperienceManager::_OnViewEvent;
    DWORD2(v21) = 0;
    v23.Reserved.Reserved1 = (char *)this - 48;
    *(_OWORD *)&v23.Reserved.Reserved2[8] = v21;
    v8 = 0LL;
    v9 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v9);
      *(HSTRING_HEADER *)(v10 + 16) = v23;
      *(_QWORD *)v10 = off_1803D7048;
      v8 = v10;
    }
    *(_QWORD *)&v21 = v8;
    v11 = *((_QWORD *)this + 27);
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&qword_18050F1B8)[1].Reserved.Reserved1;
    v13 = (*(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, char *))(*(_QWORD *)v11 + 48LL))(
            v11,
            v8,
            Reserved1,
            0LL,
            (char *)this + 200);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 157LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      return v7;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
    v13 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 360);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 159LL;
      goto LABEL_9;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    v15 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v20);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v17 = v20;
      v18 = (_QWORD *)((char *)this + 240);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v17 + 72LL))(
              v17,
              0LL,
              &SID_ImmersiveLayout,
              &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
              (char *)this + 240);
      v7 = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 45) + 40LL))(
                *((_QWORD *)this + 45),
                ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64),
                (char *)this + 208);
        v7 = v15;
        if ( v15 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v18 + 40LL))(
                  *v18,
                  10LL,
                  ((unsigned __int64)this + 80) & -(__int64)(this != (AccessibilityExperienceManager *)48),
                  (char *)this + 212);
          v7 = v15;
          if ( v15 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v18 + 72LL))(*v18, (char *)this + 408);
            *(_OWORD *)((char *)this + 392) = 0LL;
            AccessibilityExperienceManager::RelaunchWithDelay((AccessibilityExperienceManager *)((char *)this - 48));
            v7 = 0;
            goto LABEL_20;
          }
          v16 = 171LL;
        }
        else
        {
          v16 = 168LL;
        }
      }
      else
      {
        v16 = 166LL;
      }
    }
    else
    {
      v16 = 165LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_20:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
