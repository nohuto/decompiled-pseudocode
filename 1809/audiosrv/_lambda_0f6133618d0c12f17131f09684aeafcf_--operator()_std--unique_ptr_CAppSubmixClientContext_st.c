/*
 * XREFs of _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F0774
 * Callers:
 *     ?OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x1800F1DB0 (-OnProcessSubmixInactivated@CProcessSubmixManager@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1800CCE00 (-erase@-$vector@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V-$a.c)
 *     ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800F1CF8 (-NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z.c)
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
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rbx
  __int64 *v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // [rsp+50h] [rbp+8h] BYREF

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
        v10 = *i;
        *i = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        ++i;
      }
    }
  }
  std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::erase(
    *a2 + 24,
    &v17,
    i,
    *(__int64 **)(*a2 + 32));
  result = *a2;
  v12 = *a1;
  v13 = *(__int64 **)(*a2 + 48);
  v14 = (unsigned __int64)(*(_QWORD *)(result + 56) - (_QWORD)v13 + 7LL) >> 3;
  if ( (unsigned __int64)v13 > *(_QWORD *)(result + 56) )
    v14 = 0LL;
  if ( v14 )
  {
    do
    {
      v15 = *v13;
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 184LL))(*v12);
      result = CAppSubmixClient::NotifySubmixClient(v15, 1LL, v16);
      ++v7;
      ++v13;
    }
    while ( v7 != v14 );
  }
  return result;
}
