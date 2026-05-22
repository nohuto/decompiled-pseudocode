/*
 * XREFs of ?GetActivatePolicy@BamoActivationConfigurationInputObjectProxy@@UEAAIXZ @ 0x1800129B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoActivationConfigurationInputObjectProxy::GetActivatePolicy(
        BamoActivationConfigurationInputObjectProxy *this)
{
  BamoActivationConfigurationInputObjectProxy *v1; // rbx
  volatile signed __int32 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = *((_DWORD *)v1 + 10);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v3);
  return (unsigned int)v1;
}
