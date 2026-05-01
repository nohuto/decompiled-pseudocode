/*
 * XREFs of ??0VirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIVirtualDesktopDataSource@Multitasking@3Internal@Windows@@PE$AAUIVirtualDesktopController@6378@W4SwitchItemCloseButtonBehavior@1234@VRect@Foundation@8@@Z @ 0x18026A0E0
 * Callers:
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x180088460 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVVirtualDesktopBarElementViewModel@2345@PE$AAUIVirtualDesktopDataSource@Multitasking@4Internal@Windows@@PE$AAUIVirtualDesktopController@849Windows@@W4SwitchItemCloseButtonBehavior@2345@VRect@Foundation@Windows@@@Z @ 0x18026F0BC (-CreateInstance@__IVirtualDesktopBarElementViewModelFactory@Switcher@Experiences@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopBarElementViewModel::VirtualDesktopBarElementViewModel(
        __int64 a1,
        int a2,
        int a3,
        void **a4,
        __int128 *a5)
{
  int v5; // ebx
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v14[4]; // [rsp+50h] [rbp-10h] BYREF
  void *v15; // [rsp+70h] [rbp+10h] BYREF

  v5 = (int)a4;
  v14[0] = 567974803;
  v14[1] = 965197782;
  v14[2] = -405099375;
  v14[3] = 1050706698;
  v15 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.VirtualDesktopBarElementViewModel",
                                (struct Platform::Guid *)v14,
                                &v15,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v13 = *a5;
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelFactory::CreateInstance(
               (_DWORD)v15,
               a2,
               a3,
               v5,
               (__int64)&v13);
  *(_QWORD *)&v13 = Instance;
  v10 = __abi_winrt_ptr_ctor(Instance);
  *(_QWORD *)&v13 = v10;
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
  v11 = __abi_winrt_ptr_ctor(v10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v15 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  return v11;
}
