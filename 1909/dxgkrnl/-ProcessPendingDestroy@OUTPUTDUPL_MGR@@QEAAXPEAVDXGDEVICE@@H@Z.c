/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E9DA0
 * Callers:
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C00E9A80 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C00E9B50 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C014197C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01419D8 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1C0271000 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C02715BC (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C02758E0 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C00460E4 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C027171C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C0279534 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(OUTPUTDUPL_MGR *this, struct DXGDEVICE *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  const GUID *v9; // r8
  _QWORD **v10; // rdi
  _QWORD *v11; // rsi
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 i; // r12
  __int64 v17; // rax
  _QWORD *v18; // rcx

  v5 = *(_QWORD *)this;
  if ( v5 )
  {
    v5 = *(_QWORD *)(v5 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 144)) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v5, a2);
      *(_QWORD *)(v13 + 24) = 2323LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 && *(struct _KTHREAD **)(v7 + 8) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v14 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v12 = *(_DWORD *)(v7 + 16);
      if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v8, &EventBlockThread, v9, v12);
    }
    ExAcquirePushLockExclusiveEx(v7, 0LL);
  }
  v10 = (_QWORD **)((char *)this + 32);
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  v11 = *v10;
  while ( v11 != v10 )
  {
    v15 = v11;
    v11 = (_QWORD *)*v11;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v15) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v15 + 10); i = (unsigned int)(i + 1) )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v15[i + 6]);
      }
    }
    if ( a3 || !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v15) )
    {
      v17 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v18 = (_QWORD *)v15[1], (_QWORD *)*v18 != v15) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v15);
    }
  }
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
