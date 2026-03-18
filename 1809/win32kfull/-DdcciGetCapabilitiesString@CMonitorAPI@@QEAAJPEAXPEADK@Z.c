/*
 * XREFs of ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C0254DE8
 * Callers:
 *     NtGdiDDCCIGetCapabilitiesString @ 0x1C02561C0 (NtGdiDDCCIGetCapabilitiesString.c)
 * Callees:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C0254E7C (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C0255E1C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetCapabilitiesString(CMonitorAPI *this, void *a2, char *a3, unsigned int a4)
{
  char *v4; // rbx
  int HandleObject; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = (char *)qword_1C0317778;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, (struct OPM::CMutex *)qword_1C0317778);
  HandleObject = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v4 + 8, a2, &v11);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesString(v11, a3, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  return (unsigned int)HandleObject;
}
