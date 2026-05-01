/*
 * XREFs of _lambda_fcea73766659ae40d84bf4f8c073c10d_::operator() @ 0x18026CB58
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_fcea73766659ae40d84bf4f8c073c10d__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::Invoke @ 0x180271FE0 (Platform--Details--__abi_FunctorCapture__lambda_fcea73766659ae40d84bf4f8c073c10d__void_Windows--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18025CA9C (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18025D864 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fcea73766659ae40d84bf4f8c073c10d_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 result; // rax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = a2;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 64LL))(a3, 0LL);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  try
  {
    v6 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(a3);
    v14 = v6;
    v7 = __abi_winrt_ptr_ctor(v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    AppViewDataSourceHelpers::GetApplicationViewForItem((struct _GUID *)&v16, v7);
    v8 = v16;
    if ( !v16 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
        (const char *)0x8000FFFFLL);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v15) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*a1 + 96LL))(*a1, v15, &v14);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          174LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
          (const char *)(unsigned int)v9);
      if ( !(_DWORD)v14 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
        if ( v10 < 0 )
          __abi_WinRTraiseException(v10);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xB5,
             (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
             v12);
  }
  return result;
}
