/*
 * XREFs of ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C008C414
 * Callers:
 *     ?_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z @ 0x1C00040A0 (-_InterruptThunk@FxInterrupt@@CAEPEAU_KINTERRUPT@@PEAX@Z.c)
 *     ?_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C001A4B0 (-_InterruptDisableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C001A530 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 *     ?InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ @ 0x1C008C3C0 (-InvokeWakeInterruptEvtIsr@FxInterrupt@@QEAAXXZ.c)
 *     ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C008C780 (-_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::ReleaseLock(FxInterrupt *this)
{
  struct _KINTERRUPT *m_Interrupt; // rax
  FxWaitLockInternal *v2; // rcx

  if ( this->m_PassiveHandling )
  {
    v2 = &this->m_WaitLock->FxWaitLockInternal;
    v2->m_OwningThread = 0LL;
    KeSetEvent(&v2->m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
  else
  {
    m_Interrupt = this->m_Interrupt;
    if ( m_Interrupt || (m_Interrupt = this->m_InterruptCaptured) != 0LL )
      KeReleaseInterruptSpinLock(m_Interrupt, this->m_OldIrql);
  }
}
