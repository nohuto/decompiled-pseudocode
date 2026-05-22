/*
 * XREFs of ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1800D6410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800D458C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800D4D90 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x1800D6C40 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 */

void __fastcall SipcServer::OnDisposePublic(SipcServer *this)
{
  SipcServer::EndpointListEntry *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (SipcServer::EndpointListEntry *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 27) = 0LL;
  }
  NtList<SipcServer::EndpointListEntry>::Clear((SipcServer::EndpointListEntry **)this + 24);
  AggregateWaitHandle::Reset((SipcServer *)((char *)this + 144));
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    *((_QWORD *)this + 17) = 0LL;
  }
}
