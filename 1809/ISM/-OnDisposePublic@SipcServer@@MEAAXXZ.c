/*
 * XREFs of ?OnDisposePublic@SipcServer@@MEAAXXZ @ 0x1800A2210
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18009F99C (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Disconnect@SipcEndpoint@@QEAAXXZ @ 0x1800A1664 (-Disconnect@SipcEndpoint@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcServer::OnDisposePublic(void **this)
{
  __int64 v2; // rdx
  __int64 **v3; // rdi
  __int64 **i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  void *v7; // rcx

  operator delete(this[22], (const struct std::nothrow_t *)0x20);
  this[22] = 0LL;
  AggregateWaitHandle::Reset((AggregateWaitHandle *)(this + 13), v2);
  v3 = (__int64 **)(this + 19);
  for ( i = (__int64 **)this[19]; i != v3; i = (__int64 **)*i )
  {
    SipcEndpoint::Disconnect((SipcEndpoint *)i[2]);
    SharedObjectBase::ReleasePrivateReference((SharedObjectBase *)i[2]);
    i[2] = 0LL;
  }
  while ( 1 )
  {
    v5 = *v3;
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    if ( v5 == (__int64 *)v3 )
      break;
    operator delete(v5, (const struct std::nothrow_t *)0x20);
    this[21] = (char *)this[21] - 1;
  }
  v7 = this[12];
  if ( v7 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 24LL))(v7);
    this[12] = 0LL;
  }
}
