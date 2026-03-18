/*
 * XREFs of ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B280
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0057D44 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchThreadThunk(char *Parameter, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int64 *v5; // rdi
  unsigned __int8 v6; // al
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  FxVerifierLock *v10; // rcx
  FxVerifierLock *v11; // rcx
  FxVerifierLock *v12; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Parameter + 2);
  if ( v4->FxVerboseOn )
    WPP_IFR_SF_(v4, 5u, 0xDu, 0x68u, WPP_FxIoQueue_cpp_Traceguids);
  if ( Parameter[24] < 0 && (v10 = (FxVerifierLock *)*((_QWORD *)Parameter - 5)) != 0LL )
  {
    FxVerifierLock::Lock(v10, &PreviousIrql, a3);
    v6 = PreviousIrql;
    v5 = (unsigned __int64 *)(Parameter + 112);
  }
  else
  {
    v5 = (unsigned __int64 *)(Parameter + 112);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Parameter + 14);
    PreviousIrql = v6;
  }
  Parameter[866] = 0;
  FxIoQueue::DispatchEvents((FxIoQueue *)Parameter, v6, 0LL, v7);
  if ( Parameter[24] < 0 && (v11 = (FxVerifierLock *)*((_QWORD *)Parameter - 5)) != 0LL )
    FxVerifierLock::Lock(v11, &PreviousIrql, v8);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(v5);
  if ( Parameter[142]
    || !Parameter[866]
    || !FxSystemWorkItem::EnqueueWorker(
          *((FxSystemWorkItem **)Parameter + 107),
          FxIoQueue::_DeferredDispatchThreadThunk,
          Parameter,
          1u) )
  {
    *(_WORD *)(Parameter + 865) = 0;
  }
  if ( Parameter[24] < 0 && (v12 = (FxVerifierLock *)*((_QWORD *)Parameter - 5)) != 0LL )
    FxVerifierLock::Unlock(v12, PreviousIrql, v9);
  else
    KeReleaseSpinLock(v5, PreviousIrql);
}
