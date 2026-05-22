/*
 * XREFs of ?OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@@Z @ 0x180112BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnMouseSnappedToGaze@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@@Z @ 0x180112C40 (-OnMouseSnappedToGaze@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMouseSnappedToGaze(
        BamoMPCManagerClientProxy *this,
        const struct LegacyDeviceInfo *a2)
{
  BamoMPCManagerClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCManagerClientProxyImpl::OnMouseSnappedToGaze(
                  (BamoMPCManagerClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
