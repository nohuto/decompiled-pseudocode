/*
 * XREFs of ?LogValueRemoved@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@@Z @ 0x180110700
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?PropertyCache_RemoveValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18010D420 (-PropertyCache_RemoveValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z.c)
 */

void __fastcall Windows::Internal::Holographic::PropertyCache::LogValueRemoved(
        Windows::Internal::Holographic::PropertyCache *this,
        const struct _GUID *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx

  v4 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::PropertyCache_RemoveValue_(
        v5,
        *((_DWORD *)this + 2),
        (__int64)this + 12,
        (__int64)a2);
    }
  }
}
