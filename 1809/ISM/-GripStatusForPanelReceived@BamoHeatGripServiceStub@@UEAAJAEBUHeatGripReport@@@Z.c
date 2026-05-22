/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800393B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180039624 (-GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z.c)
 */

__int64 __fastcall BamoHeatGripServiceStub::GripStatusForPanelReceived(
        BamoHeatGripServiceStub *this,
        const struct HeatGripReport *a2)
{
  BamoHeatGripServiceStub *v3; // rbx
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v3) = BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
                  (BamoHeatGripServiceStub *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v5);
  return (unsigned int)v3;
}
