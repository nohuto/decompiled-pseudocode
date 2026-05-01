/*
 * XREFs of ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18025D8D8
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180260078 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_180260078.c)
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x180263BA4 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180263FF0 (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x180264180 (Platform--Details--__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_--Invoke.c)
 *     _lambda_0b0ea29adb38baec39914485464e8775_::operator() @ 0x18026B7E4 (_lambda_0b0ea29adb38baec39914485464e8775_--operator().c)
 *     _lambda_5e3471c756f87189046196c55c94088a_::operator() @ 0x18026B9F4 (_lambda_5e3471c756f87189046196c55c94088a_--operator().c)
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 *     _lambda_33af26c9d846f3b9c507d9b825ceee74_::operator() @ 0x18027E88C (_lambda_33af26c9d846f3b9c507d9b825ceee74_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x180282FE4 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 *     ?IsUIThread@@YA_NXZ @ 0x18028F250 (-IsUIThread@@YA_NXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x180088460 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18025D864 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Window::Current::get(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  _DWORD v9[6]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h]

  v9[0] = -1825405943;
  v9[1] = 1257918113;
  v9[2] = 1309465731;
  v9[3] = -1316231053;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Window",
                                (struct Platform::Guid *)v9,
                                (void **)&v10,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v5 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v10);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor(v5);
  v11 = v6;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v7;
}
