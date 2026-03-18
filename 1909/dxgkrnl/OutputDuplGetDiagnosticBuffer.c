/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C0276864
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00041EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D5A08 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0272C04 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int DiagnosticBuffer; // edi
  OUTPUTDUPL_MGR **RemoteOutputDuplMgr; // rax
  DXGADAPTER *v12; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v14; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v16; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v12);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v5, &v13, v4, &v15, &v16);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (OUTPUTDUPL_MGR **)v16;
  }
  else
  {
    RemoteOutputDuplMgr = (OUTPUTDUPL_MGR **)FindRemoteOutputDuplMgr(0LL, (__int64)a2);
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = 2962LL;
  }
LABEL_9:
  DXGADAPTER_REFERENCE::Assign(&v12, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v14, 0LL);
  return DiagnosticBuffer;
}
