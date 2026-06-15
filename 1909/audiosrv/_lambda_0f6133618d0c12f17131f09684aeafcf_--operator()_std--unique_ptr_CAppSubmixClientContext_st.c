/*
 * XREFs of _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC0F0
 * Callers:
 *     ?OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x1800FD780 (-OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800DAF2C (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 *     ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800FD6C8 (-NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800FDB08 (-erase@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

__int64 __fastcall lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
        _QWORD **a1,
        __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 *v5; // rbp
  __int64 *i; // rdi
  __int64 v7; // r14
  __int64 *j; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rbx
  __int64 *v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *(__int64 **)(*a2 + 32);
  for ( i = *(__int64 **)(*a2 + 24); i != v5; ++i )
  {
    if ( *i == *v3 )
      break;
  }
  v7 = 0LL;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      v9 = *j;
      if ( *j != *v3 )
      {
        *j = 0LL;
        wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(i++, v9);
      }
    }
  }
  std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::erase(
    *a2 + 24,
    &v16,
    i,
    *(_QWORD *)(*a2 + 32));
  result = *a2;
  v11 = *a1;
  v12 = *(__int64 **)(*a2 + 48);
  v13 = (unsigned __int64)(*(_QWORD *)(result + 56) - (_QWORD)v12 + 7LL) >> 3;
  if ( (unsigned __int64)v12 > *(_QWORD *)(result + 56) )
    v13 = 0LL;
  if ( v13 )
  {
    do
    {
      v14 = *v12;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 184LL))(*v11);
      result = CAppSubmixClient::NotifySubmixClient(v14, 1LL, v15);
      ++v7;
      ++v12;
    }
    while ( v7 != v13 );
  }
  return result;
}
