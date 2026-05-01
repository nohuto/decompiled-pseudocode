/*
 * XREFs of ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18002E3E0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18002E9B0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18002ECF8 (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA344 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800EAE58 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall CApplicationManager::_HandleViewPropertyChanged(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *a3)
{
  HRESULT v6; // eax
  HRESULT v7; // eax
  int v8; // ebx
  void (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  PVOID Ptr; // rbx
  HRESULT v11; // eax
  unsigned int v12; // edi
  __int64 v13; // r8
  HRESULT v14; // ebx
  CTaskWindowFinder *v15; // rbx
  __int64 v16; // [rsp+38h] [rbp-69h] BYREF
  INT32 result; // [rsp+40h] [rbp-61h] BYREF
  __int64 v18; // [rsp+48h] [rbp-59h] BYREF
  void (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-51h] BYREF
  void *ppvOut; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-41h] BYREF
  HSTRING string1; // [rsp+68h] [rbp-39h] BYREF
  IUnknown *punk; // [rsp+70h] [rbp-31h] BYREF
  __int64 v24; // [rsp+78h] [rbp-29h] BYREF
  int v25; // [rsp+80h] [rbp-21h]
  __int64 v26; // [rsp+88h] [rbp-19h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v27; // [rsp+90h] [rbp-11h] BYREF
  char v28; // [rsp+98h] [rbp-9h]
  __int64 v29; // [rsp+A0h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+1Fh] BYREF

  v29 = -2LL;
  v25 = 0;
  WindowsDeleteString(0LL);
  string1 = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs *, HSTRING *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &string1) >= 0 )
  {
    string = 0LL;
    v6 = WindowsCreateStringReference(L"BackVisible", 0xBu, &hstringHeader, &string);
    if ( v6 < 0 )
    {
      RaiseException(v6, 1u, 0, 0LL);
      JUMPOUT(0x1800BD2EELL);
    }
    if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
    {
      string = 0LL;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v16 = 0LL;
      v15 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)&v26, a2);
      *(_OWORD *)&hstringHeader.Reserved.Reserved1 = *(_OWORD *)v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&hstringHeader.Reserved.Reserved2[8]);
      hstringHeader.Reserved.Reserved2[16] = *((_BYTE *)v15 + 16);
      LODWORD(string) = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      LOBYTE(v15) = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                           this,
                           &hstringHeader,
                           &v16,
                           0LL) >= 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( (_BYTE)v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 208LL))(v16);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    }
    string = 0LL;
    v7 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      RaiseException(v7, 1u, 0, 0LL);
      goto LABEL_34;
    }
    if ( WindowsCompareStringOrdinal(string1, string, &result) >= 0 && !result )
    {
      string = 0LL;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v19 = 0LL;
      v26 = 0LL;
      v27 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      v28 = 0;
      hstringHeader.Reserved.Reserved1 = 0LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
      hstringHeader.Reserved.Reserved2[16] = 0;
      LODWORD(string) = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      v19 = 0LL;
      v18 = 0LL;
      v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByTaskWindow>(
             (int)this + 632,
             (unsigned int)&hstringHeader,
             (unsigned int)&v18,
             (unsigned int)&ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      if ( v8 >= 0 )
        v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut))(
               *(_QWORD *)(*((_QWORD *)this + 79) + 8LL * (_QWORD)ppvOut),
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&hstringHeader.Reserved.Reserved2[8]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v24 = 0LL;
      if ( v8 >= 0 )
      {
        v9 = v19;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        v8 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64, GUID *, __int64 *))(*v9)[44])(
               v9,
               2LL,
               &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
               &v24);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v8 < 0
        || !(*(unsigned __int8 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v24 + 48LL))(
              v24,
              a2) )
      {
        goto LABEL_27;
      }
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      (**v19)(v19, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v18);
      v16 = 0LL;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      if ( (*(int (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, v18, &v16) < 0 )
      {
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_27:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        goto LABEL_28;
      }
      v21 = 0;
      string = 0LL;
      v11 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v11 >= 0 )
      {
        if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, unsigned int *))(*(_QWORD *)a2 + 416LL))(
               a2,
               string,
               &v21) >= 0 )
        {
          v12 = v21;
          if ( v21 )
          {
            v13 = 0LL;
            if ( v21 == 1 )
              v13 = 64LL;
          }
          else
          {
            v13 = 32LL;
          }
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 464LL))(v16, 96LL, v13);
          ppvOut = 0LL;
          punk = 0LL;
          v25 = 8;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 6) + 32LL))(
            (char *)this + 48,
            &GUID_00000000_0000_0000_c000_000000000046,
            &punk);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
          v14 = IUnknown_QueryService(
                  punk,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_d452bf19_b505_4b1c_8182_1cc821a13092,
                  &ppvOut);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          if ( v14 >= 0 )
            (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v16, v12);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
        }
        goto LABEL_26;
      }
LABEL_34:
      RaiseException(v11, 1u, 0, 0LL);
      JUMPOUT(0x1800BD3C3LL);
    }
  }
LABEL_28:
  WindowsDeleteString(string1);
}
