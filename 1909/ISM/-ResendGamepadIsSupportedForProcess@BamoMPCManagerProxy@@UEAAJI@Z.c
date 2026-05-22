/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@BamoMPCManagerProxy@@UEAAJI@Z @ 0x180113B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ResendGamepadIsSupportedForProcess@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180113B9C (-ResendGamepadIsSupportedForProcess@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoMPCManagerProxy::ResendGamepadIsSupportedForProcess(BamoMPCManagerProxy *this, unsigned int a2)
{
  BamoMPCManagerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCManagerProxyImpl::ResendGamepadIsSupportedForProcess(
                  (BamoMPCManagerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
