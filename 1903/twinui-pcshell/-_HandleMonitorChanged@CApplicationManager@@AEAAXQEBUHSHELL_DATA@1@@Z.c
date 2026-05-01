/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180020ED0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18001FF50 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180026540 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18007D1BC (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18011C6D4 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18011CB8C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleMonitorChanged(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r14
  PSRWLOCK v5; // rbx
  PVOID Ptr; // rsi
  unsigned int v7; // r12d
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  HWND v12; // rbx
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rcx
  int v16; // ebx
  int (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v18; // rdi
  int (__fastcall *v19)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-79h]
  struct ISyncIAMEventHandler *v24; // [rsp+40h] [rbp-59h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h] BYREF
  struct ISyncIAMEventHandler *v26; // [rsp+50h] [rbp-49h] BYREF
  struct IObjectArray *v27; // [rsp+58h] [rbp-41h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+60h] [rbp-39h] BYREF
  __int64 v29; // [rsp+68h] [rbp-31h] BYREF
  _DWORD v30[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v31; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v33; // [rsp+90h] [rbp-9h] BYREF
  int v34; // [rsp+98h] [rbp-1h]
  __int64 v35; // [rsp+A0h] [rbp+7h]
  __int64 v36; // [rsp+A8h] [rbp+Fh]
  __int64 v37; // [rsp+B0h] [rbp+17h]
  __int64 v38; // [rsp+108h] [rbp+6Fh] BYREF
  struct IImmersiveMonitor *v39; // [rsp+110h] [rbp+77h] BYREF
  struct IObjectArray *v40; // [rsp+118h] [rbp+7Fh] BYREF

  v35 = -2LL;
  v4 = *((_QWORD *)a2 + 1);
  v36 = v4;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    v32[0] = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v32[1] = v4;
    v7 = (unsigned int)v5[15].Ptr;
    v8 = 0LL;
    v37 = 0LL;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 3) = 1;
      *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v10[2] = 0LL;
      if ( v10 + 2 != v32 )
      {
        v10[2] = Ptr;
        Ptr = 0LL;
      }
      v10[3] = v4;
      *v10 = off_180426668;
      v8 = v10;
    }
    SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v8, 0LL);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v11 = *((_DWORD *)a2 + 4);
  if ( v11 == 1 )
  {
    v12 = (HWND)*((_QWORD *)a2 + 5);
    if ( !v12 )
      v12 = (HWND)*((_QWORD *)a2 + 1);
    v13 = *((_QWORD *)a2 + 1);
    v38 = 0LL;
    if ( GetShellWindow() != v12
      && !(unsigned int)GetPropW(v12, L"MultimonitorActivationException")
      && (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 94) + 24LL))(*((_QWORD *)this + 94)) != v12 )
    {
      (*(void (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 70) + 88LL))(
        *((_QWORD *)this + 70),
        v12,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
        &v38);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 67) + 32LL))(
            *((_QWORD *)this + 67),
            v13,
            v38);
    v15 = v38;
    if ( v14 && v38 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, v13, 2LL, v38);
      v15 = v38;
    }
    if ( v15 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else if ( v11 == 2 )
  {
    if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
    {
      v33 = *((_QWORD *)a2 + 1);
      v34 = 2;
      v25 = 0LL;
      v29 = 0LL;
      v16 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByHwnd>(
              (int)this + 632,
              (unsigned int)&v33,
              (unsigned int)&v29,
              (unsigned int)&v31,
              v23);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
      if ( v16 >= 0 )
      {
        v17 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v31);
        if ( (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v25) >= 0 )
        {
          v39 = 0LL;
          v18 = *((_QWORD *)this + 70);
          v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v18 + 88LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
          if ( v19(
                 v18,
                 *((_QWORD *)a2 + 1),
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v39) >= 0 )
          {
            v30[0] = *((_DWORD *)this + 240);
            v30[1] = 0;
            (*(void (__fastcall **)(__int64, struct IImmersiveMonitor *, _DWORD *, __int64))(*(_QWORD *)v25 + 456LL))(
              v25,
              v39,
              v30,
              4LL);
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 416LL))(v25) )
            {
              v24 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
              if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v24) >= 0 )
              {
                v40 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
                if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v39, &v40) >= 0 )
                  (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v24 + 24LL))(
                    v24,
                    v40,
                    (char *)this + 248,
                    0LL,
                    *((_DWORD *)a2 + 6),
                    2,
                    0xFFFF);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v40);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    }
  }
  else if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
  {
    v28 = 0LL;
    v20 = *((_QWORD *)this + 70);
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v20 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    v22 = v21(
            v20,
            *((_QWORD *)a2 + 1),
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &v28);
    if ( v22 >= 0 )
    {
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(this, v28, &v27) >= 0 )
      {
        v26 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(this, &v26) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v26 + 24LL))(
            v26,
            v27,
            (char *)this + 248,
            0LL,
            *((_DWORD *)a2 + 6),
            2,
            0xFFFF);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  }
}
