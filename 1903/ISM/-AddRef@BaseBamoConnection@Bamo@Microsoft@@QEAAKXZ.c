/*
 * XREFs of ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180024278
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x180023160 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180119268 (--0MPCConstantManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::AddRef(Microsoft::Bamo::BaseBamoConnection *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 24LL))(this)
                                                                       + 8));
}
