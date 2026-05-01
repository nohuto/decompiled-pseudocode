/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x180042D98
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x180042FF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800109AC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180042F00 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  bool v2; // bl
  void *v3; // rbx
  void (__fastcall *v4)(void *, __int64 *); // rdi
  unsigned __int64 i; // r14
  __int64 v6; // rdi
  unsigned int v7; // ebx
  int v8; // [rsp+70h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+40h] BYREF
  __int64 v10; // [rsp+80h] [rbp+48h] BYREF
  IUnknown *punk; // [rsp+88h] [rbp+50h] BYREF

  v10 = 0LL;
  ppvOut = 0LL;
  punk = 0LL;
  v8 = 2;
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
  if ( v2 && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v8) >= 0 && v8 )
  {
    v3 = ppvOut;
    v4 = *(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v4(v3, &v10);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 48, &v10);
  for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * i);
    v7 = *((_DWORD *)this + 84);
    *(_BYTE *)(v6 + 13) = (unsigned int)SHIsSameObject(*(struct IUnknown **)v6, *((struct IUnknown **)this + 48)) != 0;
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v6, v7);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
}
