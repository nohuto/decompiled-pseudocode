/*
 * XREFs of ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180078928
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18002E9B0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180078A9C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleSelectTargetViewForNavigationRequest(
        CApplicationManager *this,
        __int64 a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *a4)
{
  __int64 v6; // rbx
  int v7; // eax
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rdi
  int v10; // edi
  __int64 v11; // rdi
  int v12; // eax
  int v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+80h] [rbp+30h] BYREF

  v17 = a3;
  v14[1] = -2LL;
  *(_QWORD *)v13 = 0LL;
  v6 = *((_QWORD *)this + 75);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 64LL))(v6, 1LL, a2);
  if ( v7 >= 0 )
  {
    v16 = 0LL;
    v14[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(v13, v14);
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    v14[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = 0LL;
    v9 = v14[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v9 + 352LL))(
            v9,
            2LL,
            &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
            &v17);
    if ( v10 >= 0 )
    {
      v11 = (__int64)v17;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 40LL))(
              v11,
              &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
              &v16);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( v10 < 0 )
      goto LABEL_9;
    v12 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v16 + 48LL))(
            v16,
            &v17);
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
        a4,
        (unsigned int)v17);
LABEL_9:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_10;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16F6,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v12,
      (int)v13);
  }
  if ( v7 == -2147319765 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView *, _QWORD))(*(_QWORD *)a4 + 56LL))(
      a4,
      0LL);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
}
