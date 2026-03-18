/*
 * XREFs of ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0011C80
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C0014618 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0016AE0 (imp_WdfDeviceStopIdleActual.c)
 *     ?PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z @ 0x1C0018088 (-PowerPolicyCanChildPowerUp@FxPkgPnp@@QEAAJPEAE@Z.c)
 *     StopIdleWorker @ 0x1C0048778 (StopIdleWorker.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1C00846A0 (-PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0011B20 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::PowerReferenceWorker(
        FxPowerIdleMachine *this,
        unsigned __int8 WaitForD0,
        FxPowerReferenceFlags Flags,
        void *Tag,
        int Line,
        char *File)
{
  unsigned int v6; // edi
  void *v8; // r13
  char v9; // bp
  unsigned __int8 v10; // r15
  unsigned __int64 *p_m_Lock; // r14
  KIRQL v12; // al
  unsigned __int8 m_Flags; // cl
  KIRQL v14; // r12
  _SINGLE_LIST_ENTRY *Next; // rsi
  int v16; // eax
  unsigned int TargetStatesCount; // r8d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v20; // rcx
  const void *_a1; // rdx
  char v22; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *m_TagTracker; // rcx
  _SINGLE_LIST_ENTRY *v26; // rsi
  _FX_DRIVER_GLOBALS *v27; // rcx
  _SINGLE_LIST_ENTRY *v28; // r8
  __int16 v29; // ax
  const void *v30; // r8
  KIRQL v31; // al
  unsigned __int8 v32; // dl
  KIRQL v33; // bp
  _FX_DRIVER_GLOBALS *v34; // r11
  _SINGLE_LIST_ENTRY *v35; // r10
  __int16 v36; // ax
  const void *v37; // r10
  _SINGLE_LIST_ENTRY *v38; // rdx
  __int16 v39; // ax
  const void *v40; // rdx
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-58h]
  unsigned int count; // [rsp+90h] [rbp+8h]

  v6 = 0;
  v8 = Tag;
  v9 = Flags;
  v10 = WaitForD0;
  p_m_Lock = &this->m_Lock.m_Lock;
  count = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  m_Flags = this->m_Flags;
  v14 = v12;
  if ( (m_Flags & 0x10) != 0 )
  {
    v6 = -1073741101;
  }
  else if ( (m_Flags & 0x20) != 0 )
  {
    ++this->m_IoCount;
    Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    count = this->m_IoCount;
    this->m_EventHistory[this->m_EventHistoryIndex] = PowerIdleEventIoIncrement;
    this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
    v16 = 0;
    TargetStatesCount = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
    if ( TargetStatesCount )
    {
      TargetStates = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates;
      while ( TargetStates[v16].PowerIdleEvent != PowerIdleEventIoIncrement )
      {
        if ( ++v16 >= TargetStatesCount )
          goto LABEL_15;
      }
      _a3 = TargetStates[v16].PowerIdleState;
      if ( _a3 != FxIdleMax )
      {
        do
        {
          v20 = Next[12].Next;
          _a1 = 0LL;
          if ( WORD1(v20[1].Next) )
            _a1 = (const void *)((unsigned __int64)Next[12].Next ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_qqLL(
            (_FX_DRIVER_GLOBALS *)Next[2].Next,
            4u,
            0x15u,
            0x11u,
            WPP_PowerIdleStateMachine_cpp_Traceguids,
            _a1,
            v20[18].Next,
            _a3,
            this->m_CurrentIdleState);
          this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
          v22 = this->m_StateHistoryIndex + 1;
          this->m_CurrentIdleState = _a3;
          this->m_StateHistoryIndex = v22 & 7;
          StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
          if ( !StateFunc )
            break;
          _a3 = StateFunc(this);
        }
        while ( _a3 != FxIdleMax );
        v10 = WaitForD0;
        p_m_Lock = &this->m_Lock.m_Lock;
        v8 = Tag;
      }
      v6 = 0;
    }
LABEL_15:
    if ( !KeReadStateEvent(&this->m_D0NotificationEvent.m_Event.m_Event) )
    {
      v6 = 259;
      if ( (v9 & 1) != 0 )
        this->m_Flags |= 0x80u;
    }
  }
  else
  {
    v6 = -1073741101;
  }
  KeReleaseSpinLock(p_m_Lock, v14);
  if ( v6 == 259 && v10 )
  {
    v26 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
    v27 = (_FX_DRIVER_GLOBALS *)v26[2].Next;
    if ( v27->FxVerboseOn )
    {
      v28 = v26[12].Next;
      _a2 = KeGetCurrentThread();
      v29 = WORD1(v28[1].Next);
      v30 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v29 )
        v30 = 0LL;
      WPP_IFR_SF_qq(v27, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v30, _a2);
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_D0NotificationEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
    v31 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
    v32 = this->m_Flags;
    v33 = v31;
    if ( (v32 & 0x30) == 0x20 )
    {
      v6 = 0;
    }
    else
    {
      v34 = (_FX_DRIVER_GLOBALS *)v26[2].Next;
      v6 = -1073741101;
      if ( (v32 & 0x10) != 0 )
      {
        if ( v34->FxVerboseOn )
        {
          v35 = v26[12].Next;
          _a2a = KeGetCurrentThread();
          v36 = WORD1(v35[1].Next);
          v37 = (const void *)((unsigned __int64)v35 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v36 )
            v37 = 0LL;
          WPP_IFR_SF_qid(v34, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v37, (__int64)_a2a, -1073741101);
        }
      }
      else if ( v34->FxVerboseOn )
      {
        v38 = v26[12].Next;
        _a2b = KeGetCurrentThread();
        v39 = WORD1(v38[1].Next);
        v40 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v39 )
          v40 = 0LL;
        WPP_IFR_SF_qid(v34, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v40, (__int64)_a2b, -1073741101);
      }
      --this->m_IoCount;
      FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
    }
    KeReleaseSpinLock(p_m_Lock, v33);
  }
  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker && (!v6 || v6 == 259) )
    FxTagTracker::UpdateTagHistory(m_TagTracker, v8, Line, File, TagAddRef, count);
  return v6;
}
