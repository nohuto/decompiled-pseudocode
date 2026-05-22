/*
 * XREFs of ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipal@@UEAAJAEBU_GUID@@@Z @ 0x180124520
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x180124580 (-BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoUIAHitTestPrincipal::BroadcastUIAHitTestResponse(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _GUID *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  LODWORD(v3) = BamoImpl::BamoUIAHitTestPrincipalImpl::BroadcastUIAHitTestResponse(
                  (BamoImpl::BamoUIAHitTestPrincipalImpl *)(v3 + 1),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
