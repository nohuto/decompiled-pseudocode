/*
 * XREFs of ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x180189480
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E380C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800E3840 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x180189374 (-OnPeerDisconnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        Microsoft::BamoImpl::BaseBamoPeerImpl *a3,
        char a4)
{
  Microsoft::BamoImpl::ConnectionIndirector *v4; // rbx
  const char *v7; // r9
  __int64 v8; // rdx
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v10,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  LOBYTE(v7) = a4;
  LODWORD(v4) = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerDisconnected(
                  *((Microsoft::BamoImpl::BaseBamoPeerImpl ***)v4 + 1),
                  v8,
                  a3,
                  v7);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v10);
  return (unsigned int)v4;
}
