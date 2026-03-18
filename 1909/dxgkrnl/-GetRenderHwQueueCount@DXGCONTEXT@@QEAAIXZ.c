/*
 * XREFs of ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C0248350
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C022F5CC (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE@@_N@Z @ 0x1C025BFC8 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@KPEAUVIDSCH_SUBMIT_DATA_BASE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::GetRenderHwQueueCount(DXGCONTEXT *this)
{
  char *v1; // r8
  unsigned int v2; // edx
  char *v3; // rcx
  char *v4; // rax

  v1 = (char *)this + 416;
  v2 = 0;
  v3 = (char *)*((_QWORD *)this + 52);
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
