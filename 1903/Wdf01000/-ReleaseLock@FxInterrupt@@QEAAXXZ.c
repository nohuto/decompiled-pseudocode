/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C008DA54
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C0002D10 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C0019FC0 (-_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C001A040 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C008DA00 (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C008DE10 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::ReleaseLock(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rax
  __int64 m_ObjectSize; // rax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rcx
  FxWaitLockInternal *v5; // rcx

  if ( this->m_PassiveHandling )
  {
    v5 = &this->m_WaitLock->FxWaitLockInternal;
    v5->m_OwningThread = 0LL;
    KeSetEvent(&v5->m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
    {
      KeReleaseInterruptSpinLock(m_Interrupt, this->m_OldIrql);
    }
    else
    {
      m_ObjectSize = this->m_ObjectSize;
      p_m_Globals = &this->m_Globals;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(*p_m_Globals, 2u, 0xCu, 0x1Du, WPP_InterruptObject_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(*p_m_Globals);
    }
  }
}
