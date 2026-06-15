/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x1800507C0
 * Callers:
 *     DllMain @ 0x180067C84 (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
