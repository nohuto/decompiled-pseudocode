/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004B27C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiCancelSuspendAdapterTimer @ 0x1C004A6B8 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C004A91C (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C004AF5C (DpiSetDevicePowerTransitionState.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 511, &LockHandle);
  if ( *((_DWORD *)a1 + 1038) == 2 )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdPower();
    v3[3] = a1;
    v3[4] = 0LL;
    v3[5] = 0LL;
    WdLogEvent5_WdPower(v3);
    *((_DWORD *)a1 + 998) = 1;
    KeResetEvent((PRKEVENT)a1 + 171);
    if ( *((_DWORD *)a1 + 1039) )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdPower();
      v4[3] = a1;
      v4[4] = 0LL;
      v4[5] = 0LL;
      WdLogEvent5_WdPower(v4);
      DpiRequestDevicePowerIrp((__int64)a1, 4);
      DpiSetDevicePowerTransitionState((__int64)a1, 4);
      DpiCancelSuspendAdapterTimer((__int64)a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState((__int64)a1, 3);
    }
  }
  else
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdPower();
    v2[5] = 0LL;
    v2[3] = a1;
    v2[4] = 1LL;
    WdLogEvent5_WdPower(v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
