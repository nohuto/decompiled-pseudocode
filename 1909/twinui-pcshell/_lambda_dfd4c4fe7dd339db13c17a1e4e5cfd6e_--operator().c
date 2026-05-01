/*
 * XREFs of _lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_::operator() @ 0x1802E4600
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e__void_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::Invoke @ 0x1802EA7A0 (Platform--Details--__abi_FunctorCapture__lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e__v_ea_1802EA7A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802D46FC (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1802D58C4 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
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
        170LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
        (const char *)0x8000FFFFLL);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v15) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)*a1 + 96LL))(*a1, v15, &v14);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          178LL,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
          (const char *)(unsigned int)v9);
      if ( !(_DWORD)v14 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
        if ( v10 < 0 )
          __abi_WinRTraiseException(v10);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0xB9,
             (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\monitorframe.h",
             v12);
  }
  return result;
}
