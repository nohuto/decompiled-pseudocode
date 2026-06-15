/*
 * XREFs of ??$reset_array@Ucom_unknown_deleter@details@wil@@@?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@AEAAXAEBUcom_unknown_deleter@details@1@@Z @ 0x18013D878
 * Callers:
 *     ?reset@?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@QEAAXXZ @ 0x180141270 (-reset@-$unique_any_array_ptr@PEAUIInspectable@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::reset_array<wil::details::com_unknown_deleter>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 result; // rax
  __int64 v4; // rsi

  v1 = *(_QWORD **)a1;
  v2 = 0LL;
  result = 8LL * *(_QWORD *)(a1 + 8) + *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 8) & 0x1FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)a1 > result )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *v1 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      ++v1;
      ++v2;
    }
    while ( v2 != v4 );
  }
  return result;
}
