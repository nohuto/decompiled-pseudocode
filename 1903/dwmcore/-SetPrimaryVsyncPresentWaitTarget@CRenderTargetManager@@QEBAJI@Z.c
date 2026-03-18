/*
 * XREFs of ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180189278
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x1800D8490 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(CRenderTargetManager *this, unsigned int a2)
{
  unsigned int v3; // ebx
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  struct CRenderTarget *v5; // rdi
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx

  v3 = -2003304307;
  PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
  v5 = PrimaryRenderTargetNoRef;
  if ( PrimaryRenderTargetNoRef )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)PrimaryRenderTargetNoRef + 48LL))(
           PrimaryRenderTargetNoRef,
           80LL) )
    {
      v7 = (*(__int64 (__fastcall **)(struct CRenderTarget *, _QWORD))(*(_QWORD *)v5 + 288LL))(v5, a2);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802E4A28, 2u, v7, 0x151u, 0LL);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802E4A28, 2u, 0x88982F04, 0x155u, 0LL);
    }
  }
  return v3;
}
