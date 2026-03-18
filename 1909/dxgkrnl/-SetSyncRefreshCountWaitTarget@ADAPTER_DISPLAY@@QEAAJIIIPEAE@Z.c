/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C01F47B4
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0105B60 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000BEB0 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     McTemplateK0qqqq @ 0x1C0036DCC (McTemplateK0qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0047200 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r14d
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  const GUID *v12; // r8

  v5 = a2;
  v8 = (unsigned int)a2;
  v9 = *((_QWORD *)this + 14) + 3968LL * (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 936) || !*((_BYTE *)Current + 298) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 46) )
  {
    *(_DWORD *)(v9 + 944) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 46) + 8LL) + 2760 * v8), a3);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqq(0LL, &EventDWMVsyncCountWait, v12, a3, *(_DWORD *)(v9 + 948), *(_BYTE *)(v9 + 952), a4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, v5, a3, a5);
  }
  return 0LL;
}
