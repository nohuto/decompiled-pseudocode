/*
 * XREFs of ?OnHomeGestureDetected@BamoMPCManagerClientProxy@@UEAAJII_KI@Z @ 0x180112090
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnHomeGestureDetected@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII_KI@Z @ 0x180112104 (-OnHomeGestureDetected@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII_KI@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnHomeGestureDetected(
        BamoMPCManagerClientProxy *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  BamoMPCManagerClientProxy *v6; // rbx
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v6) = BamoImpl::BamoMPCManagerClientProxyImpl::OnHomeGestureDetected(
                  (BamoMPCManagerClientProxy *)((char *)v6 + 8),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10);
  return (unsigned int)v6;
}
