/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x180042078
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18003FCD0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800402E4 (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18012BD08 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18012CE48 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013CCB4 (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013CFBC (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  int (__fastcall *v6)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *); // rbx
  HRESULT v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  HRESULT v10; // eax
  int v11; // ebx
  void (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  PVOID Ptr; // rdi
  int (__fastcall *v17)(PVOID, __int64, __int64 *); // rbx
  int (__fastcall *v18)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *); // rbx
  HRESULT v19; // eax
  unsigned int v20; // esi
  __int64 v21; // r8
  void (__fastcall *v22)(char *, GUID *, IUnknown **); // rbx
  __int64 *v23; // rcx
  CTaskWindowFinder *v24; // rbx
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // [rsp+28h] [rbp-79h]
  INT32 result; // [rsp+38h] [rbp-69h] BYREF
  __int64 v30; // [rsp+40h] [rbp-61h] BYREF
  HSTRING string1; // [rsp+48h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-51h] BYREF
  void (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-49h] BYREF
  void *ppvOut; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-39h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-31h] BYREF
  __int64 v37; // [rsp+78h] [rbp-29h] BYREF
  int v38; // [rsp+80h] [rbp-21h]
  __int64 v39; // [rsp+88h] [rbp-19h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v40; // [rsp+90h] [rbp-11h] BYREF
  char v41; // [rsp+98h] [rbp-9h]
  __int64 v42; // [rsp+A0h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v42 = -2LL;
  v38 = 0;
  string1 = 0LL;
  v6 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( v6(a3, &string1) < 0 )
    goto LABEL_33;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    RaiseException(v7, 1u, 0, 0LL);
    JUMPOUT(0x1800FFC8ELL);
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v30 = 0LL;
    v24 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&v39, a2);
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)v24;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&hstringHeader.Reserved.Reserved2[8]);
    hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v24 + 16);
    LODWORD(string) = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
    LOBYTE(v24) = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                         this,
                         &hstringHeader,
                         &v30,
                         0LL) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    if ( (_BYTE)v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 208LL))(v30);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v23 = &v30;
    goto LABEL_32;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1804470B0);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v8 + 24), &result) >= 0 && !result )
  {
    v25 = CApplicationManager::_HandleUniversalFrameChangeRequest(this, a2);
    v26 = retaddr;
    if ( v25 >= 0 )
      goto LABEL_33;
    v27 = 6481LL;
LABEL_42:
    wil::details::in1diag3::_Log_Hr(
      v26,
      (void *)v27,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v25,
      v28);
    goto LABEL_33;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1804470A8);
  if ( WindowsCompareStringOrdinal(string1, *(HSTRING *)(v9 + 24), &result) >= 0 && !result )
  {
    v25 = CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest(this, a2);
    v26 = retaddr;
    if ( v25 >= 0 )
      goto LABEL_33;
    v27 = 6485LL;
    goto LABEL_42;
  }
  string = 0LL;
  v10 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    RaiseException(v10, 1u, 0, 0LL);
    goto LABEL_44;
  }
  if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
  {
    string = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v33 = 0LL;
    v39 = 0LL;
    v40 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v41 = 0;
    hstringHeader.Reserved.Reserved1 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    hstringHeader.Reserved.Reserved2[16] = 0;
    LODWORD(string) = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    v33 = 0LL;
    v32 = 0LL;
    v11 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
            (_QWORD *)this + 79,
            (__int64)&hstringHeader,
            &v32,
            &ppvOut,
            v28);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
    if ( v11 >= 0 )
      v11 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut))(
              *(_QWORD *)(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut),
              &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
              &v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
    v37 = 0LL;
    if ( v11 >= 0 )
    {
      v12 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
      v13 = (*v33)[44];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64, GUID *, __int64 *))v13)(
              v12,
              2LL,
              &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
              &v37);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v11 < 0
      || !(*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v37 + 48LL))(
            v37,
            a2) )
    {
      goto LABEL_31;
    }
    v32 = 0LL;
    v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v33;
    v15 = **v33;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    v15(v14, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v32);
    v30 = 0LL;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v17 = *(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    if ( v17(Ptr, v32, &v30) < 0 )
    {
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
LABEL_31:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
      v23 = (__int64 *)&v33;
LABEL_32:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23);
      goto LABEL_33;
    }
    v35 = 0;
    v18 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 416LL);
    string = 0LL;
    v19 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v19 >= 0 )
    {
      if ( v18(a2, string, &v35) >= 0 )
      {
        v20 = v35;
        if ( v35 )
        {
          v21 = 0LL;
          if ( v35 == 1 )
            v21 = 64LL;
        }
        else
        {
          v21 = 32LL;
        }
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 464LL))(v30, 96LL, v21);
        ppvOut = 0LL;
        punk = 0LL;
        v38 = 32;
        v22 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        v22((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        LODWORD(v22) = IUnknown_QueryService(
                         punk,
                         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                         &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                         &ppvOut);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
        if ( (int)v22 >= 0 )
          (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v30, v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
      }
      goto LABEL_30;
    }
LABEL_44:
    RaiseException(v19, 1u, 0, 0LL);
    JUMPOUT(0x1800FFDACLL);
  }
LABEL_33:
  WindowsDeleteString(string1);
}
