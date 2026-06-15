/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___ @ 0x1800FCE98
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD4BC (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800DB3CC (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v7; // rdx
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*j + 120LL))(*j) )
      {
        v7 = *j;
        *j = 0LL;
        wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(i++, v7);
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
