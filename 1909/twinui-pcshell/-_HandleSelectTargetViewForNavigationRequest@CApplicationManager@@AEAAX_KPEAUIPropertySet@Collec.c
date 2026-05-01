/*
 * XREFs of ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x18007C93C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18003FCD0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007CAC8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleSelectTargetViewForNavigationRequest(
        CApplicationManager *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rbx
  int v8; // eax
  RTL_SRWLOCK *v9; // rdi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rsi
  int v12; // ebx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rbx
  __int64 (__fastcall *v14)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *); // rsi
  int v15; // eax
  int v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+80h] [rbp+30h] BYREF

  v20 = a3;
  v17[1] = -2LL;
  *(_QWORD *)v16 = 0LL;
  v6 = *((_QWORD *)this + 75);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
  v8 = v7(v6, 1LL, a2);
  if ( v8 >= 0 )
  {
    v19 = 0LL;
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(v16, v17);
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    v17[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v20 = 0LL;
    v10 = v17[0];
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v17[0] + 352LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    v12 = v11(v10, 2LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v20);
    if ( v12 >= 0 )
    {
      v13 = v20;
      v14 = *(__int64 (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))(*(_QWORD *)v20 + 40LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v12 = v14(v13, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v19);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    if ( v9 )
      ReleaseSRWLockShared(v9);
    if ( v12 < 0 )
      goto LABEL_9;
    v15 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v19 + 48LL))(
            v19,
            &v20);
    if ( v15 >= 0 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
        a4,
        (unsigned int)v20);
LABEL_9:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      goto LABEL_10;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17AB,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v15,
      (int)v16);
  }
  if ( v8 == -2147319765 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
      a4,
      0LL);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v16);
}
