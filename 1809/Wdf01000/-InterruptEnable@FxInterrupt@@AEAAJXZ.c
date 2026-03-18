/*
 * XREFs of ?InterruptEnable@FxInterrupt@@AEAAJXZ @ 0x1C0013450
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C0013398 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxInterrupt::InterruptEnable(FxInterrupt *this)
{
  __int64 result; // rax
  FxInterruptEnableParameters params; // [rsp+20h] [rbp-18h] BYREF

  result = 0LL;
  params.Interrupt = this;
  params.ReturnVal = 0;
  if ( this->m_EvtInterruptEnable )
  {
    KeSynchronizeExecution(this->m_Interrupt, FxInterrupt::_InterruptEnableThunk, &params);
    return (unsigned int)params.ReturnVal;
  }
  return result;
}
