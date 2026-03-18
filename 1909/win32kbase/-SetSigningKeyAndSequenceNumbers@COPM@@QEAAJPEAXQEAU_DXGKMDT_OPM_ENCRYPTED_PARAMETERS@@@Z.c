/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00AEB9C
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00AE8B0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00852B0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C00AEC2C (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00AF114 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAJPEAXPEAPEAVCOPMProte.c)
 */

__int64 __fastcall COPM::SetSigningKeyAndSequenceNumbers(
        COPM *this,
        void *a2,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a3)
{
  char *v3; // rdi
  PRKMUTEX *v6; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = (char *)P;
  v6 = (PRKMUTEX *)((char *)P + 48);
  OPM::CMutex::Lock((void **)P + 6);
  HandleObject = OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v3 + 24, a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
