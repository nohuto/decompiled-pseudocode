/*
 * XREFs of ?InsertGPUSignal@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286D14
 * Callers:
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0287B4C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C022F2BC (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286FBC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUSignal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // rbp
  DXGDEVICE *v6; // rcx
  __int64 v9; // rax
  struct DXGPROCESS *v10; // rsi
  __int64 v11; // rax
  bool v12; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18[4]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v19[64]; // [rsp+70h] [rbp-138h] BYREF

  v5 = a4;
  v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v9 + 24) = 3332LL;
    WdLogEvent5_WdAssertion(v9);
    v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)v6 + 5);
  if ( v10 )
  {
    DXGDEVICE::GetContexts(v6, v18, v19);
    if ( v18[0] )
    {
      return SignalSynchronizationObjectInternal(
               1LL,
               (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 14,
               0LL,
               v18[0],
               v19,
               0LL,
               v5,
               0LL,
               v10,
               0,
               1);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdError(v17);
      return 3221225473LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v6, a2, a3);
    *(_QWORD *)(v11 + 24) = 3338LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this, v12);
    return 3221225485LL;
  }
}
