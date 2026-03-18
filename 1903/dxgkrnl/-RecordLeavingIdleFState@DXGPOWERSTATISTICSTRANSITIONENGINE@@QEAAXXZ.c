/*
 * XREFs of ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0043894
 * Callers:
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00325B4 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033CA0 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 * Callees:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C0043A60 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState(KSPIN_LOCK *this)
{
  int v2; // eax
  unsigned int v3; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  v2 = *((_DWORD *)this + 23);
  *((_BYTE *)this + 88) = 0;
  switch ( v2 )
  {
    case 1:
      v3 = *((_DWORD *)this + 24);
      if ( v3 != *((_DWORD *)this + 15) )
LABEL_9:
        DXGPOWERSTATISTICSTRANSITIONENGINE::RequestPState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v3);
      break;
    case 2:
      v3 = *((_DWORD *)this + 24);
      if ( v3 > *((_DWORD *)this + 15) )
        goto LABEL_9;
      break;
    case 3:
      v3 = *((_DWORD *)this + 24);
      if ( v3 < *((_DWORD *)this + 15) )
        goto LABEL_9;
      break;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
