/*
 * XREFs of ?DragInProgress@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18005D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DragInProgress@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18005D138 (-DragInProgress@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_K.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::DragInProgress(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v9; // rbx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v9) = BamoImpl::BamoDragManagerClientProxyImpl::DragInProgress(v9 + 8, a2, a3, a4, a5, a6, a7, a8);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13);
  return (unsigned int)v9;
}
