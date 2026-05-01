/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18002E9B0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1800F9DE4 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18002D980 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180046A3C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180046FD0 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18004806C (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18004C274 (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1800E8E58 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA2A0 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct IUnknown *a3)
{
  int v5; // r12d
  int v6; // r13d
  int v7; // edi
  RTL_SRWLOCK *v8; // rcx
  char v9; // r15
  int First; // ebx
  __int64 v11; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveMonitor *v13; // rbx
  CallerIdentity *v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  struct IUnknown *v17; // [rsp+30h] [rbp-41h]
  struct IImmersiveApplicationInternal *v18; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-21h] BYREF
  HSTRING string; // [rsp+58h] [rbp-19h] BYREF
  struct IImmersiveMonitor *v21; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-9h] BYREF
  int v23; // [rsp+70h] [rbp-1h]
  __int64 v24; // [rsp+78h] [rbp+7h]
  unsigned __int64 v25; // [rsp+80h] [rbp+Fh] BYREF
  int v26; // [rsp+88h] [rbp+17h]
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v27; // [rsp+E0h] [rbp+6Fh] BYREF
  struct IUnknown *v28; // [rsp+E8h] [rbp+77h]
  int v29; // [rsp+F0h] [rbp+7Fh] BYREF

  v28 = a3;
  v24 = -2LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &string) >= 0 )
  {
    v5 = -1;
    v19 = -1LL;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned __int64 *))(*(_QWORD *)a2 + 632LL))(
      a2,
      &v19);
    v6 = 0;
    v29 = 0;
    v7 = 0;
    v8 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **))a2)(
        a2,
        &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
        &v21);
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, const WCHAR *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))(*(_QWORD *)v21 + 80LL))(
             v21,
             L"LastSetGlomIdForReconstitution",
             &v27) >= 0 )
        v7 = (int)v27;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      v8 = CApplicationManagerUtility::g_pIAMGlobals;
    }
    v18 = 0LL;
    v9 = 0;
    AcquireSRWLockExclusive(v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    if ( v7 )
    {
      v25 = v19;
      v26 = v7;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v25, &v18);
      LODWORD(v27) = First;
    }
    else
    {
      v21 = (struct IImmersiveMonitor *)v19;
      v18 = 0LL;
      v27 = 0LL;
      First = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                (int)this + 632,
                (unsigned int)&v21,
                (unsigned int)&v27,
                (unsigned int)&v22);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      if ( First >= 0 )
      {
        v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79)
                                                                                                  + 8 * v22);
        First = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18);
      }
      LODWORD(v27) = First;
    }
    if ( First >= 0 )
    {
      v9 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v18 + 408LL))(v18) == 0;
      v17 = v28;
      First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, v18, 1, 0LL);
      LODWORD(v27) = First;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First < 0 )
    {
      CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        (CAutoApplicationCreationResourceGuarantee *)&v25,
        (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v6 = v26;
      v29 = v26;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      v22 = v19;
      if ( v7 )
      {
        v23 = v7;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v22, &v18);
        LODWORD(v27) = First;
      }
      else
      {
        v18 = 0LL;
        v27 = 0LL;
        First = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                  (int)this + 632,
                  (unsigned int)&v22,
                  (unsigned int)&v27,
                  (unsigned int)&v21);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
        if ( First >= 0 )
        {
          v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79) + 8LL * (_QWORD)v21);
          First = (**v16)(v16, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18);
        }
        LODWORD(v27) = First;
      }
      if ( First >= 0 )
      {
        v5 = 1;
        v9 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v18 + 408LL))(v18) == 0;
      }
      else if ( First == -2147319765 )
      {
        v21 = 0LL;
        v11 = *((_QWORD *)this + 70);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        First = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v11 + 72LL))(
                  v11,
                  0LL,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &v21);
        LODWORD(v27) = First;
        if ( First >= 0 )
        {
          if ( !v7 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v7 = 1;
            if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                        (CApplicationManager *)((char *)this + 624),
                        StringRawBuffer,
                        &v27,
                        0LL) >= 0 )
            {
              v7 = *((_DWORD *)v27 + 8);
              *((_DWORD *)v27 + 8) = v7 + 1;
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
          v13 = v21;
          v14 = (CallerIdentity *)WindowsGetStringRawBuffer(string, 0LL);
          First = CApplicationManager::_CreateImmersiveApp(
                    this,
                    v14,
                    (unsigned __int16 **)v19,
                    v7,
                    v13,
                    (const struct _GUID *)v17,
                    (void **)&v18);
          LODWORD(v27) = First;
          if ( First >= 0 )
          {
            v5 = 0;
            v9 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      }
      if ( First >= 0 )
      {
        First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, v18, v5, 0LL);
        LODWORD(v27) = First;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 48LL))(v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      if ( First < 0 )
        goto LABEL_40;
    }
    if ( v9 )
    {
      First = CApplicationManager::HandleInitialPosition((CApplicationManager *)((char *)this + 240), v18, v28);
      LODWORD(v27) = First;
    }
    if ( First < 0 || v6 < 0 )
    {
LABEL_40:
      v22 = (unsigned __int64)WindowsGetStringRawBuffer(string, 0LL);
      CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        &v22,
        &v19,
        &v27,
        &v29);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  }
  if ( string )
    WindowsDeleteString(string);
}
