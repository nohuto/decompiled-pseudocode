/*
 * XREFs of ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z@std@@@Z @ 0x180031AFC
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1800326F4 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002F404 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800304B8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@w.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x180030CF0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ??R?$_Func_class@_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@QEBA_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800312C0 (--R-$_Func_class@_NV-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@s.c)
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x180031CF8 (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180031E68 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ?count@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x180034510 (-count@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$alloc.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall PenEventsDispatcherPrincipal::FireEvents(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r13d
  char v6; // r12
  __int64 *v7; // rdi
  __int64 *v8; // r14
  void (__fastcall ***v9)(_QWORD); // rbx
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rcx
  void (__fastcall ***v13[2])(_QWORD); // [rsp+20h] [rbp-38h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+A0h] [rbp+48h] BYREF
  int v18; // [rsp+A8h] [rbp+50h]
  __int64 v19; // [rsp+B0h] [rbp+58h]
  __int64 v20; // [rsp+B8h] [rbp+60h] BYREF

  v19 = a3;
  v18 = a2;
  v13[1] = (void (__fastcall ***)(_QWORD))-2LL;
  v4 = a2;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 184) && (_DWORD)a2 )
  {
    PenEventsDispatcherPrincipal::GetClientsForProcess(a1, &v14);
    v7 = v14;
    v8 = v15;
    if ( v14 != v15 )
    {
      do
      {
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          v13,
          (void (__fastcall ***)(_QWORD))*v7);
        v9 = v13[0];
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v20,
          v13[0]);
        if ( std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::operator()(
               a3,
               &v20) )
        {
          LODWORD(v17) = Microsoft::Bamo::BaseBamoPeer::GetProcessId((Microsoft::Bamo::BaseBamoPeer *)v9[4][2]);
          if ( !std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::count(
                  a1 + 120,
                  &v17) )
            v6 = 1;
        }
        wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v13);
        ++v7;
      }
      while ( v7 != v8 );
      v8 = v15;
      v7 = v14;
      v4 = v18;
    }
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>(v7, v8);
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  if ( v4 != 1 || !v6 )
  {
    PenEventsDispatcherPrincipal::GetShellClients(a1, &v14);
    v10 = v14;
    v11 = v15;
    if ( v14 != v15 )
    {
      do
      {
        wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
          &v17,
          (void (__fastcall ***)(_QWORD))*v10);
        std::_Func_class<bool,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::operator()(
          a3,
          &v17);
        ++v10;
      }
      while ( v10 != v11 );
      v11 = v15;
      v10 = v14;
    }
    if ( v10 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>(
        v10,
        v11);
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v16 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(a2) = v12 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, a2);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
