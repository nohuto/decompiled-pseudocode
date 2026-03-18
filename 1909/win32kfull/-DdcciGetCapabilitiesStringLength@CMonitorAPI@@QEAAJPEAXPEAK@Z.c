/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C026E3F4
 * Callers:
 *     NtGdiDDCCIGetCapabilitiesStringLength @ 0x1C026F0D0 (NtGdiDDCCIGetCapabilitiesStringLength.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C026E478 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C026ED1C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetCapabilitiesStringLength(CMonitorAPI *this, void *a2, unsigned int *a3)
{
  char *v3; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v3 = (char *)qword_1C032A778;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v9, (struct OPM::CMutex *)qword_1C032A778);
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v3 + 8, a2, &v8);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(v8, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v9);
  return (unsigned int)HandleObject;
}
