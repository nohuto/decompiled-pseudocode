/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001198C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18003FCD0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x18013EDAC (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18000DB2C (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E9C4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180011620 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180011CE8 (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18003FB00 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180040624 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18012A4F4 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18012BC64 (--$_FindFirstApplication@VCImmersiveAppFinderByHostIdAndGlomId@@@CApplicationManager@@AEAAJAEBVC.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CApplicationManager::_HandleViewCreation(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **),
        struct IUnknown *a3)
{
  int (__fastcall *v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *); // rbx
  int v6; // r13d
  int v7; // edi
  int v8; // r14d
  RTL_SRWLOCK *v9; // rcx
  char v10; // r12
  int First; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  struct IImmersiveMonitor *v15; // rbx
  CallerIdentity *v16; // rax
  PSRWLOCK v17; // rax
  void (__fastcall *v18)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **); // rbx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct IImmersiveApplicationInternal **); // rcx
  struct IUnknown *v21; // [rsp+30h] [rbp-41h]
  struct IImmersiveApplicationInternal *v22; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  HSTRING string; // [rsp+58h] [rbp-19h] BYREF
  struct IImmersiveMonitor *v25; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-9h] BYREF
  int v27; // [rsp+70h] [rbp-1h]
  __int64 v28; // [rsp+78h] [rbp+7h]
  unsigned __int64 v29; // [rsp+80h] [rbp+Fh] BYREF
  int v30; // [rsp+88h] [rbp+17h]
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v31; // [rsp+E0h] [rbp+6Fh] BYREF
  struct IUnknown *v32; // [rsp+E8h] [rbp+77h]
  int v33; // [rsp+F0h] [rbp+7Fh] BYREF

  v32 = a3;
  v28 = -2LL;
  string = 0LL;
  v5 = (int (__fastcall *)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*a2)[7];
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( v5((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2, &string) >= 0 )
  {
    v6 = -1;
    v23 = -1LL;
    ((void (__fastcall *)(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **), unsigned __int64 *))(*a2)[79])(
      a2,
      &v23);
    v7 = 0;
    v33 = 0;
    v8 = 0;
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      v25 = 0LL;
      v18 = **a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      v18(
        (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
        &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
        &v25);
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, const WCHAR *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))(*(_QWORD *)v25 + 80LL))(
             v25,
             L"LastSetGlomIdForReconstitution",
             &v31) >= 0 )
        v8 = (int)v31;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      v9 = CApplicationManagerUtility::g_pIAMGlobals;
    }
    v22 = 0LL;
    v10 = 0;
    AcquireSRWLockExclusive(v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    if ( v8 )
    {
      v29 = v23;
      v30 = v8;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v29, &v22);
      LODWORD(v31) = First;
    }
    else
    {
      v25 = (struct IImmersiveMonitor *)v23;
      v22 = 0LL;
      v31 = 0LL;
      First = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                (int)this + 632,
                (unsigned int)&v25,
                (unsigned int)&v31,
                (unsigned int)&v26);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
      if ( First >= 0 )
      {
        v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79)
                                                                                                  + 8 * v26);
        First = (**v19)(v19, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22);
      }
      LODWORD(v31) = First;
    }
    if ( First >= 0 )
    {
      v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v22 + 408LL))(v22) == 0;
      v21 = v32;
      First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, v22, 1, 0LL);
      LODWORD(v31) = First;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( First < 0 )
    {
      CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        (CAutoApplicationCreationResourceGuarantee *)&v29,
        (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
      v7 = v30;
      v33 = v30;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
      v26 = v23;
      if ( v8 )
      {
        v27 = v8;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostIdAndGlomId>(this, &v26, &v22);
        LODWORD(v31) = First;
      }
      else
      {
        v22 = 0LL;
        v31 = 0LL;
        First = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHostId>(
                  (int)this + 632,
                  (unsigned int)&v26,
                  (unsigned int)&v31,
                  (unsigned int)&v25);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
        if ( First >= 0 )
        {
          v20 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplicationInternal **))(*((_QWORD *)this + 79) + 8LL * (_QWORD)v25);
          First = (**v20)(v20, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22);
        }
        LODWORD(v31) = First;
      }
      if ( First >= 0 )
      {
        v6 = 1;
        v10 = (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v22 + 408LL))(v22) == 0;
      }
      else if ( First == -2147319765 )
      {
        v25 = 0LL;
        v12 = *((_QWORD *)this + 70);
        v13 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 72LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
        First = v13(
                  v12,
                  0LL,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &v25);
        LODWORD(v31) = First;
        if ( First >= 0 )
        {
          if ( !v8 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v8 = 1;
            if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                        (CApplicationManager *)((char *)this + 624),
                        StringRawBuffer,
                        &v31,
                        0LL) >= 0 )
            {
              v8 = *((_DWORD *)v31 + 8);
              *((_DWORD *)v31 + 8) = v8 + 1;
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
          v15 = v25;
          v16 = (CallerIdentity *)WindowsGetStringRawBuffer(string, 0LL);
          First = CApplicationManager::_CreateImmersiveApp(
                    this,
                    v16,
                    (unsigned __int16 **)v23,
                    v8,
                    v15,
                    (const struct _GUID *)v21,
                    (void **)&v22);
          LODWORD(v31) = First;
          if ( First >= 0 )
          {
            v6 = 0;
            v17 = CApplicationManagerUtility::g_pIAMGlobals;
            if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
            {
              CApplicationManager::UpdateMonitorForAppAsync(this, v22);
              v17 = CApplicationManagerUtility::g_pIAMGlobals;
            }
            v10 = BYTE4(v17[13].Ptr);
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
        v7 = v33;
      }
      if ( First >= 0 )
      {
        First = CApplicationManager::_AddViewToGlom((__int64)this, (__int64)a2, v22, v6, 0LL);
        LODWORD(v31) = First;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v29 + 48LL))(v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      if ( First < 0 )
        goto LABEL_42;
    }
    if ( v10 )
    {
      First = CApplicationManager::HandleInitialPosition(
                (CApplicationManager *)((char *)this + 240),
                v22,
                v32,
                0LL,
                0LL);
      LODWORD(v31) = First;
    }
    if ( First < 0 || v7 < 0 )
    {
LABEL_42:
      v26 = (unsigned __int64)WindowsGetStringRawBuffer(string, 0LL);
      CAppManagerTelemetry::HandleViewCreationFailure<unsigned short const *,unsigned __int64 &,long &,long &>(
        &v26,
        &v23,
        &v31,
        &v33);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  }
  if ( string )
    WindowsDeleteString(string);
}
