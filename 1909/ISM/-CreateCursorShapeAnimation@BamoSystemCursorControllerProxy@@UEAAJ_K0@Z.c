/*
 * XREFs of ?CreateCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z @ 0x18005B7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?CreateCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x18005B830 (-CreateCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::CreateCursorShapeAnimation(
        BamoSystemCursorControllerProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  BamoSystemCursorControllerProxy *v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v4) = BamoImpl::BamoSystemCursorControllerProxyImpl::CreateCursorShapeAnimation(
                  (BamoSystemCursorControllerProxy *)((char *)v4 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v4;
}
