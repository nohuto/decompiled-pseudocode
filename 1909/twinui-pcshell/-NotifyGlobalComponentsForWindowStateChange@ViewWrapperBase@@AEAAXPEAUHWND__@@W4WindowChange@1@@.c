/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1802B7E78
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802B83D8 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x1802BABC0 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1802BAE30 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x1802BAFB0 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1af5501008b02ab9650fb6024cece8bf___ @ 0x1802B4640 (Windows--Internal--ComTaskPool--QueueTask__lambda_1af5501008b02ab9650fb6024cece8bf___.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  _UNKNOWN **result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (*(_BYTE *)(a1 + 464) & 1) == 0 )
  {
    v15 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    v10 = a1;
    v11[0] = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v11[1] = a2;
    v12 = a3;
    v13 = v7;
    Windows::Internal::ComTaskPool::QueueTask__lambda_1af5501008b02ab9650fb6024cece8bf___(
      v9,
      v8,
      *(_DWORD *)(a1 + 184),
      (__int64)&v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
    return (_UNKNOWN **)Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  return result;
}
