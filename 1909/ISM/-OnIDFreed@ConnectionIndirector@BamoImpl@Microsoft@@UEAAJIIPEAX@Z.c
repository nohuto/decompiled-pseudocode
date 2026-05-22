/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x18005FA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x18005C90C (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        __int64 a2,
        __int64 a3,
        Microsoft::BamoImpl::BamoProxyImpl *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  if ( a4 )
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect(a4, 0);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6);
  return 0LL;
}
