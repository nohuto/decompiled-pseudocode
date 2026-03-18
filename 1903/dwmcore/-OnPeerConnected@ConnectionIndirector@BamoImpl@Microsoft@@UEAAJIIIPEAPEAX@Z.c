/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800E27E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x1800E294C (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E2EDC (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800E2F10 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  Microsoft::BamoImpl::ConnectionIndirector *v6; // rbx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v10,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  LODWORD(v6) = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
                  *((Microsoft::BamoImpl::BaseBamoConnectionImpl **)v6 + 1),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v10);
  return (unsigned int)v6;
}
