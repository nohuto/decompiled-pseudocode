/*
 * XREFs of ??1?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAA@XZ @ 0x1400154B0
 * Callers:
 *     _dynamic_atexit_destructor_for__SubmixList__ @ 0x14001B4B0 (_dynamic_atexit_destructor_for__SubmixList__.c)
 * Callees:
 *     <none>
 */

__int64 ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::~CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>()
{
  return ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(&SubmixList);
}
