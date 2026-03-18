/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C023DF28
 * Callers:
 *     NtGdiDDCCIGetCapabilitiesStringLength @ 0x1C023EAC0 (NtGdiDDCCIGetCapabilitiesStringLength.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C023DFA0 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C023E72C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetCapabilitiesStringLength(CMonitorAPI *this, void *a2, unsigned int *a3)
{
  char *v3; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v3 = (char *)qword_1C03270B8;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)qword_1C03270B8);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v3 + 8, a2, &v8);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(v8, a3);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v9);
  return (unsigned int)HandleObject;
}
