/*
 * XREFs of PsIumResumeAfterHibernate @ 0x140142938
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x14027B9F0 (VslRegisterLogPages.c)
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
