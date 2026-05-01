/*
 * XREFs of ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x18010051C
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180101DC0 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x1800170E0 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x1801015A0 (-MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        char a4,
        struct IUnknown *a5,
        int a6)
{
  HWND v10; // rbx

  *(_QWORD *)a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = a4;
  *(_BYTE *)(a1 + 14) = 0;
  v10 = (HWND)SHCreateWorkerWindowW(
                CImmersiveMode::CDesktopVisibilityChangeSource::s_ActivationFilterWndProc,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                -2LL);
  if ( v10
    && (*(int (__fastcall **)(PVOID, HWND, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                           + 32LL))(
         CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
         v10,
         0LL,
         12LL) < 0 )
  {
    DestroyWindow(v10);
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v10;
  *(_BYTE *)(a1 + 13) = (unsigned int)SHIsSameObject(a2, a5) != 0;
  CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged((CImmersiveMode::CDesktopVisibilityChangeSource *)a1);
  CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(a1, a6);
  return a1;
}
