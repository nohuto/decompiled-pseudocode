/*
 * XREFs of ?GetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAMXZ @ 0x1800CA490
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

float __fastcall BamoSystemCursorControllerPrincipal::GetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  float v2; // xmm6_4
  Microsoft::BamoImpl::BamoImplObject *v4; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v4, this[3]);
  v2 = *((float *)this + 12);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v4);
  return v2;
}
