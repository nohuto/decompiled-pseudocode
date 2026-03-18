/*
 * XREFs of ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C002E4C4
 * Callers:
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C002E3A8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ @ 0x1C01BE5F4 (-PowerRuntimeComponentIdleStateCallback_Thread@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0xq @ 0x1C002FE6C (McTemplateK0xq.c)
 *     McTemplateK0pqq @ 0x1C002FEE4 (McTemplateK0pqq.c)
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x1C0033790 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C003BFC0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003D034 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentIdleStateCallback_Worker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  char v4; // bp
  __int64 v5; // r14
  unsigned int v7; // esi
  __int64 v9; // rbx
  char v10; // r13
  __int64 v11; // r15
  __int64 v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v4 = 1;
  v5 = a2;
  v7 = a3;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0pqq((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentFState, a3, (_DWORD)this, a2, a3);
    v9 = *((_QWORD *)this + 320) + 520 * v5;
    if ( a4 || !*(_BYTE *)(v9 + 360) )
    {
      if ( DXGADAPTER::IsDxgmms2(this) && *(_DWORD *)(v9 + 208) == 3 )
      {
        v10 = 0;
      }
      else
      {
        v10 = 1;
        *(_DWORD *)(v9 + 344) = v7;
      }
      *(_BYTE *)(v9 + 359) = 1;
      if ( v7 )
      {
        v11 = *(_QWORD *)(v9 + 512);
        if ( v11 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 160), &LockHandle);
          *(_DWORD *)(v11 + 196) = -1;
          *(_BYTE *)(v11 + 224) = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      if ( v10 )
        DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v9 + 4), v7);
    }
    else
    {
      v4 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(this, &Dxgk_SetPowerComponentFStateEnd, a3, this, v5);
    if ( (*(_DWORD *)(v9 + 216) & 2) == 0 )
    {
      *(_BYTE *)(v9 + 359) = 0;
      if ( !a4 )
        PoFxCompleteIdleState(*((_QWORD *)this + 321), (unsigned int)v5);
      if ( v4 )
      {
        if ( !v7 )
        {
          v12 = *(_QWORD *)(v9 + 512);
          if ( v12 )
            DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v12 + 136));
        }
        if ( *(_DWORD *)(v9 + 208) == 7 )
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v9 + 4), v7, 0);
      }
    }
  }
  else if ( !a4 )
  {
    PoFxCompleteIdleState(*((_QWORD *)this + 321), a2);
  }
}
