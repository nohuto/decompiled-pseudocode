/*
 * XREFs of ?LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ @ 0x1801106C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18010D52C (-PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z.c)
 */

void __fastcall Windows::Internal::Holographic::PropertyCache::LogCleared(
        Windows::Internal::Holographic::PropertyCache *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::PropertyCache_Cleared_(v3, *((_DWORD *)this + 2), (__int64)this + 12);
    }
  }
}
