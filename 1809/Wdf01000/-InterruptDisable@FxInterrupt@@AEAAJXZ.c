/*
 * XREFs of ?InterruptDisable@FxInterrupt@@AEAAJXZ @ 0x1C0013350
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C00131E4 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxInterrupt::InterruptDisable(FxInterrupt *this)
{
  __int64 result; // rax
  FxInterruptEnableParameters params; // [rsp+20h] [rbp-18h] BYREF

  result = 0LL;
  params.Interrupt = this;
  params.ReturnVal = 0;
  if ( this->m_EvtInterruptDisable )
  {
    KeSynchronizeExecution(this->m_Interrupt, FxInterrupt::_InterruptDisableThunk, &params);
    return (unsigned int)params.ReturnVal;
  }
  return result;
}
