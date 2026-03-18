/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x140284608
 * Callers:
 *     HvlPhase1Initialize @ 0x14019E708 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x14059B610 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1405ADEE4 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14028CC28 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
