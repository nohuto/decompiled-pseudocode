/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1402848A8
 * Callers:
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x14059B630 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1405ADF04 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14028CEC8 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
