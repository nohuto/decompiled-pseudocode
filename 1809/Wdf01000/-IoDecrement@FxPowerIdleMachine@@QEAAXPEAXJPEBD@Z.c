/*
 * XREFs of ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0012670
 * Callers:
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0017460 (imp_WdfDeviceResumeIdleActual.c)
 *     ?PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ @ 0x1C00182D8 (-PowerPolicyChildPoweredDown@FxPkgPnp@@QEAAXXZ.c)
 *     ResumeIdleWorker @ 0x1C00486AC (ResumeIdleWorker.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0083C64 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C0084678 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxPowerIdleMachine::IoDecrement(FxPowerIdleMachine *this, void *Tag, int Line, const char *File)
{
  _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned __int64 *p_m_Lock; // rbp
  const char *v7; // r15
  int v8; // r12d
  _FX_DRIVER_GLOBALS *v10; // rsi
  KIRQL v11; // r14
  __int64 m_EventHistoryIndex; // rax
  unsigned int v13; // edi
  _SINGLE_LIST_ENTRY *v14; // rsi
  int v15; // eax
  unsigned int TargetStatesCount; // r8d
  const FxPowerIdleTargetState *TargetStates; // rdx
  FxPowerIdleStates _a3; // edi
  _SINGLE_LIST_ENTRY *v19; // rcx
  const void *_a1; // rdx
  char v21; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxTagTracker *m_TagTracker; // rcx
  _SINGLE_LIST_ENTRY *v24; // rax
  const void *v25; // rdx
  bool v26; // zf
  _SINGLE_LIST_ENTRY *_a2; // rax
  unsigned int v28; // edx
  unsigned int v29; // [rsp+90h] [rbp+8h]

  Next = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  p_m_Lock = &this->m_Lock.m_Lock;
  v7 = File;
  v8 = Line;
  v10 = (_FX_DRIVER_GLOBALS *)Next[2].Next;
  v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  if ( !this->m_IoCount )
  {
    v24 = Next[12].Next;
    v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v26 = WORD1(v24[1].Next) == 0;
    _a2 = v24[18].Next;
    if ( v26 )
      v25 = 0LL;
    WPP_IFR_SF_qq(v10, 2u, 0xCu, 0xFu, WPP_PowerIdleStateMachine_cpp_Traceguids, v25, _a2);
    if ( v10->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v10, v28, 0xBu) || v10->FxVerifyDownlevel) )
    {
      FxVerifierDbgBreakPoint(v10);
    }
  }
  m_EventHistoryIndex = this->m_EventHistoryIndex;
  v13 = --this->m_IoCount;
  v14 = this[1].m_PowerTimeoutTimer.m_Timer.TimerDpc.DpcListEntry.Next;
  this->m_EventHistory[m_EventHistoryIndex] = PowerIdleEventIoDecrement;
  v29 = v13;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v15 = 0;
  TargetStatesCount = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStatesCount;
  if ( TargetStatesCount )
  {
    TargetStates = FxPowerIdleMachine::m_StateTable[this->m_CurrentIdleState - 1].TargetStates;
    while ( TargetStates[v15].PowerIdleEvent != PowerIdleEventIoDecrement )
    {
      if ( ++v15 >= TargetStatesCount )
        goto LABEL_14;
    }
    _a3 = TargetStates[v15].PowerIdleState;
    if ( _a3 != FxIdleMax )
    {
      do
      {
        v19 = v14[12].Next;
        _a1 = 0LL;
        if ( WORD1(v19[1].Next) )
          _a1 = (const void *)((unsigned __int64)v14[12].Next ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqLL(
          (_FX_DRIVER_GLOBALS *)v14[2].Next,
          4u,
          0x15u,
          0x11u,
          WPP_PowerIdleStateMachine_cpp_Traceguids,
          _a1,
          v19[18].Next,
          _a3,
          this->m_CurrentIdleState);
        this->m_StateHistory[this->m_StateHistoryIndex] = _a3;
        v21 = this->m_StateHistoryIndex + 1;
        this->m_CurrentIdleState = _a3;
        this->m_StateHistoryIndex = v21 & 7;
        StateFunc = FxPowerIdleMachine::m_StateTable[_a3 - 1].StateFunc;
        if ( !StateFunc )
          break;
        _a3 = StateFunc(this);
      }
      while ( _a3 != FxIdleMax );
      v7 = File;
      p_m_Lock = &this->m_Lock.m_Lock;
      v8 = Line;
    }
    v13 = v29;
  }
LABEL_14:
  KeReleaseSpinLock(p_m_Lock, v11);
  m_TagTracker = this->m_TagTracker;
  if ( m_TagTracker )
    FxTagTracker::UpdateTagHistory(m_TagTracker, Tag, v8, v7, TagRelease, v13);
}
