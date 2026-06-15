/*
 * XREFs of wil::details::lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___::_lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___ @ 0x180137920
 * Callers:
 *     _CAudioDGProcess::LaunchADGProcess_::_1_::dtor$0 @ 0x180070A43 (_CAudioDGProcess--LaunchADGProcess_--_1_--dtor$0.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180137DB8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

char *__fastcall wil::details::lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___::_lambda_call__lambda_6b85e6898fbbff615471501cf90437a6___(
        _BYTE *a1)
{
  char *v2; // rcx
  char *result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(char **)(*(_QWORD *)a1 + 88LL);
    result = v2 - 1;
    if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      WaitForSingleObjectEx(v2, 0xFFFFFFFF, 0);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        *(_QWORD *)a1 + 88LL,
        0LL);
      result = *(char **)a1;
      *(_DWORD *)(*(_QWORD *)a1 + 96LL) = 0;
    }
  }
  return result;
}
