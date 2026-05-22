/*
 * XREFs of ?OnInteractiveIntentGesture@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@IIII_KI@Z @ 0x1801128C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnInteractiveIntentGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@IIII_KI@Z @ 0x180112954 (-OnInteractiveIntentGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnInteractiveIntentGesture(
        BamoMPCManagerClientProxy *this,
        const struct LegacyDeviceInfo *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8)
{
  BamoMPCManagerClientProxy *v9; // rbx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+50h] [rbp+8h] BYREF

  v9 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v9) = BamoImpl::BamoMPCManagerClientProxyImpl::OnInteractiveIntentGesture(
                  (BamoMPCManagerClientProxy *)((char *)v9 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7,
                  a8);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13);
  return (unsigned int)v9;
}
