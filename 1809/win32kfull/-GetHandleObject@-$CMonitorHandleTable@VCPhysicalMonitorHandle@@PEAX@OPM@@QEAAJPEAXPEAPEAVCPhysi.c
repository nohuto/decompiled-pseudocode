/*
 * XREFs of ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C0255E1C
 * Callers:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C0254DE8 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C02554F0 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 *     ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C0255608 (-DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C0255764 (-DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z.c)
 *     ?DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z @ 0x1C0255B34 (-DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C0255D6C (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C0255E94 (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 *     NtGdiDDCCISaveCurrentSettings @ 0x1C0256390 (NtGdiDDCCISaveCurrentSettings.c)
 * Callees:
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C0255DF4 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 */

__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(
        __int64 a1,
        void *a2,
        OPM::CMonitorPDO **a3)
{
  OPM::CMonitorPDO *v6; // rdi
  OPM::CMonitorPDO *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( OPM::INVALID_MONITOR_HANDLE == a2 || (unsigned __int64)a2 > 0xFFFFFFFF )
    return *(unsigned int *)(a1 + 16);
  if ( (int)OPM::CList<CPhysicalMonitorHandle>::GetElement(a1, (unsigned int)a2, &v7) < 0 )
    return *(unsigned int *)(a1 + 16);
  v6 = v7;
  if ( !OPM::CMonitorPDO::DoesCurrentProcessOwnProtectedOutput(v7) )
    return *(unsigned int *)(a1 + 16);
  *a3 = v6;
  return 0LL;
}
