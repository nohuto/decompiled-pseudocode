/*
 * XREFs of ?UnsuppressInputOfType@BamoInputObserverManagerProxy@@UEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z @ 0x180063FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?UnsuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@PEAVBamoInputObserverClientPrincipal@@@Z @ 0x180064010 (-UnsuppressInputOfType@BamoInputObserverManagerProxyImpl@BamoImpl@@QEAAJW4InputObserverType@Inpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputObserverManagerProxy::UnsuppressInputOfType(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoInputObserverManagerProxyImpl::UnsuppressInputOfType(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
