/*
 * XREFs of ?VAD_DllProcessAttach@@YAHXZ @ 0x18004F900
 * Callers:
 *     DllMain @ 0x180066C34 (DllMain.c)
 * Callees:
 *     <none>
 */

_BOOL8 VAD_DllProcessAttach(void)
{
  return !ATL::CAtlBaseModule::m_bInitFailed;
}
