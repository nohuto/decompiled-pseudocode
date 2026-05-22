/*
 * XREFs of ?CustomCursorAllocated@BamoCustomCursorControllerClientProxy@@UEAAJAEBUCursorParametersInfo@@_K@Z @ 0x18005C300
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?CustomCursorAllocated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorParametersInfo@@_K@Z @ 0x18005C360 (-CustomCursorAllocated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorParame.c)
 */

__int64 __fastcall BamoCustomCursorControllerClientProxy::CustomCursorAllocated(
        BamoCustomCursorControllerClientProxy *this,
        const struct CursorParametersInfo *a2,
        unsigned __int64 a3)
{
  BamoCustomCursorControllerClientProxy *v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v4) = BamoImpl::BamoCustomCursorControllerClientProxyImpl::CustomCursorAllocated(
                  (BamoCustomCursorControllerClientProxy *)((char *)v4 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v4;
}
