/*
 * XREFs of _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E11E0
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E1440 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

__int64 __fastcall lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_MGR *this,
        PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v11; // rax
  OUTPUTDUPL_MGR *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v14 + 24) = 1475LL;
      WdLogEvent5_WdAssertion(v14);
    }
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[13]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2, 0);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 77);
  if ( !v8
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId)) == 0LL) )
  {
    v15 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v15 + 24) = 3682LL;
    goto LABEL_15;
  }
  v11 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v11 )
  {
    v15 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v15 + 24) = 3689LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 0LL;
  }
  v12 = *(OUTPUTDUPL_MGR **)(v11 + 40);
  if ( v12 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v12, (struct DXGDEVICE *)a2, 0);
  return 0LL;
}
