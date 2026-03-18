/*
 * XREFs of ?DdcciGetVCPFeature@CMonitorAPI@@QEAAJPEAXKPEAW4_MC_VCP_CODE_TYPE@@PEAK2@Z @ 0x1C023E178
 * Callers:
 *     NtGdiDDCCIGetVCPFeature @ 0x1C023EB80 (NtGdiDDCCIGetVCPFeature.c)
 * Callees:
 *     ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z @ 0x1C023E20C (-DdcciGetVCPFeature@CPhysicalMonitorHandle@@QEAAJKPEAW4_MC_VCP_CODE_TYPE@@PEAK1@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C023E72C (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetVCPFeature(
        CMonitorAPI *this,
        void *a2,
        unsigned int a3,
        enum _MC_VCP_CODE_TYPE *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  char *v6; // rbx
  int HandleObject; // ebx
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = this;
  v6 = (char *)qword_1C03270B8;
  CAutoMutex::CAutoMutex((CAutoMutex *)v12, (struct CMutex *)qword_1C03270B8);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v6 + 8, a2, &v13);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetVCPFeature(v13, a3, a4, a5, a6);
  CAutoMutex::~CAutoMutex((CAutoMutex *)v12);
  return (unsigned int)HandleObject;
}
