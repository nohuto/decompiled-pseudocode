/*
 * XREFs of ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxy@@UEAAJPEAVBamoSystemCursorControllerClientPrincipal@@@Z @ 0x18005D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoSystemCursorControllerClientPrincipal@@@Z @ 0x18005D444 (-EnsureServiceAndRegisterClient@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJPEAVBamoSyste.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerProxy::EnsureServiceAndRegisterClient(
        BamoSystemCursorControllerProxy *this,
        struct BamoSystemCursorControllerClientPrincipal *a2)
{
  BamoSystemCursorControllerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemCursorControllerProxyImpl::EnsureServiceAndRegisterClient(
                  (BamoSystemCursorControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
