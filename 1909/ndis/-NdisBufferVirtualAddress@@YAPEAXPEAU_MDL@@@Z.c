/*
 * XREFs of ?NdisBufferVirtualAddress@@YAPEAXPEAU_MDL@@@Z @ 0x1C0091070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall NdisBufferVirtualAddress(struct _MDL *a1)
{
  if ( (a1->MdlFlags & 5) != 0 )
    return a1->MappedSystemVa;
  else
    return MmMapLockedPagesSpecifyCache(a1, 0, MmCached, 0LL, 0, 0x40000020u);
}
