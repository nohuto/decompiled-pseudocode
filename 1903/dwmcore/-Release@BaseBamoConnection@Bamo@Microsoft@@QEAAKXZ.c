/*
 * XREFs of ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180177B7C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E08E0 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800E133C (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800E17B0 (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18017781C (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801898DC (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::Release(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 (__fastcall ***v1)(_QWORD); // rax

  v1 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 24LL))(this);
  return (**v1)(v1);
}
