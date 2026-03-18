/*
 * XREFs of ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0214184
 * Callers:
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0226FA0 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::GetRenderHwQueueCount(DXGCONTEXT *this)
{
  char *v1; // r8
  unsigned int v2; // edx
  char *v3; // rcx
  char *v4; // rax

  v1 = (char *)this + 400;
  v2 = 0;
  v3 = (char *)*((_QWORD *)this + 50);
  while ( 1 )
  {
    v4 = 0LL;
    if ( v3 != v1 )
      v4 = v3;
    if ( !v4 )
      break;
    v3 = *(char **)v3;
    ++v2;
  }
  return v2;
}
