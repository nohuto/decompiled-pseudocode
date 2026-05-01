/*
 * XREFs of ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801022E8
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180101C08 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2F0 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___ @ 0x180100324 (Windows--Internal--ComTaskPool--QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::_ScheduleLegacyModeNotification(RTL_SRWLOCK *a1, int a2, int a3)
{
  struct IObjectArray *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IObjectArray *v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+34h] [rbp-Ch]
  int v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( (int)AgileRegistrationList::GetCallbackArray(a1 + 32, &v15) >= 0 )
  {
    v6 = v15;
    if ( ((int (__fastcall *)(struct IObjectArray *, int *))v15->lpVtbl->GetCount)(v15, &v14) >= 0 )
    {
      if ( v14 )
      {
        v10 = v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
        v11 = a2;
        v12 = a3;
        v13 = v14;
        Windows::Internal::ComTaskPool::QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___(
          v8,
          v7,
          (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
          &v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      }
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
}
