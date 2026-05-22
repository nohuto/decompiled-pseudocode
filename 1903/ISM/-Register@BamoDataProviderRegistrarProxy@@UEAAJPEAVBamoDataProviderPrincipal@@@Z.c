/*
 * XREFs of ?Register@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x180023A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Register@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x180023B44 (-Register@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataProviderRegistrarProxy::Register(
        BamoDataProviderRegistrarProxy *this,
        struct BamoDataProviderPrincipal *a2)
{
  BamoDataProviderRegistrarProxy *v3; // rbx
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoDataProviderRegistrarProxyImpl::Register(
                  (BamoDataProviderRegistrarProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v5);
  return (unsigned int)v3;
}
