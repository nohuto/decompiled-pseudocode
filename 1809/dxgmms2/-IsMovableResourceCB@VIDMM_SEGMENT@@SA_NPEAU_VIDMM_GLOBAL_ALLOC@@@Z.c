/*
 * XREFs of ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BD280
 * Callers:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BD2D0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::IsMovableResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  __int64 v2; // rcx
  bool result; // al

  if ( (**((_DWORD **)a1 + 63) & 0x300) != 0 )
    return 0;
  if ( (*((_DWORD *)a1 + 19) & 0x8000100) != 0 )
    return 0;
  v2 = *((_QWORD *)a1 + 13);
  result = 1;
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
      return 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 0x400) != 0 )
    return 0;
  return result;
}
