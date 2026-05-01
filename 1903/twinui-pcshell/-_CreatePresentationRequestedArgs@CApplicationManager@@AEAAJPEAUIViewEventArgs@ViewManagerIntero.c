/*
 * XREFs of ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x18007910C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180018E40 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010A874 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x18010BAE4 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18010CACC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010DBFC (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CApplicationManager::_CreatePresentationRequestedArgs(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a2,
        struct IPresentationRequestedArgs **a3)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v6; // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int (__fastcall *v10)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rdi
  CTaskWindowFinder *v11; // rbx
  int First; // ebx
  __int64 v13; // rcx
  int v14; // eax
  PVOID Ptr; // rdi
  __int64 (__fastcall *v16)(PVOID, __int64, int *); // rbx
  int v17; // eax
  _QWORD *v18; // rax
  struct IPresentationRequestedArgs *v19; // rbx
  __int64 v20; // rcx
  int v21[2]; // [rsp+20h] [rbp-98h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+28h] [rbp-90h] BYREF
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v24; // [rsp+38h] [rbp-80h] BYREF
  struct IPresentationRequestedArgs *v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h] BYREF
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  char v28; // [rsp+58h] [rbp-60h]
  int v29; // [rsp+60h] [rbp-58h]
  __int64 v30; // [rsp+68h] [rbp-50h]
  _BYTE v31[8]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v32[8]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *v34; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+20h] BYREF

  v30 = -2LL;
  try
  {
    *a3 = 0LL;
    v35 = 0LL;
    v34 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = **(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs ***)a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    LOBYTE(v6) = ((int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, GUID *, __int64 *))v6)(
                   a2,
                   &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684,
                   &v35) >= 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    if ( !(_BYTE)v6 )
      goto LABEL_7;
    v34 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs **))(*(_QWORD *)v35 + 48LL))(
           v35,
           &v34);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2187,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v7,
        v21[0]);
    }
    else
    {
      v6 = v34;
      if ( !v34 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        return 2147943568LL;
      }
    }
    v22 = 0LL;
    *(_QWORD *)v21 = 0LL;
    v10 = *(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v6 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    if ( v10(v6, &v22) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v36 = 0LL;
      v11 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v31, v22);
      v26 = *(_QWORD *)v11;
      v27 = *((_QWORD *)v11 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
      v28 = *((_BYTE *)v11 + 16);
      v29 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v26, &v36, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( First < 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        v13 = (__int64)v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        return (unsigned int)First;
      }
      v23 = 0LL;
      v14 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v36, &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2197,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v14,
          v21[0]);
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v16 = *(__int64 (__fastcall **)(PVOID, __int64, int *))(*(_QWORD *)Ptr + 56LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      v17 = v16(Ptr, v23, v21);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2198,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v17,
          v21[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    }
    v25 = 0LL;
    v23 = *(_QWORD *)v21;
    v24 = v34;
    v18 = (_QWORD *)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                      &v36,
                      &v24,
                      &v23);
    if ( *v18 )
      v19 = (struct IPresentationRequestedArgs *)(*v18 + 16LL);
    else
      v19 = 0LL;
    *v18 = 0LL;
    v25 = v19;
    if ( v36 )
    {
      v36 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release();
    }
    if ( v19 )
      (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)v19 + 8LL))(v19);
    *a3 = v19;
    if ( v19 )
      (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v20 = (__int64)v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v34) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x21A6,
                     (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                     v8);
    return (unsigned int)v34;
  }
  return result;
}
