/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x1800190E0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180018E40 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180019454 (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019580 (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  __int64 v8; // rcx
  int v9; // ebx
  void *v10; // rcx
  HRESULT v11; // ebx
  IUnknown *v12; // rcx
  HRESULT Service; // ebx
  __int64 v14; // rdx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  struct Windows::Foundation::Collections::IPropertySet *v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+28h] [rbp-49h]
  IUnknown *punk; // [rsp+38h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-31h] BYREF
  IUnknown *v24; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-19h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-11h] BYREF
  __int64 v28; // [rsp+68h] [rbp-9h] BYREF
  __int64 v29; // [rsp+70h] [rbp-1h]
  __int64 v30; // [rsp+78h] [rbp+7h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v31; // [rsp+80h] [rbp+Fh] BYREF
  char v32; // [rsp+88h] [rbp+17h]
  int v33; // [rsp+90h] [rbp+1Fh]
  __int64 v34; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 v36; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v37; // [rsp+E0h] [rbp+6Fh] BYREF

  v34 = -2LL;
  LODWORD(v36) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v37 = 0LL;
  pv = 0LL;
  v28 = (__int64)a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  LOBYTE(v29) = 0;
  v30 = 0LL;
  v31 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v32 = 0;
  v33 = 0;
  v8 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v37 = 0LL;
  v36 = 0LL;
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
         (int)this + 632,
         (unsigned int)&v30,
         (unsigned int)&v36,
         (unsigned int)&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
  if ( v9 >= 0 )
    v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8LL * (_QWORD)v24))(
           *(_QWORD *)(*((_QWORD *)this + 79) + 8LL * (_QWORD)v24),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v9 >= 0 )
  {
    v26 = 0LL;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 **))v37)(v37, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v26);
    v25 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, __int64 *, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr
                                                            + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[14].Ptr,
           v26,
           &v25) >= 0 )
    {
      ppvOut = 0LL;
      punk = 0LL;
      LODWORD(v36) = 2;
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
        (char *)this + 48,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      v10 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
              &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
      if ( v11 >= 0
        && (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             v25,
             a3) >= 0 )
      {
        punk = 0LL;
        v24 = 0LL;
        LODWORD(v36) = 9;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
          (char *)this + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v24);
        v12 = punk;
        if ( punk )
        {
          punk = 0LL;
          ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
        }
        Service = IUnknown_QueryService(
                    v24,
                    &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                    &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                    (void **)&punk);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        if ( Service >= 0 )
        {
          LODWORD(v36) = 0;
          if ( ((int (__fastcall *)(IUnknown *, __int64, struct Windows::Foundation::Collections::IPropertySet *, __int64 *))punk->lpVtbl[3].AddRef)(
                 punk,
                 v25,
                 a3,
                 &v36) >= 0 )
          {
            if ( (_DWORD)v36 )
            {
              LOBYTE(v14) = 1;
              v20 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 72LL))(
                      a4,
                      v14);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x17F4,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v20,
                  v21);
            }
          }
        }
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 640LL))(v37);
        v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, _QWORD))(*(_QWORD *)a4 + 56LL))(
                a4,
                v15);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x17FA,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v16,
            v21);
        pv = 0LL;
        v28 = 0LL;
        v29 = 0LL;
        v17 = *v26;
        v28 = -1LL;
        v29 = -1LL;
        if ( (*(int (__fastcall **)(__int64 *, LPVOID *))(v17 + 32))(v26, &pv) >= 0 )
        {
          v19 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
                  (LPCWSTR)pv,
                  (const unsigned __int16 *)a3,
                  v18);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1804,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v19,
              v21);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v28 = 0LL;
        v29 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&punk);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
}
