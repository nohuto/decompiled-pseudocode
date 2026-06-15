/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180137DB8
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029F94 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180042F88 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___::_lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___ @ 0x180137920 (wil--details--lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___--_lambda_call__lambda_6b85.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x180137AD8 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // ebx

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
