/*
 * XREFs of ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x1800327A4
 * Callers:
 *     ?OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ @ 0x1800325E0 (-OnDisconnected@PenEventsClientCustomProxy@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002F724 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?count@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x180034830 (-count@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@IV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x1800348A8 (-equal_range@-$_Hash@V-$_Umap_traits@IV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_p.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800349EC (-erase@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@_ea_1800349EC.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180034AD4 (-erase@-$list@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ??R?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@QEBA_KAEBI@Z @ 0x180059274 (--R-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@QEBA_KAEBI@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007BA88 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::OnPenEventsClientProxyDisconnected(
        PenEventsDispatcherPrincipal *this,
        struct BamoPenEventsClientProxy *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rcx
  ULONGLONG i; // r11
  __int64 v8; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // rdi
  _QWORD *j; // rbx
  int ProcessId; // [rsp+30h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-28h] BYREF

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && TlgKeywordOn(v4, 0x200uLL) )
    TlgWrite(v5, &unk_18019B4DB, 0LL, 0LL, 2u, &pData);
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 4) + 16LL));
  std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range(
    (char *)this + 56,
    &pData,
    &ProcessId);
  for ( i = pData.Ptr; i != *(_QWORD *)&pData.Size; i = *(_QWORD *)i )
  {
    if ( *(struct BamoPenEventsClientProxy **)(i + 24) == a2 )
    {
      v8 = std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>::operator()(v6, i + 16);
      v10 = *((_QWORD *)this + 10);
      v11 = 2 * (*((_QWORD *)this + 13) & v8);
      if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 13) & v8) + 8) == v9 )
      {
        if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 13) & v8)) == v9 )
        {
          *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 13) & v8)) = *((_QWORD *)this + 8);
          v10 = *((_QWORD *)this + 10);
          v12 = *((_QWORD *)this + 8);
        }
        else
        {
          v12 = v9[1];
        }
        *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
      }
      else if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 13) & v8)) == v9 )
      {
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 13) & v8)) = *v9;
      }
      std::list<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::erase(
        (char *)this + 64,
        &pData,
        v9);
      break;
    }
  }
  v13 = (char *)this + 120;
  if ( std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count(
         (char *)this + 120,
         &ProcessId) )
  {
    std::_Hash<std::_Umap_traits<unsigned int,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>,1>>::equal_range(
      (char *)this + 56,
      &pData,
      &ProcessId);
    for ( j = (_QWORD *)pData.Ptr; j != *(_QWORD **)&pData.Size; j = (_QWORD *)*j )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(j[3] + 8LL) + 120LL))(j[3] + 8LL) )
        return 0LL;
    }
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::erase(
      v13,
      &ProcessId);
  }
  return 0LL;
}
