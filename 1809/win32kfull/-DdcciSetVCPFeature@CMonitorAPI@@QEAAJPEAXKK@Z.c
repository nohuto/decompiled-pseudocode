/*
 * XREFs of ?DdcciSetVCPFeature@CMonitorAPI@@QEAAJPEAXKK@Z @ 0x1C0255B34
 * Callers:
 *     NtGdiDDCCISetVCPFeature @ 0x1C0256400 (NtGdiDDCCISetVCPFeature.c)
 * Callees:
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x1C0255BC8 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C0255E1C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@QEAAJPEAXPEAPEAVCPhysi.c)
 */

__int64 __fastcall CMonitorAPI::DdcciSetVCPFeature(CMonitorAPI *this, void *a2, unsigned int a3, unsigned int a4)
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
    HandleObject = CPhysicalMonitorHandle::DdcciSetVCPFeature(v11, a3, a4);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  return (unsigned int)HandleObject;
}
