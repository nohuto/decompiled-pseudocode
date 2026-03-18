/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14015DD94
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140A0457C (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x140290270 (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
