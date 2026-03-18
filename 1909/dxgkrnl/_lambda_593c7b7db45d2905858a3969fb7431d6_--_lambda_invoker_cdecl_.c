/*
 * XREFs of _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E9A80
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F6790 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E9DA0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 */

__int64 __fastcall lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_MGR *this,
        PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rdi
  __int64 v12; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v15; // rcx
  OUTPUTDUPL_MGR *v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v18 + 24) = 1496LL;
      WdLogEvent5_WdAssertion(v18);
    }
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[13]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2, 0);
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 74);
  if ( v11 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v19 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v19 + 24) = 3894LL;
LABEL_17:
    WdLogEvent5_WdError(v19);
    return 0LL;
  }
  v15 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v9, v12);
    *(_QWORD *)(v19 + 24) = 3901LL;
    goto LABEL_17;
  }
  v16 = *(OUTPUTDUPL_MGR **)(v15 + 40);
  if ( v16 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v16, (struct DXGDEVICE *)a2, 0);
  return 0LL;
}
