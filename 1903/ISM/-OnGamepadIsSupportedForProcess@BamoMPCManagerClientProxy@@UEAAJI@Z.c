/*
 * XREFs of ?OnGamepadIsSupportedForProcess@BamoMPCManagerClientProxy@@UEAAJI@Z @ 0x180112130
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnGamepadIsSupportedForProcess@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18011217C (-OnGamepadIsSupportedForProcess@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnGamepadIsSupportedForProcess(
        BamoMPCManagerClientProxy *this,
        unsigned int a2)
{
  BamoMPCManagerClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCManagerClientProxyImpl::OnGamepadIsSupportedForProcess(
                  (BamoMPCManagerClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
