/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@std@@EEAAXXZ @ 0x1801D73F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180100B4C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall std::_Ref_count_obj<wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_exception_policy>>>::_Destroy(
        __int64 a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *(wil::details **)(a1 + 16);
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
