/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C027D5C8
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01F1468 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C027AF14 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C0288098 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C0288238 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  bool v5; // dl
  struct DXGSWAPCHAIN **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rax
  struct DXGFASTMUTEX *const *v12; // rax
  struct DXGFASTMUTEX *v13; // rdi
  int v14; // edi
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2568);
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( !v6 )
    goto LABEL_5;
  v9 = SwapChainAbandonInternal(*v6, v5);
  if ( v9 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = **((_QWORD **)this + 320);
    WdLogEvent5_WdError(v11);
  }
  ObfDereferenceObject(*((PVOID *)this + 320));
  *((_QWORD *)this + 320) = 0LL;
  if ( v9 >= 0 )
  {
LABEL_5:
    v9 = 0;
    if ( a2 )
    {
      v12 = (struct DXGFASTMUTEX *const *)SwapChainOpenInternal(a2);
      *((_QWORD *)this + 320) = v12;
      if ( v12 )
      {
        v13 = *v12;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *v12, 0);
        v14 = *((_DWORD *)v13 + 47);
        if ( v16[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
        *((_DWORD *)this + 657) = v14;
        *((_DWORD *)this + 656) = 1;
      }
      else
      {
        v9 = -1073741823;
      }
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v9;
}
