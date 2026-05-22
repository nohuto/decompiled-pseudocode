/*
 * XREFs of ?RegisterMagnifierClient@BamoMagnifierServerProxy@@UEAAJPEAVBamoMagnifierClientPrincipal@@@Z @ 0x180061DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RegisterMagnifierClient@BamoMagnifierServerProxyImpl@BamoImpl@@QEAAJPEAVBamoMagnifierClientPrincipal@@@Z @ 0x180061E34 (-RegisterMagnifierClient@BamoMagnifierServerProxyImpl@BamoImpl@@QEAAJPEAVBamoMagnifierClientPrin.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMagnifierServerProxy::RegisterMagnifierClient(
        BamoMagnifierServerProxy *this,
        struct BamoMagnifierClientPrincipal *a2)
{
  BamoMagnifierServerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMagnifierServerProxyImpl::RegisterMagnifierClient(
                  (BamoMagnifierServerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
