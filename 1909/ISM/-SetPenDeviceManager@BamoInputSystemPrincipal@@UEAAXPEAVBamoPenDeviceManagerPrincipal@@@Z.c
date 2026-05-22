/*
 * XREFs of ?SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180065720
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetPenDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180065780 (-SetPenDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoPenDeviceManagerPrincip.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoInputSystemPrincipal::SetPenDeviceManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoPenDeviceManagerPrincipal *a2)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v4, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetPenDeviceManager((BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v4);
}
