/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C01C5240
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0013F70 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     McTemplateK0qqqq @ 0x1C00314FC (McTemplateK0qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0040440 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  struct DXGPROCESS *Current; // rax
  const GUID *v12; // r8

  v8 = a2;
  v9 = *((_QWORD *)this + 14) + 3760LL * a2;
  Current = DXGPROCESS::GetCurrent();
  *a5 = 1;
  if ( !*(_QWORD *)(v9 + 936) || !*((_BYTE *)Current + 322) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 33) )
  {
    *(_DWORD *)(v9 + 944) = a3;
    BLTQUEUE::SetDWMTargetVsync((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 2704 * v8), a3);
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqq(0LL, &EventDWMVsyncCountWait, v12, a3, *(_DWORD *)(v9 + 948), *(_BYTE *)(v9 + 952), a4);
    }
    ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(this, a2, a3, a5);
  }
  return 0LL;
}
