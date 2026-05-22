/*
 * XREFs of ?OnAugmentedInputEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@45678@_JAEBUHitObjectMsg@45678@@Z @ 0x18005F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEventType@Internal@Spatial@Input@UI@Windows@@AEBUAugmentedInputDataMsg@56789@_JAEBUHitObjectMsg@56789@@Z @ 0x18005F740 (-OnAugmentedInputEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4InputEvent.c)
 */

__int64 __fastcall BamoMPCInputObjectProxy::OnAugmentedInputEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v7) = BamoImpl::BamoMPCInputObjectProxyImpl::OnAugmentedInputEvent(v7 + 8, a2, a3, a4, a5, a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11);
  return (unsigned int)v7;
}
