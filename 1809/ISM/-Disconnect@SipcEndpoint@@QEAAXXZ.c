/*
 * XREFs of ?Disconnect@SipcEndpoint@@QEAAXXZ @ 0x1800A1664
 * Callers:
 *     ?Disconnect@SipcClient@@QEAAXXZ @ 0x1800A1430 (-Disconnect@SipcClient@@QEAAXXZ.c)
 *     ?Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z @ 0x1800A1CC8 (-Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z.c)
 *     ?OnDisposePublic@SipcServer@@MEAAXXZ @ 0x1800A2210 (-OnDisposePublic@SipcServer@@MEAAXXZ.c)
 * Callees:
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x18009FC0C (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::Disconnect(SipcEndpoint *this)
{
  SharedObjectBase *v2; // rcx
  SharedObjectBase *v3; // rcx
  void *v4; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v2 = (SharedObjectBase *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 12) = 0LL;
  if ( v2 )
  {
    SharedObjectBase::ReleasePrivateReference(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  else
  {
    v3 = (SharedObjectBase *)*((_QWORD *)this + 14);
    if ( v3 )
    {
      SharedObjectBase::ReleasePrivateReference(v3);
      *((_QWORD *)this + 14) = 0LL;
    }
  }
  CloseHandle(*((HANDLE *)this + 15));
  v4 = (void *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 15) = 0LL;
  CloseHandle(v4);
  *((_QWORD *)this + 16) = 0LL;
}
