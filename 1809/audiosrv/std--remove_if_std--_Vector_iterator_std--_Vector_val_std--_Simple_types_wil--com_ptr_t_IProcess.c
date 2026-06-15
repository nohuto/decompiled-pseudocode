/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___ @ 0x1800F10A0
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F169C (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi
  _QWORD *j; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 120LL))(*j) )
      {
        v7 = *j;
        *j = 0LL;
        v8 = *i;
        *i = v7;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        ++i;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
