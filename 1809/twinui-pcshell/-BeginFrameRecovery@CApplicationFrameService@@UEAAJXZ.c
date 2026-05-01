/*
 * XREFs of ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180114420
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800498F8 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800770B4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x180113798 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_180113798.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x180113990 (Windows--Internal--ComTaskPool--QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1801152D8 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x180115330 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1803A3408 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1803A347C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::BeginFrameRecovery(CApplicationFrameService *this)
{
  int v2; // edi
  CCriticalFailureHandler *v3; // rcx
  struct IApplicationFrameManager *v4; // rbx
  CCriticalFailureHandler *v5; // rcx
  CCriticalFailureHandler *v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rdi
  unsigned __int16 **v9; // r8
  int ImmersiveAppIdFromWindow; // edi
  void *v11; // r8
  __int64 v12; // rdx
  CApplicationFrameWrapper **v13; // rdx
  CApplicationFrameWrapper *v14; // rcx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  HWND v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 *v22; // [rsp+20h] [rbp-59h]
  unsigned __int64 *v23; // [rsp+28h] [rbp-51h]
  CApplicationFrameWrapper *v24; // [rsp+30h] [rbp-49h] BYREF
  struct IApplicationFrame *v25; // [rsp+38h] [rbp-41h] BYREF
  struct IApplicationFrameManager *v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-29h] BYREF
  struct HWND__ v29[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v30; // [rsp+60h] [rbp-19h]
  __int64 v31; // [rsp+68h] [rbp-11h]
  struct IApplicationFrame *v32; // [rsp+70h] [rbp-9h] BYREF
  struct IApplicationFrameManager *v33; // [rsp+78h] [rbp-1h] BYREF
  __int64 v34; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v35[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v36; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v37; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int PropW; // [rsp+F8h] [rbp+7Fh] BYREF

  v35[1] = -2LL;
  v2 = 0;
  if ( FindWindowW(L"ApplicationFrameWindow", 0LL) )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    v2 = CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 0, &v26);
    v36 = v2;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, &v36);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v2 = v36;
    }
    if ( v2 >= 0 )
      goto LABEL_9;
    if ( v2 != -2147024882 && v2 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        &v36,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x252u,
        v22,
        v23);
      v2 = v36;
    }
    if ( v2 >= 0 )
    {
LABEL_9:
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v4 = v26;
      v2 = (*(__int64 (__fastcall **)(struct IApplicationFrameManager *, __int64 *))(*(_QWORD *)v26 + 40LL))(v26, &v27);
      v36 = v2;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v5, &v36);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v2 = v36;
      }
      if ( v2 >= 0 )
        goto LABEL_56;
      if ( v2 != -2147024882 && v2 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v5,
          &v36,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x262u,
          v22,
          v23);
        v2 = v36;
      }
      if ( v2 >= 0 )
      {
LABEL_56:
        v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 24LL))(v27, &v37);
        v36 = v2;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v6, &v36);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v2 = v36;
        }
        if ( v2 >= 0 )
          goto LABEL_57;
        if ( v2 != -2147024882 && v2 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v6,
            &v36,
            L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
            0x266u,
            v22,
            v23);
          v2 = v36;
        }
        if ( v2 >= 0 )
        {
LABEL_57:
          v7 = 0;
          if ( v37 )
          {
            do
            {
              v25 = 0LL;
              v8 = v27;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
              if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationFrame **))(*(_QWORD *)v8 + 32LL))(
                     v8,
                     v7,
                     &GUID_143715d9_a015_40ea_b695_d5cc267e36ee,
                     &v25) >= 0 )
              {
                if ( (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &hWnd) < 0 )
                  goto LABEL_47;
                *(_QWORD *)&v29[0].unused = 0LL;
                v30 = 0LL;
                v31 = 0LL;
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
                v30 = -1LL;
                v31 = -1LL;
                ImmersiveAppIdFromWindow = CallerIdentity::GetImmersiveAppIdFromWindow(
                                             (CallerIdentity *)hWnd,
                                             (unsigned int **)v29,
                                             v9);
                if ( ImmersiveAppIdFromWindow >= 0 )
                {
                  PropW = (unsigned int)GetPropW(hWnd, L"LastSetGlomIdForReconstitution");
                  v24 = 0LL;
                  v32 = v25;
                  v33 = v4;
                  v34 = (__int64)this - 40;
                  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v24);
                  ImmersiveAppIdFromWindow = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
                                               (volatile signed __int64 **)&v24,
                                               &v34,
                                               &v33,
                                               &v32,
                                               (const unsigned __int16 **)v29,
                                               &PropW);
                  if ( ImmersiveAppIdFromWindow >= 0 )
                  {
                    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                    if ( CApplicationFrameWrapper::IsManagedBy(v24, *((struct IApplicationFrameManager **)this + 17)) )
                    {
                      ImmersiveAppIdFromWindow = 0;
                      v12 = *((_QWORD *)this + 9);
                      if ( v12 != *((_QWORD *)this + 11)
                        || (ImmersiveAppIdFromWindow = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                                                         (__int64)this + 64,
                                                         v12 + 1,
                                                         v11),
                            ImmersiveAppIdFromWindow >= 0) )
                      {
                        v13 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
                        if ( v13 )
                        {
                          *v13 = v24;
                          v14 = v24;
                          if ( v24 )
                          {
                            v15 = *((_QWORD *)v24 + 9);
                            while ( v15 >= 0 )
                            {
                              if ( (_DWORD)v15 != 0x7FFFFFFF )
                              {
                                v16 = v15;
                                v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 9, v15 + 1, v15);
                                if ( v16 != v15 )
                                  continue;
                              }
                              goto LABEL_40;
                            }
                            Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
                              (Microsoft::WRL::Details *)(2 * v15 + 16),
                              (volatile int *)((unsigned __int64)v15 >> 63));
LABEL_40:
                            v4 = v26;
                          }
                        }
                      }
                    }
                    else
                    {
                      ImmersiveAppIdFromWindow = -2147024809;
                    }
                    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                  }
                  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v24);
                  if ( ImmersiveAppIdFromWindow >= 0 )
                  {
                    v17 = (HWND)GetPropW(hWnd, L"ModalExperienceWindowProp");
                    if ( v17 )
                    {
                      if ( !IsWindow(v17) )
                      {
                        v35[0] = hWnd;
                        Windows::Internal::ComTaskPool::QueueTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(
                          v19,
                          v18,
                          v20,
                          v35);
                      }
                    }
                  }
                }
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
                if ( ImmersiveAppIdFromWindow < 0 )
LABEL_47:
                  (*(void (__fastcall **)(struct IApplicationFrameManager *, struct IApplicationFrame *))(*(_QWORD *)v4 + 32LL))(
                    v4,
                    v25);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
              ++v7;
            }
            while ( v7 < v37 );
            v2 = v36;
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( v2 >= 0 )
        *((_BYTE *)this + 184) = 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  }
  return (unsigned int)v2;
}
