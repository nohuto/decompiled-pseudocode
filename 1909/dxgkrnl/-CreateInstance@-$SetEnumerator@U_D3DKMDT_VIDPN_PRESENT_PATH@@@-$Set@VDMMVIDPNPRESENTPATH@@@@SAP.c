/*
 * XREFs of ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0005D3C
 * Callers:
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C00E67F4 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     ?AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BC7A8 (-AcquireRawDdiEnumeratorCachedPathInfo@DMMVIDPNTOPOLOGY@@QEAAJPEAPEAU_D3DKMDT_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

_QWORD *__fastcall Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x178uLL, 0x4E506456u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *(_DWORD *)PoolWithTag = 305419896;
  PoolWithTag[1] = a1;
  memset(PoolWithTag + 2, 0, 0x168uLL);
  return v3;
}
