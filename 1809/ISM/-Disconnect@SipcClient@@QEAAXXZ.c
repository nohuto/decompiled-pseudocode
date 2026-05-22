/*
 * XREFs of ?Disconnect@SipcClient@@QEAAXXZ @ 0x1800A1430
 * Callers:
 *     ?OnDisposePublic@SipcEndpoint@@MEAAXXZ @ 0x1800A1810 (-OnDisposePublic@SipcEndpoint@@MEAAXXZ.c)
 * Callees:
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18009F99C (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Disconnect@SipcEndpoint@@QEAAXXZ @ 0x1800A1664 (-Disconnect@SipcEndpoint@@QEAAXXZ.c)
 */

void __fastcall SipcClient::Disconnect(SipcClient *this, __int64 a2)
{
  SipcEndpoint *v3; // rcx

  AggregateWaitHandle::Reset((SipcClient *)((char *)this + 136), a2);
  v3 = (SipcEndpoint *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    SipcEndpoint::Disconnect(v3);
    SharedObjectBase::ReleasePrivateReference(*((SharedObjectBase **)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
}
