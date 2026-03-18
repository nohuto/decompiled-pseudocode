/*
 * XREFs of ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C0123AB0
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C0123F50 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00852B0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00AF114 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C01239EC (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall COPM::ConfigureProtectedOutput(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a3,
        int a4,
        unsigned __int8 *a5)
{
  PVOID v5; // rdi
  PRKMUTEX *v9; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v5 = P;
  v9 = (PRKMUTEX *)((char *)P + 48);
  OPM::CMutex::Lock((void **)P + 6);
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v5 + 24, a2, &v12);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::Configure(v12, a3, a4, a5);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v9 )
    KeReleaseMutex(*v9, 0);
  return (unsigned int)HandleObject;
}
