/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C027D4F0
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C01583D0 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0142380 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C027D4AC (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C0288098 (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  bool v2; // dl
  struct DXGSWAPCHAIN **v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v3 )
  {
    v4 = SwapChainAbandonInternal(*v3, v2);
    v8 = v4;
    if ( v4 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v9 + 24) = **((_QWORD **)this + 320);
      *(_QWORD *)(v9 + 32) = v8;
      WdLogEvent5_WdWarning(v9);
    }
    ObfDereferenceObject(*((PVOID *)this + 320));
    *((_QWORD *)this + 320) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
  *((_BYTE *)this + 401) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
