/*
 * XREFs of ?AttachApplication@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoCustomCursorControllerClientPrincipal@@@Z @ 0x18005B510
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?AttachApplication@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoCustomCursorControllerClientPrincipal@@@Z @ 0x18005B574 (-AttachApplication@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoCustomCursorContro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerProxy::AttachApplication(
        BamoSystemCursorControllerProxy *this,
        struct BamoCustomCursorControllerClientPrincipal *a2)
{
  BamoSystemCursorControllerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemCursorControllerProxyImpl::AttachApplication(
                  (BamoSystemCursorControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
