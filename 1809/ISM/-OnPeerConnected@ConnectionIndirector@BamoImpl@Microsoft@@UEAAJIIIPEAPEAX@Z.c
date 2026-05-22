/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180011B00
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800115E0 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        Microsoft::BamoImpl::BaseBamoConnectionImpl **this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  unsigned int v9; // ebx
  volatile signed __int32 *v11; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v11, (struct Microsoft::BamoImpl::ConnectionIndirector *)(this - 2));
  v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(this[1], a2, a3, a4, a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  return v9;
}
