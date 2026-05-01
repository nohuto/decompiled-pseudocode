/*
 * XREFs of ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004EA2C
 * Callers:
 *     ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18004E980 (-GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMoni.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x18004E3B0 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18004EB5C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004EBAC (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CAppViewManager::_GetViewForSwitchInternalByHostId(CAppViewManager *a1, int a2, unsigned __int64 a3, ...)
{
  struct IUnknown *v6; // r13
  __int64 v7; // rbx
  struct IImmersiveMonitor *v8; // r8
  int MostRecentlyUsedViewForAppInstance; // r14d
  RTL_SRWLOCK *v10; // rdi
  __int64 v11; // rsi
  struct IUnknown *v12; // rax
  HWND v14; // rsi
  struct IUnknown *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF
  va_list va; // [rsp+A8h] [rbp+48h]
  struct IUnknown *v20; // [rsp+B0h] [rbp+50h] BYREF
  va_list va1; // [rsp+B0h] [rbp+50h]
  va_list va2; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, struct IUnknown *);
  v17[1] = -2LL;
  v6 = v20;
  v20->lpVtbl = 0LL;
  v7 = 0LL;
  v17[0] = 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((struct IUnknown **)va1);
  MostRecentlyUsedViewForAppInstance = CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
                                         a1,
                                         a3,
                                         v8,
                                         (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForAppInstance < 0 || a2 != 1 )
    goto LABEL_8;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  v17[2] = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  v11 = *((_QWORD *)a1 + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  if ( (*(int (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, a3, &v16) >= 0
    && *(_BYTE *)(v16 + 32) )
  {
    v14 = *(HWND *)(v16 + 24);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( (int)CAppViewManager::_GetGlomForWindow(a1, v14, (struct IImmersiveApplicationInternal **)&v15, (bool *)va) >= 0 )
    {
      if ( (_BYTE)v18 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::operator=(v17, &v15);
        v7 = v17[0];
      }
      else
      {
        if ( !(unsigned int)SHIsSameObject(v20, v15) )
          (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                             + 96LL))(
            *((_QWORD *)a1 + 15),
            v14,
            v15,
            v20,
            0LL);
        ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v20->lpVtbl[4].Release)(v20, v14, 2LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( !v7 )
LABEL_8:
    Microsoft::WRL::ComPtr<IUnknown>::operator=(v17, (struct IUnknown **)va1);
  if ( MostRecentlyUsedViewForAppInstance >= 0 )
  {
    v12 = v20;
    v20 = 0LL;
    v6->lpVtbl = (struct IUnknownVtbl *)v12;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((struct IUnknown **)va1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
  return (unsigned int)MostRecentlyUsedViewForAppInstance;
}
