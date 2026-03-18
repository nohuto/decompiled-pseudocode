/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E8C30
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall operator new[](SIZE_T dwBytes, const struct std::nothrow_t *a2)
{
  SIZE_T v2; // r8

  v2 = 1LL;
  if ( dwBytes )
    v2 = dwBytes;
  return HeapAlloc(WPF::g_processHeap, 0, v2);
}
