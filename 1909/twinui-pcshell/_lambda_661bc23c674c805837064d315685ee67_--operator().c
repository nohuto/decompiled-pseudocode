/*
 * XREFs of _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x1804348DC
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x1804346B8 (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18012DBB4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ?close_reset@?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHSTRING__@@@Z @ 0x180202FCC (-close_reset@-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@ZU-$integ.c)
 */

char __fastcall lambda_661bc23c674c805837064d315685ee67_::operator()(_QWORD **a1, __int64 *a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rax
  PCWSTR StringRawBuffer; // rax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF
  HSTRING string; // [rsp+40h] [rbp+18h] BYREF

  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&string);
  if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(*(_QWORD *)v4 + 88LL))(a2, &v9) < 0 )
    goto LABEL_7;
  v5 = 1;
  if ( v9 > 1 )
    goto LABEL_7;
  if ( string )
    wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>::close_reset(string);
  v6 = *a2;
  string = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v6 + 48))(a2, &string) < 0
    || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL), (unsigned int)_o__wcsicmp(**a1, StringRawBuffer)) )
  {
LABEL_7:
    v5 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
  return v5;
}
