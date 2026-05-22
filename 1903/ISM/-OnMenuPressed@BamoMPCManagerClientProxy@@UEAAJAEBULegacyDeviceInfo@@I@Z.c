/*
 * XREFs of ?OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@I@Z @ 0x180112BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I@Z @ 0x180112C20 (-OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMenuPressed(
        BamoMPCManagerClientProxy *this,
        const struct LegacyDeviceInfo *a2,
        unsigned int a3)
{
  BamoMPCManagerClientProxy *v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v4) = BamoImpl::BamoMPCManagerClientProxyImpl::OnMenuPressed(
                  (BamoMPCManagerClientProxy *)((char *)v4 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v4;
}
