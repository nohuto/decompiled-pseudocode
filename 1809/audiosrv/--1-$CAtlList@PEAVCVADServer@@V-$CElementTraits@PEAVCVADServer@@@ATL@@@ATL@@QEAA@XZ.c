/*
 * XREFs of ??1?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAA@XZ @ 0x18005FF68
 * Callers:
 *     _dynamic_atexit_destructor_for__g_VADServerList__ @ 0x180070600 (_dynamic_atexit_destructor_for__g_VADServerList__.c)
 * Callees:
 *     <none>
 */

void ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::~CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>()
{
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
}
