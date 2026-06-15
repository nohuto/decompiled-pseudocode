/*
 * XREFs of ?CheckExecutionEnvironment@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140047010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckExecutionEnvironment(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rax
  void *v5; // rbx
  _QWORD *v6; // rcx
  DWORD ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-28h] BYREF
  void *TokenHandle[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-10h] BYREF
  int TokenInformation; // [rsp+88h] [rbp+28h] BYREF

  TokenHandle[1] = (void *)-2LL;
  ppv = 0LL;
  if ( CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, &ppv) >= 0 )
    (*(void (__fastcall **)(LPVOID, __int64, _BYTE *))(*(_QWORD *)ppv + 32LL))(ppv, 4LL, v11);
  CurrentProcessId = GetCurrentProcessId();
  v4 = OpenProcess(0x1000u, 0, CurrentProcessId);
  v5 = v4;
  if ( v4 )
  {
    if ( OpenProcessToken(v4, 8u, TokenHandle) )
    {
      TokenInformation = 0;
      GetTokenInformation(TokenHandle[0], TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
      CloseHandle(TokenHandle[0]);
    }
    CloseHandle(v5);
  }
  v6 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 16LL))(v6, *v6);
  }
  return 1LL;
}
