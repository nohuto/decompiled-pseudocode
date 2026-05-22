/*
 * XREFs of ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxy@@UEAAJIII_KI@Z @ 0x1801119C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z @ 0x180111A3C (-OnButtonsChangedDuringHomeGesture@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJIII_KI@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnButtonsChangedDuringHomeGesture(
        BamoMPCManagerClientProxy *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  BamoMPCManagerClientProxy *v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoMPCManagerClientProxyImpl::OnButtonsChangedDuringHomeGesture(
                  (BamoMPCManagerClientProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11);
  return (unsigned int)v7;
}
