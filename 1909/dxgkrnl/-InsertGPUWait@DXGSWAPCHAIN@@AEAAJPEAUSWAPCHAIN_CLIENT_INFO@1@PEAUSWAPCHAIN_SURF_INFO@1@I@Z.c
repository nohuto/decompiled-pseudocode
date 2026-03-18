/*
 * XREFs of ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0286E60
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C0285BAC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C022F2BC (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286FBC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUWait(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // r14
  DXGDEVICE *v6; // rcx
  __int64 v9; // rax
  struct DXGPROCESS *v10; // rbp
  __int64 v11; // rax
  bool v12; // dl
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19[4]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v20[64]; // [rsp+60h] [rbp-138h] BYREF

  v5 = a4;
  v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v9 + 24) = 3383LL;
    WdLogEvent5_WdAssertion(v9);
    v6 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)v6 + 5);
  if ( v10 )
  {
    DXGDEVICE::GetContexts(v6, v19, v20);
    if ( v19[0] )
    {
      v18 = 0LL;
      do
      {
        result = WaitForSynchronizationObjectFromGpu(
                   1u,
                   (unsigned int *)a3 + 8 * *((int *)a2 + 7) + 14,
                   0LL,
                   v5,
                   v20[v18],
                   v10,
                   0,
                   1,
                   0,
                   0);
        if ( (int)result < 0 )
          break;
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < v19[0] );
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
    *(_QWORD *)(v11 + 24) = 3389LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this, v12);
    return 3221225485LL;
  }
  return result;
}
