/*
 * XREFs of ?GetToggleEnabled@BamoMagnifierClientProxy@@UEAA_NXZ @ 0x180012AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

bool __fastcall BamoMagnifierClientProxy::GetToggleEnabled(BamoMagnifierClientProxy *this)
{
  BamoMagnifierClientProxy *v1; // rbx
  volatile signed __int32 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOBYTE(v1) = *((_BYTE *)v1 + 40);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v3);
  return (char)v1;
}
