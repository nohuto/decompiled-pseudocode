/*
 * XREFs of ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@UE$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x18025D750
 * Callers:
 *     ?get@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplorerHost@@W7E$AAAPE$AAUISwitchItemDataSource@Multitasking@3Internal@Windows@@XZ @ 0x1800A3880 (-get@-QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@SwitchItemDataSource@XamlExplore.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___ @ 0x18025BD4C (std--call_once__lambda_e13c9660f56a8071ad8948355737f92d___.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _get__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__SwitchItemDataSource_XamlExplorerHost__UE_AAAPE_AAUISwitchItemDataSource_Multitasking_3Internal_Windows__XZ(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rdi
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = __abi_winrt_ptr_ctor(a1);
  std::call_once__lambda_e13c9660f56a8071ad8948355737f92d___((struct std::once_flag *)(a1 + 80), (__int64)&v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v2 = (RTL_SRWLOCK *)(a1 + 104);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 104));
  v5 = a1 + 104;
  v3 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 72));
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
