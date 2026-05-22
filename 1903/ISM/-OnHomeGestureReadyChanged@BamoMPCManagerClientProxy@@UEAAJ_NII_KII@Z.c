/*
 * XREFs of ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxy@@UEAAJ_NII_KII@Z @ 0x180112490
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnHomeGestureReadyChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJ_NII_KII@Z @ 0x18011251C (-OnHomeGestureReadyChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJ_NII_KII@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnHomeGestureReadyChanged(
        BamoMPCManagerClientProxy *this,
        bool a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  BamoMPCManagerClientProxy *v8; // rbx
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+50h] [rbp+8h] BYREF

  v8 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v8) = BamoImpl::BamoMPCManagerClientProxyImpl::OnHomeGestureReadyChanged(
                  (BamoMPCManagerClientProxy *)((char *)v8 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v12);
  return (unsigned int)v8;
}
