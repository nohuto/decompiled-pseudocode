/*
 * XREFs of sub_1401AD750 @ 0x1401AD750
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x1401373B0 (MmFreePagesFromMdl.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MmUnmapReservedMapping @ 0x1402A9720 (MmUnmapReservedMapping.c)
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 */

void __fastcall sub_1401AD750(void *a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi

  v2 = (void *)*((_QWORD *)a1 + 1);
  v3 = *(struct _MDL **)a1;
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
    MmUnmapReservedMapping(v2, *((_DWORD *)a1 + 4), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePool(v3);
  }
  memset(a1, 0, 0x20uLL);
  ExFreePool(v4);
}
