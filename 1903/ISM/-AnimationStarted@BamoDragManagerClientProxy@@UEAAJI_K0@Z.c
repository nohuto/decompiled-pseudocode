/*
 * XREFs of ?AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z @ 0x18005B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x18005B41C (-AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::AnimationStarted(
        BamoDragManagerClientProxy *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  BamoDragManagerClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDragManagerClientProxyImpl::AnimationStarted(
                  (BamoDragManagerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v5;
}
