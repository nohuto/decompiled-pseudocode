/*
 * XREFs of ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x180188A98
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180189680 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801951D0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180195300 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1801954F4 (-RemovePrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801986F0 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800E38A4 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1800E38D8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

Microsoft::BamoImpl::ConditionalDropAndReacquireLock *__fastcall Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
        Microsoft::BamoImpl::ConditionalDropAndReacquireLock *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2 && Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(a2) && !*((_DWORD *)a2 + 35) )
  {
    *(_QWORD *)this = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  return this;
}
