/*
 * XREFs of ?OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x18004C630
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x18003E984 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_p.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerConnection::OnPeerDisconnected(
        MPCManagerConnection *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rdi
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *j; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 i; // rdx
  void (__fastcall ***v12)(_QWORD); // rax
  __int64 *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 19);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(struct MPCManagerBamo_AutoBamos::BamoPeer *))(*(_QWORD *)a2 + 8LL))(a2)
                                                    + 8));
  v4 = *(__int64 **)(v2 + 72);
  v5 = (__int64)v4;
  v6 = v4[1];
  v7 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)a2 )
    {
      if ( *(_BYTE *)(v5 + 25) && (unsigned __int64)a2 < *(_QWORD *)(v7 + 32) )
        v5 = v7;
      v4 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( !*(_BYTE *)(v5 + 25) )
    v6 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( (unsigned __int64)a2 >= *(_QWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  j = v4;
  while ( j != (__int64 *)v5 )
  {
    if ( !*((_BYTE *)j + 25) )
    {
      v9 = j[2];
      if ( *(_BYTE *)(v9 + 25) )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (__int64 *)i;
        j = (__int64 *)i;
      }
      else
      {
        v10 = *(_QWORD *)v9;
        for ( j = (__int64 *)j[2]; !*(_BYTE *)(v10 + 25); v10 = *(_QWORD *)v10 )
          j = (__int64 *)v10;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::erase(
    (__int64 ***)(v2 + 72),
    &v14,
    v4,
    (__int64 *)v5);
  if ( a2 )
  {
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct MPCManagerBamo_AutoBamos::BamoPeer *))(*(_QWORD *)a2 + 8LL))(a2);
    (**v12)(v12);
  }
  return 0LL;
}
