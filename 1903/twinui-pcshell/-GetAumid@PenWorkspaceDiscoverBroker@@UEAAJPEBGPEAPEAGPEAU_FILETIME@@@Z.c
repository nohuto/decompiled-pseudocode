/*
 * XREFs of ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1801DBCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1800A2560 (--1CopyableHString@ExperienceManagerUtils@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801DA39C (--$GetActivationFactory@V-$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1801DA918 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1801DAA70 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x1801DC38C (-GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInterna.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180407458 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspaceDiscoverBroker::GetAumid(
        PenWorkspaceDiscoverBroker *this,
        char *a2,
        unsigned __int16 **a3,
        struct _FILETIME *a4)
{
  int IsShellExperience; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64, __int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v12; // eax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rdx
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v17)(_QWORD, GUID *, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v21; // eax
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, __int64, __int64 *); // rdi
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64 *); // rdi
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // esi
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **); // rdi
  int v35; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v36; // rbx
  __int64 (__fastcall *v37)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *); // rdi
  int v38; // eax
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, HSTRING *); // rdi
  int v41; // eax
  PCWSTR StringRawBuffer; // rax
  char *v43; // r8
  int v44; // edx
  int v45; // ecx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v46; // rbx
  __int64 (__fastcall *v47)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v48; // eax
  int (__fastcall ***v49)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v50)(_QWORD, GUID *, __int64 *); // rdi
  int InstallTime; // eax
  __int64 v53; // rbx
  __int64 (__fastcall *v54)(__int64, HSTRING *); // rdi
  int v55; // eax
  PCWSTR v56; // rax
  int v57; // eax
  unsigned __int16 *Reserved1; // rax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v59; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v60; // [rsp+40h] [rbp-71h] BYREF
  __int64 v61; // [rsp+48h] [rbp-69h] BYREF
  int (__fastcall ***v62)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-61h] BYREF
  HSTRING string; // [rsp+58h] [rbp-59h] BYREF
  __int64 v64; // [rsp+60h] [rbp-51h] BYREF
  __int64 v65; // [rsp+68h] [rbp-49h] BYREF
  __int64 v66; // [rsp+70h] [rbp-41h] BYREF
  int (__fastcall ***v67)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-39h] BYREF
  HSTRING v68; // [rsp+80h] [rbp-31h] BYREF
  __int64 v69; // [rsp+88h] [rbp-29h] BYREF
  int (__fastcall ***v70)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-21h] BYREF
  __int64 v71[2]; // [rsp+98h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v73; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v71[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v8 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v71[0] = 0LL;
    v73 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager",
      0x35u,
      0x34u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>>(
           v73,
           v71);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v9);
LABEL_44:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(v71);
      return v8;
    }
    v67 = 0LL;
    v10 = v71[0];
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v71[0] + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v67);
    v12 = v11(v10, 33LL, 3LL, &v67);
    v8 = v12;
    if ( v12 < 0 )
    {
      v15 = 68LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v12);
LABEL_43:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v67);
      goto LABEL_44;
    }
    v12 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>>(
            v67,
            v13,
            v14);
    v8 = v12;
    if ( v12 < 0 )
    {
      v15 = 70LL;
      goto LABEL_9;
    }
    v66 = 0LL;
    v16 = v67;
    v17 = (*v67)[8];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v66);
    v18 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))v17)(v16, &v66);
    v8 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v18);
LABEL_42:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v66);
      goto LABEL_43;
    }
    v70 = 0LL;
    v19 = v66;
    v20 = *(__int64 (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v66 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    v21 = v20(v19, &v70);
    v8 = v21;
    if ( v21 < 0 )
    {
      v24 = 76LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v21);
LABEL_41:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v70);
      goto LABEL_42;
    }
    v21 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
            v70,
            v22,
            v23);
    v8 = v21;
    if ( v21 < 0 )
    {
      v24 = 77LL;
      goto LABEL_16;
    }
    v69 = 0LL;
    v25 = v66;
    v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v66 + 56LL);
    v73 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AllApps", 8u, 7u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v69);
    v27 = v26(v25, 1LL, v73, &v69);
    v8 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v27);
LABEL_40:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v69);
      goto LABEL_41;
    }
    v65 = 0LL;
    v28 = v69;
    v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v69 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v65);
    v30 = v29(v28, &v65);
    v8 = v30;
    if ( v30 >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v65 + 56LL))(v65, &v60);
      v8 = v30;
      if ( v30 >= 0 )
      {
        v32 = 0;
        if ( v60 )
        {
          while ( 1 )
          {
            v59 = 0LL;
            v33 = v65;
            v34 = *(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v65 + 48LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
            v35 = v34(v33, v32, &v59);
            v8 = v35;
            if ( v35 < 0 )
              break;
            v64 = 0LL;
            v36 = v59;
            v37 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)v59 + 104LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v64);
            v38 = v37(v36, &v64);
            v8 = v38;
            if ( v38 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5E,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                (const char *)(unsigned int)v38);
              goto LABEL_61;
            }
            v39 = v64;
            if ( v64 )
            {
              string = 0LL;
              v40 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v64 + 48LL);
              WindowsDeleteString(0LL);
              string = 0LL;
              v41 = v40(v39, &string);
              v8 = v41;
              if ( v41 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x63,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                  (const char *)(unsigned int)v41);
                goto LABEL_59;
              }
              StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
              v43 = (char *)(a2 - (char *)StringRawBuffer);
              do
              {
                v44 = *(unsigned __int16 *)&v43[(_QWORD)StringRawBuffer];
                v45 = *StringRawBuffer - v44;
                if ( v45 )
                  break;
                ++StringRawBuffer;
              }
              while ( v44 );
              if ( !v45 )
              {
                v62 = 0LL;
                v46 = v59;
                v47 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v59 + 48LL);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v62);
                v48 = v47(v46, &v62);
                v8 = v48;
                if ( v48 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x68,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                    (const char *)(unsigned int)v48);
                  goto LABEL_57;
                }
                v61 = 0LL;
                v49 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v62;
                v50 = **v62;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v61);
                if ( v50(v49, &GUID_a7668288_cc23_4b67_be8b_6c10455986b8, &v61) >= 0 )
                {
                  InstallTime = PenWorkspaceDiscoverBroker::GetInstallTime(v59, a4);
                  v8 = InstallTime;
                  if ( InstallTime >= 0 )
                  {
                    v68 = 0LL;
                    v53 = v61;
                    v54 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v61 + 48LL);
                    WindowsDeleteString(0LL);
                    v68 = 0LL;
                    v55 = v54(v53, &v68);
                    v8 = v55;
                    if ( v55 >= 0 )
                    {
                      memset(&hstringHeader, 0, sizeof(hstringHeader));
                      v56 = WindowsGetStringRawBuffer(v68, 0LL);
                      v57 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                              &hstringHeader.Reserved.Reserved1,
                              (__int64)v56,
                              0xFFFFFFFFFFFFFFFFuLL);
                      v8 = v57;
                      if ( v57 >= 0 )
                      {
                        Reserved1 = (unsigned __int16 *)hstringHeader.Reserved.Reserved1;
                        memset(&hstringHeader, 0, sizeof(hstringHeader));
                        *a3 = Reserved1;
                        v8 = 0;
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x73,
                          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                          (const char *)(unsigned int)v57);
                      }
                      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x70,
                        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                        (const char *)(unsigned int)v55);
                    }
                    ExperienceManagerUtils::CopyableHString::~CopyableHString(&v68);
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x6D,
                      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                      (const char *)(unsigned int)InstallTime);
                  }
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v61);
LABEL_57:
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v62);
LABEL_59:
                  ExperienceManagerUtils::CopyableHString::~CopyableHString(&string);
LABEL_61:
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v64);
                  goto LABEL_63;
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v61);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v62);
              }
              ExperienceManagerUtils::CopyableHString::~CopyableHString(&string);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v64);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v59);
            if ( ++v32 >= v60 )
              goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5B,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
            (const char *)(unsigned int)v35);
LABEL_63:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v59);
        }
        else
        {
LABEL_38:
          v8 = -2147023728;
        }
        goto LABEL_39;
      }
      v31 = 86LL;
    }
    else
    {
      v31 = 83LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v30);
LABEL_39:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v65);
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)IsShellExperience);
  return v8;
}
