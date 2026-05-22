/*
 * XREFs of ?GetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAMXZ @ 0x1800945E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

float __fastcall BamoSystemCursorControllerPrincipal::GetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  float v2; // xmm6_4
  volatile signed __int32 *v4; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v4, this[3]);
  v2 = *((float *)this + 12);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v4);
  return v2;
}
