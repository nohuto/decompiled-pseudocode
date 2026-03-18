/*
 * XREFs of ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00FA12C
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00FA5E0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00728E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00A1164 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00FA1C0 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 */

__int64 __fastcall COPM::GetCOPPCompatibleInformation(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *const a3,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a4)
{
  OPM *v4; // rdi
  PRKMUTEX *v8; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = qword_1C01CD640;
  v8 = (PRKMUTEX *)((char *)qword_1C01CD640 + 48);
  OPM::CMutex::Lock((void **)qword_1C01CD640 + 6);
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v4 + 24, a2, &v11);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetCOPPCompatibleInformation(v11, a3, a4);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v8 )
    KeReleaseMutex(*v8, 0);
  return (unsigned int)HandleObject;
}
