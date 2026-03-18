/*
 * XREFs of ?UncommitParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B0260
 * Callers:
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C006D958 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UncommitParavirtualizedAllocationOnHost(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  struct _MDL *v2; // rcx

  v2 = (struct _MDL *)*((_QWORD *)a1 + 65);
  if ( v2 )
  {
    MmFreePagesFromMdl(v2);
    ExFreePoolWithTag(*((PVOID *)a1 + 65), 0);
    *((_QWORD *)a1 + 65) = 0LL;
  }
}
