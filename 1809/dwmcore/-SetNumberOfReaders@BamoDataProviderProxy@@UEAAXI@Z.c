/*
 * XREFs of ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180171280
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18007516C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800751A0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x1801712C8 (-UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

void __fastcall BamoDataProviderProxy::SetNumberOfReaders(BamoDataProviderProxy *this, int a2)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v4,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  *((_DWORD *)this + 12) = a2;
  BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache((BamoDataProviderProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v4);
}
