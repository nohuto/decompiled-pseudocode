/*
 * XREFs of ?Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z @ 0x1800A1CC8
 * Callers:
 *     ?OnDisposePublic@SipcEndpoint@@MEAAXXZ @ 0x1800A1810 (-OnDisposePublic@SipcEndpoint@@MEAAXXZ.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?_FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD9C (-_FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Disconnect@SipcEndpoint@@QEAAXXZ @ 0x1800A1664 (-Disconnect@SipcEndpoint@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcServer::Disconnect(SipcServer *this, struct SipcEndpoint *a2)
{
  char *v2; // rax
  char *i; // rbx
  SipcEndpoint *v5; // rcx
  int v6; // eax
  char *v7; // rax
  char **v8; // rcx

  v2 = (char *)this + 152;
  for ( i = (char *)*((_QWORD *)this + 19); i != v2; i = *(char **)i )
  {
    v5 = (SipcEndpoint *)*((_QWORD *)i + 2);
    if ( v5 == a2 )
    {
      SipcEndpoint::Disconnect(v5);
      SharedObjectBase::ReleasePrivateReference(*((SharedObjectBase **)i + 2));
      *((_QWORD *)i + 2) = 0LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 12) + 48LL))(
             *((_QWORD *)this + 12),
             *((unsigned int *)i + 6),
             *((unsigned int *)i + 7));
      if ( v6 < 0 )
      {
        wil::details::in1diag0::_FailFast_Hr((wil::details::in1diag0 *)(unsigned int)v6);
        JUMPOUT(0x1800A1D5CLL);
      }
      v7 = *(char **)i;
      if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v8 = (char **)*((_QWORD *)i + 1), *v8 != i) )
        __fastfail(3u);
      *v8 = v7;
      *((_QWORD *)v7 + 1) = v8;
      --*((_QWORD *)this + 21);
      return;
    }
  }
}
