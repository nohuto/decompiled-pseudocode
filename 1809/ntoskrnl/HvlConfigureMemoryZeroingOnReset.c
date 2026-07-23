/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x140270D98
 * Callers:
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x14056C320 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x14057F014 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140278DE4 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
