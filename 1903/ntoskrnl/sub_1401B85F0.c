/*
 * XREFs of sub_1401B85F0 @ 0x1401B85F0
 * Callers:
 *     <none>
 * Callees:
 *     MmFreePagesFromMdl @ 0x1400EFC40 (MmFreePagesFromMdl.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmUnmapReservedMapping @ 0x1402C1100 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1401B85F0(void *a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rdi
  void *v4; // rsi
  ULONG v5; // edx
  ULONG v6; // edx

  v2 = (void *)*((_QWORD *)a1 + 1);
  v3 = *(struct _MDL **)a1;
  v4 = (void *)*((_QWORD *)a1 + 3);
  if ( v2 )
    MmUnmapReservedMapping(v2, *((_DWORD *)a1 + 4), v3);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePoolWithTag(v3, v5);
  }
  memset(a1, 0, 0x20uLL);
  ExFreePoolWithTag(v4, v6);
}
