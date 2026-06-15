/*
 * XREFs of ?SilenceAndRevokePLMExemption@CProcess@@UEAAJXZ @ 0x1800150F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001F91C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

__int64 __fastcall CProcess::SilenceAndRevokePLMExemption(struct CApplication **this)
{
  if ( g_ApplicationManager )
    CApplicationManager::SilenceAndRevokePLMExemption(g_ApplicationManager, this[30]);
  return 0LL;
}
