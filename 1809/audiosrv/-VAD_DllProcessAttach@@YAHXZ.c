/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x1800491F0
 * Callers:
 *     DllMain @ 0x180063BBC (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
