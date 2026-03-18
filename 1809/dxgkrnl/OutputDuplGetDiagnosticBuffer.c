/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C0241030
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00011EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00EDA28 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C023D268 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int DiagnosticBuffer; // edi
  OUTPUTDUPL_MGR **RemoteOutputDuplMgr; // rax
  DXGADAPTER *v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v16; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v18; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v16);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v5, &v15, v4, &v17, &v18);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (OUTPUTDUPL_MGR **)v18;
  }
  else
  {
    RemoteOutputDuplMgr = (OUTPUTDUPL_MGR **)FindRemoteOutputDuplMgr(0LL);
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = 2930LL;
  }
LABEL_9:
  if ( v14 )
    DXGADAPTER::ReleaseReference(v14);
  v14 = 0LL;
  if ( v16 )
    DXGADAPTER::ReleaseReference(v16);
  return DiagnosticBuffer;
}
