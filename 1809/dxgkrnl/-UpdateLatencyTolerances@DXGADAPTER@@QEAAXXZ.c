/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C002F974
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000FCCC (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C002D7E8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C002DC78 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C002E070 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00BCD10 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00F45DC (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F472C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002D494 (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C002F824 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  PKSPIN_LOCK v2; // rbx
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // rsi
  DXGADAPTER *v10; // rbx
  DXGADAPTER *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+48h] [rbp-10h]

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)&v12, (KSPIN_LOCK *)this + 378, 0);
  if ( *((struct _KTHREAD **)this + 379) != KeGetCurrentThread() )
  {
    v2 = SpinLock;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v2[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v15 = 1;
  }
  if ( *((_QWORD *)this + 365) && *((_DWORD *)this + 34) != 1 )
  {
    v3 = *((_DWORD *)this + 679);
    if ( *((_BYTE *)this + 3002) )
    {
      if ( !v3 )
      {
        v5 = *((_QWORD *)this + 366);
        v6 = *((_QWORD *)this + 372);
LABEL_21:
        if ( *((_BYTE *)this + 3000) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 677), v5);
        v8 = *((_DWORD *)this + 678);
        if ( v8 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v8, v6);
        goto LABEL_25;
      }
      v4 = *((_DWORD *)this + 751);
      if ( v4 )
      {
        if ( v4 != 2 )
        {
          v6 = *((_QWORD *)this + 371);
          if ( v4 == 3 )
            v5 = *((_QWORD *)this + 363);
          else
            v5 = *((_QWORD *)this + 359);
          goto LABEL_21;
        }
        v5 = *((_QWORD *)this + 361);
        goto LABEL_19;
      }
    }
    else
    {
      if ( !v3 || (v7 = *((_DWORD *)this + 751), (unsigned int)(v7 - 2) <= 1) )
      {
        v5 = *((_QWORD *)this + 367);
        v6 = *((_QWORD *)this + 373);
        goto LABEL_21;
      }
      if ( v7 )
      {
        v5 = *((_QWORD *)this + 359);
LABEL_19:
        v6 = *((_QWORD *)this + 371);
        goto LABEL_21;
      }
    }
    v5 = *((_QWORD *)this + 357);
    v6 = *((_QWORD *)this + 370);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)this + 679) )
    v9 = *((_QWORD *)this + 368);
  else
    v9 = *((_QWORD *)this + 369);
  v10 = (DXGADAPTER *)*((_QWORD *)this + 383);
  while ( v10 != (DXGADAPTER *)((char *)this + 3064) )
  {
    v11 = v10;
    v10 = *(DXGADAPTER **)v10;
    if ( v9 == *((_QWORD *)v11 - 7) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v11 - 105), v9);
  }
  if ( v15 )
  {
    v15 = 0;
    SpinLock[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
