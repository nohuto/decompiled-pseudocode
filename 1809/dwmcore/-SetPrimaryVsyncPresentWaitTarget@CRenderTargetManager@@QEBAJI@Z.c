/*
 * XREFs of ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180152BD8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18007A73C (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x18015B8DC (-SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z.c)
 */

__int64 __fastcall CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(CRenderTargetManager *this, unsigned int a2)
{
  unsigned int v3; // ebx
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  CHwndRenderTarget *v5; // rdi
  __int64 v6; // rcx
  int refreshed; // eax
  __int64 v8; // rcx

  v3 = -2003304307;
  PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
  v5 = PrimaryRenderTargetNoRef;
  if ( PrimaryRenderTargetNoRef )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)PrimaryRenderTargetNoRef + 48LL))(
           PrimaryRenderTargetNoRef,
           76LL) )
    {
      refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(v5, a2, 1);
      v3 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BC120, 2u, refreshed, 0x153u);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802BC120, 2u, -2003292412, 0x157u);
    }
  }
  return v3;
}
