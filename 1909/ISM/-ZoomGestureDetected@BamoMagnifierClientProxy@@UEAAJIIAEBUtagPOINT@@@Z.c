/*
 * XREFs of ?ZoomGestureDetected@BamoMagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x18006FDC8
 * Callers:
 *     ?ZoomGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z @ 0x18006FF30 (-ZoomGestureDetected@MagnifierClientProxy@@UEAAJIIAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ZoomGestureDetected@BamoMagnifierClientProxyImpl@BamoImpl@@QEAAJIIAEBUtagPOINT@@@Z @ 0x18006FE34 (-ZoomGestureDetected@BamoMagnifierClientProxyImpl@BamoImpl@@QEAAJIIAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall BamoMagnifierClientProxy::ZoomGestureDetected(
        BamoMagnifierClientProxy *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPOINT *a4)
{
  BamoMagnifierClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMagnifierClientProxyImpl::ZoomGestureDetected(
                  (BamoMagnifierClientProxy *)((char *)v5 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v5;
}
