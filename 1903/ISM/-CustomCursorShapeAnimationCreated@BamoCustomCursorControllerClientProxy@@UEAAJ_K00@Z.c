/*
 * XREFs of ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxy@@UEAAJ_K00@Z @ 0x18005C450
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K00@Z @ 0x18005C4BC (-CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K00.c)
 */

__int64 __fastcall BamoCustomCursorControllerClientProxy::CustomCursorShapeAnimationCreated(
        BamoCustomCursorControllerClientProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  BamoCustomCursorControllerClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoCustomCursorControllerClientProxyImpl::CustomCursorShapeAnimationCreated(
                  (BamoCustomCursorControllerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v5;
}
