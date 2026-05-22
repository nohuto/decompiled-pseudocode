/*
 * XREFs of ?LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180110750
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x18010D308 (-PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_.c)
 */

int __fastcall Windows::Internal::Holographic::PropertyCache::LogValueChanged(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  struct HolographicDriverClientTrace *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h]

  v4 = a3[1] - *a3;
  v6 = HolographicDriverClientTrace::Instance();
  v7 = (_DWORD *)*((_QWORD *)v6 + 1);
  if ( v7 && *v7 )
  {
    HolographicDriverClientTrace::Instance();
    LODWORD(v6) = HolographicDriverClientTrace::PropertyCache_SetValue_(v8, *(_DWORD *)(a1 + 8), a1 + 12, a2, v10, v4);
  }
  return (int)v6;
}
