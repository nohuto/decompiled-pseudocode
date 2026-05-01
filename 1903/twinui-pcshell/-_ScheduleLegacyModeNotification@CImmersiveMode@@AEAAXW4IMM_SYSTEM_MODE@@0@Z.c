/*
 * XREFs of ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801281B8
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180127AB8 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800293E0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___ @ 0x180126190 (Windows--Internal--ComTaskPool--QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::_ScheduleLegacyModeNotification(RTL_SRWLOCK *a1, int a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct IObjectArray *v9; // [rsp+28h] [rbp-18h] BYREF
  int v10; // [rsp+30h] [rbp-10h]
  int v11; // [rsp+34h] [rbp-Ch]
  int v12; // [rsp+38h] [rbp-8h]
  int v13; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  v5 = a1 + 32;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( (int)AgileRegistrationList::GetCallbackArray(v5, &v14) >= 0
    && ((int (__fastcall *)(struct IObjectArray *, int *))v14->lpVtbl->GetCount)(v14, &v13) >= 0
    && v13 )
  {
    v9 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v10 = a2;
    v11 = a3;
    v12 = v13;
    Windows::Internal::ComTaskPool::QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___(
      v7,
      v6,
      (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
      &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
}
