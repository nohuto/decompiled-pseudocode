/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&SetConstantForDeviceToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_806f78d28c8f10a2fa7e8f1910bc87ed___ @ 0x1800E1A9C
 * Callers:
 *     ?SetConstantForDeviceToDefaultAsync@MPCConstantManagerClient@@UEAAJIPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800E0BB0 (-SetConstantForDeviceToDefaultAsync@MPCConstantManagerClient@@UEAAJIPEAUHSTRING__@@PEAPEAUIAsync.c)
 * Callees:
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?SetConstantForDeviceToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x1800E6BF4 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__SetConstantForDeviceToDefaultAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_806f78d28c8f10a2fa7e8f1910bc87ed___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  char *v7; // rsi
  signed int v8; // ebx
  void *v9; // rax
  __int64 v10; // rdi

  v7 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *(_QWORD *)v7 = off_180141C38;
    *(_OWORD *)(v7 + 8) = *(_OWORD *)a4;
    *((_QWORD *)v7 + 3) = *(_QWORD *)(a4 + 16);
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = 0LL;
  v8 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v9 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = 0LL;
    if ( v9 )
      v10 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantForDeviceToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const SetConstantForDeviceToDefaultAsyncCasualityName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v9,
              a1,
              L"Windows.Foundation.IAsyncAction",
              0LL,
              -2LL);
    v8 = v10 == 0 ? 0x8007000E : 0;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 256) = v7;
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
      v7 = 0LL;
    }
    if ( v8 >= 0 )
    {
      *a2 = (v10 + 176) & -(__int64)(v10 != 0);
      v10 = 0LL;
    }
    if ( v7 )
      (**(void (__fastcall ***)(void *, __int64))v7)(v7, 1LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  }
  return (unsigned int)v8;
}
