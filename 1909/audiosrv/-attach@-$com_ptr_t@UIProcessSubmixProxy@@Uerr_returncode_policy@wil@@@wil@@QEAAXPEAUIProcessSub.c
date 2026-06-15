/*
 * XREFs of ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800DAF2C
 * Callers:
 *     ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18004BF20 (-DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ.c)
 *     ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x1800E5870 (-PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800F521C (--1-$out_param_t@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@w.c)
 *     _lambda_1a19eda420d26f754031790a40bd90be_::operator() @ 0x1800F52E4 (_lambda_1a19eda420d26f754031790a40bd90be_--operator().c)
 *     _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC0F0 (_lambda_0f6133618d0c12f17131f09684aeafcf_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_________lambda_734e07aef959534fc58489afc6593abc___ @ 0x1800FC9F8 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_IProcess.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800FDB08 (-erase@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 *     DIALOGSESSION_rundown @ 0x180103F70 (DIALOGSESSION_rundown.c)
 *     s_StopPersonalAssistantDialogSession @ 0x180104020 (s_StopPersonalAssistantDialogSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
