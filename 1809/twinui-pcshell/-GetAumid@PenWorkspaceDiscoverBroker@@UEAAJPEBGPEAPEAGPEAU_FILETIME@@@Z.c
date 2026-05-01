/*
 * XREFs of ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x180195230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18004D1A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18019388C (--$GetActivationFactory@V-$ComPtr@UIUnifiedTileManagerStatics@UnifiedTile@Shell@WindowsInternal@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180193E08 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180193F5C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x1801958E8 (-GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInterna.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1803A1720 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
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
  int v11; // eax
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // edi
  __int64 v28; // rbx
  int v29; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v30; // rbx
  int v31; // eax
  __int64 v32; // rbx
  int v33; // eax
  PCWSTR StringRawBuffer; // rax
  char *v35; // r8
  int v36; // edx
  int v37; // ecx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v38; // rbx
  int v39; // eax
  int InstallTime; // eax
  __int64 v42; // rbx
  int v43; // eax
  PCWSTR v44; // rax
  int v45; // eax
  unsigned __int16 *Reserved1; // rax
  HSTRING string; // [rsp+38h] [rbp-69h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v48; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v50; // [rsp+50h] [rbp-51h] BYREF
  __int64 v51; // [rsp+58h] [rbp-49h] BYREF
  int (__fastcall ***v52)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-41h] BYREF
  __int64 v53; // [rsp+68h] [rbp-39h] BYREF
  __int64 v54; // [rsp+70h] [rbp-31h] BYREF
  __int64 v55; // [rsp+78h] [rbp-29h] BYREF
  __int64 v56; // [rsp+80h] [rbp-21h] BYREF
  __int64 v57; // [rsp+88h] [rbp-19h] BYREF
  __int64 v58; // [rsp+90h] [rbp-11h] BYREF
  __int64 v59[2]; // [rsp+98h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v61; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v59[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v8 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v59[0] = 0LL;
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager",
      0x35u,
      0x34u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManagerStatics>>(
           v61,
           v59);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v9);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v59);
      return v8;
    }
    v56 = 0LL;
    v10 = v59[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v10 + 48LL))(
            v10,
            33LL,
            3LL,
            &v56);
    v8 = v11;
    if ( v11 < 0 )
    {
      v14 = 68LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v11);
LABEL_43:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
      goto LABEL_44;
    }
    v11 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>>(
            v56,
            v12,
            v13);
    v8 = v11;
    if ( v11 < 0 )
    {
      v14 = 70LL;
      goto LABEL_9;
    }
    v55 = 0LL;
    v15 = v56;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 64LL))(v15, &v55);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v16);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v55);
      goto LABEL_43;
    }
    v58 = 0LL;
    v17 = v55;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, &v58);
    v8 = v18;
    if ( v18 < 0 )
    {
      v21 = 76LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v18);
LABEL_41:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v58);
      goto LABEL_42;
    }
    v18 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
            v58,
            v19,
            v20);
    v8 = v18;
    if ( v18 < 0 )
    {
      v21 = 77LL;
      goto LABEL_16;
    }
    v57 = 0LL;
    v22 = v55;
    v61 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AllApps", 8u, 7u);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v22 + 56LL))(v22, 1LL, v61, &v57);
    v8 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v23);
LABEL_40:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v57);
      goto LABEL_41;
    }
    v54 = 0LL;
    v24 = v57;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v54);
    v8 = v25;
    if ( v25 >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v54 + 56LL))(v54, &v49);
      v8 = v25;
      if ( v25 >= 0 )
      {
        v27 = 0;
        if ( v49 )
        {
          while ( 1 )
          {
            v48 = 0LL;
            v28 = v54;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
            v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v28 + 48LL))(
                    v28,
                    v27,
                    &v48);
            v8 = v29;
            if ( v29 < 0 )
              break;
            v53 = 0LL;
            v30 = v48;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
            v31 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)v30 + 104LL))(
                    v30,
                    &v53);
            v8 = v31;
            if ( v31 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x5E,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                (const char *)(unsigned int)v31);
              goto LABEL_61;
            }
            v32 = v53;
            if ( v53 )
            {
              string = 0LL;
              WindowsDeleteString(0LL);
              string = 0LL;
              v33 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 48LL))(v32, &string);
              v8 = v33;
              if ( v33 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x63,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                  (const char *)(unsigned int)v33);
                goto LABEL_59;
              }
              StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
              v35 = (char *)(a2 - (char *)StringRawBuffer);
              do
              {
                v36 = *(unsigned __int16 *)&v35[(_QWORD)StringRawBuffer];
                v37 = *StringRawBuffer - v36;
                if ( v37 )
                  break;
                ++StringRawBuffer;
              }
              while ( v36 );
              if ( !v37 )
              {
                v52 = 0LL;
                v38 = v48;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
                v39 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v38 + 48LL))(
                        v38,
                        &v52);
                v8 = v39;
                if ( v39 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x68,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                    (const char *)(unsigned int)v39);
                  goto LABEL_57;
                }
                v51 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
                if ( (**v52)(v52, &GUID_a7668288_cc23_4b67_be8b_6c10455986b8, &v51) >= 0 )
                {
                  InstallTime = PenWorkspaceDiscoverBroker::GetInstallTime(v48, a4);
                  v8 = InstallTime;
                  if ( InstallTime >= 0 )
                  {
                    v50 = 0LL;
                    v42 = v51;
                    WindowsDeleteString(0LL);
                    v50 = 0LL;
                    v43 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42 + 48LL))(v42, &v50);
                    v8 = v43;
                    if ( v43 >= 0 )
                    {
                      memset(&hstringHeader, 0, sizeof(hstringHeader));
                      v44 = WindowsGetStringRawBuffer(v50, 0LL);
                      v45 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                              &hstringHeader.Reserved.Reserved1,
                              (__int64)v44,
                              0xFFFFFFFFFFFFFFFFuLL);
                      v8 = v45;
                      if ( v45 >= 0 )
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
                          (const char *)(unsigned int)v45);
                      }
                      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x70,
                        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                        (const char *)(unsigned int)v43);
                    }
                    WindowsDeleteString(v50);
                    v50 = 0LL;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x6D,
                      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                      (const char *)(unsigned int)InstallTime);
                  }
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
LABEL_57:
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
LABEL_59:
                  WindowsDeleteString(string);
                  string = 0LL;
LABEL_61:
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
                  goto LABEL_63;
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v51);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
              }
              WindowsDeleteString(string);
              string = 0LL;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v53);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
            if ( ++v27 >= v49 )
              goto LABEL_38;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5B,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
            (const char *)(unsigned int)v29);
LABEL_63:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
        }
        else
        {
LABEL_38:
          v8 = -2147023728;
        }
        goto LABEL_39;
      }
      v26 = 86LL;
    }
    else
    {
      v26 = 83LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v25);
LABEL_39:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v54);
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)IsShellExperience);
  return v8;
}
