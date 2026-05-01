/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1800634A0
 * Callers:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x180063480 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180063664 (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x18013AA3C (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18013B65C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  HWND v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  HWND LastActivePopup; // rbx
  HWND v11; // rsi
  struct IImmersiveApplication *v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  HWND v16; // [rsp+98h] [rbp+48h] BYREF

  v14[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 720) == 2 )
  {
    v7 = 0LL;
    v15 = 0LL;
    v13 = a3;
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = v15;
    }
    if ( v7 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v15 = 0LL;
    v16 = 0LL;
    v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByApplication>(
           (int)a1 + 392,
           (unsigned int)&v13,
           (unsigned int)&v16,
           (unsigned int)v14);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    if ( v8 >= 0 )
      v8 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 392) + 8LL * v14[0]))(
             *(_QWORD *)(*(_QWORD *)(a1 + 392) + 8LL * v14[0]),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v8 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND *))(*(_QWORD *)v15 + 312LL))(v15, a2, &v16);
      v8 = v9;
      if ( v9 == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(a1 - 240, v15, 1LL);
      }
      else if ( v9 >= 0 )
      {
        v6 = v16;
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  else
  {
    v8 = -2147024891;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v8 >= 0 )
  {
    LastActivePopup = GetLastActivePopup(v6);
    v11 = v6;
    if ( IsWindowVisible(LastActivePopup) )
      v11 = LastActivePopup;
    if ( SetForegroundWindow(v11) )
    {
      v8 = 0;
      if ( IsIconic(v6) )
        SwitchToThisWindow(v6, 1);
      if ( !(unsigned int)IsShellFrameWindow(v11) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking((CApplicationManager *)(a1 - 240), v11, a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        v11,
        3LL);
    }
    else
    {
      return (unsigned int)-2147024891;
    }
  }
  return (unsigned int)v8;
}
