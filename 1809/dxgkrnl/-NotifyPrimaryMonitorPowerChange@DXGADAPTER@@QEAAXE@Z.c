/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C002DC78
 * Callers:
 *     ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C01BE700 (-PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002D494 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002F824 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C002F974 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(KSPIN_LOCK *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // zf
  DXGADAPTER *v7; // rdi
  DXGADAPTER *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  _BYTE v11[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF
  char v14; // [rsp+58h] [rbp-10h]

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v11, this + 378, 1);
  v6 = bTracingEnabled == 0;
  *((_BYTE *)this + 3002) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0xq(v4, &Dxgk_PrimaryMonitorPowerChange, v5, this, a2 != 0);
  this[356] = (KSPIN_LOCK)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 2800;
  DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
  if ( this[321] )
  {
    v7 = (DXGADAPTER *)this[385];
    while ( v7 != (DXGADAPTER *)(this + 385) )
    {
      v8 = v7;
      v9 = *((int *)v7 - 10);
      v7 = *(DXGADAPTER **)v7;
      v10 = *(_QWORD *)(this[356] + 16 * v9);
      if ( v10 != *((_QWORD *)v8 - 7) )
        DXGADAPTER::SetPowerComponentLatencyCB((DXGADAPTER *)this, *((_DWORD *)v8 - 105), v10);
    }
  }
  if ( v14 )
  {
    v14 = 0;
    *(_QWORD *)(v12 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
