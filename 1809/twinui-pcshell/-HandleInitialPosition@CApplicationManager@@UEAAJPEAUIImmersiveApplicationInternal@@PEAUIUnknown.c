/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18002D980
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002A3F4 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18002D6A8 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3)
{
  CApplicationManager *v6; // rcx
  HRESULT v7; // ebx
  int v8; // eax
  IUnknown *punk; // [rsp+20h] [rbp-30h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  struct IApplicationView *v13[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v13[1] = (struct IApplicationView *)-2LL;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  v7 = CApplicationManager::_HandleCreation_EnsureApplicationView(v6, a2, 0LL, v13);
  if ( v7 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( (*(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL))(a2, &v12) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 200LL))(v12);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD35,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v8,
          (int)punk);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    punk = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL))(
      (char *)this - 192,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    v7 = IUnknown_QueryService(
           punk,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
           &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)ppvOut + 24LL))(
             ppvOut,
             v13[0],
             a3);
      if ( v7 >= 0 )
        v7 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
               (CApplicationManager *)((char *)this - 240),
               a2);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return (unsigned int)v7;
}
