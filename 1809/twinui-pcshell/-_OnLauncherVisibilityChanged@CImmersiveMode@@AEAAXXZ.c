/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x180014640
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x180014630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x1800170E0 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  bool v2; // bl
  void *v3; // rbx
  unsigned __int64 i; // r14
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // [rsp+70h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+80h] [rbp+48h] BYREF
  __int64 v10; // [rsp+88h] [rbp+50h] BYREF

  v10 = 0LL;
  ppvOut = 0LL;
  punk = 0LL;
  v7 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 4) + 32LL))(
    (char *)this + 32,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  v2 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  if ( v2 && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v7) >= 0 && v7 )
  {
    v3 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v3 + 88LL))(v3, &v10);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((char *)this + 384, &v10);
  for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * i);
    v6 = *((_DWORD *)this + 84);
    *(_BYTE *)(v5 + 13) = (unsigned int)SHIsSameObject(*(struct IUnknown **)v5, *((struct IUnknown **)this + 48)) != 0;
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v5, v6);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
