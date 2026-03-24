/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x140270BA8
 * Callers:
 *     HvlPhase1Initialize @ 0x1401939F4 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x14056B320 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x14057E014 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140278BF4 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
