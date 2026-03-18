/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000B780
 * Callers:
 *     imp_WdfTimerStart @ 0x1C000B720 (imp_WdfTimerStart.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

BOOLEAN __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime, unsigned __int8 a3)
{
  char v5; // bp
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r14
  unsigned int v9; // ecx
  __int64 m_TolerableDelay; // r9
  BOOLEAN v11; // al
  unsigned __int8 v12; // r8
  BOOLEAN v13; // bl
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r8
  void (__fastcall *m_Callback)(WDFTIMER__ *); // rcx
  const void *_a1; // rcx
  const void *v19; // rcx
  void (__fastcall *v20)(WDFTIMER__ *); // rcx
  FxObject *m_CallbackLockObject; // rax
  void (__fastcall *v22)(WDFTIMER__ *); // rcx
  void (__fastcall *v23)(WDFTIMER__ *); // rcx
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]

  v5 = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Callback = this[-1].m_Callback) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Callback, irql, a3);
    v8 = irql[0];
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql[0] = v8;
  }
  if ( this->m_RunningDown )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else if ( this->m_StopThread )
  {
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v19 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 2u, 0x12u, 0x10u, WPP_FxTimer_cpp_Traceguids, v19, this->m_StopThread);
    this->m_StartAborted = 1;
  }
  else
  {
    v5 = 1;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = this[-1].m_Callback) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v20, v8, v7);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
  if ( !v5 )
    return 0;
  v9 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_CallbackLockObject = this[-1].m_CallbackLockObject;
    if ( m_CallbackLockObject )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_CallbackLockObject,
        this,
        629,
        "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
        TagAddRef,
        v9);
  }
  m_TolerableDelay = this->m_TolerableDelay;
  if ( this->m_Timer.m_Timer.m_IsExtTimer )
  {
    v25 = 0LL;
    v26 = 0LL;
    if ( (_DWORD)m_TolerableDelay == -1 )
      v26 = -1LL;
    else
      v26 = 10000 * m_TolerableDelay;
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
            this->m_Timer.m_Timer.m_KernelExTimer,
            (_LARGE_INTEGER)DueTime.QuadPart,
            10000LL * this->m_Timer.m_Timer.m_Period,
            &v25);
  }
  else
  {
    v11 = KeSetCoalescableTimer(
            &this->m_Timer.m_Timer.KernelTimer,
            DueTime,
            this->m_Timer.m_Timer.m_Period,
            m_TolerableDelay,
            &this->m_Timer.m_Timer.TimerDpc);
  }
  v13 = v11;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v22 = this[-1].m_Callback) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)v22, irql, v12);
    v14 = irql[0];
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    v14 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  if ( this->m_StopThread )
    this->m_StopAgain = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v23 = this[-1].m_Callback) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v23, v14, v15);
  else
    KeReleaseSpinLock(p_m_Lock, v14);
  this->Release(this, this, 646, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  return v13;
}
