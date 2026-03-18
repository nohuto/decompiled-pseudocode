/*
 * XREFs of ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0084ED4
 * Callers:
 *     VidMmIsAllocationInPresentQueue @ 0x1C0024A60 (VidMmIsAllocationInPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C007FB10 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C00146D8 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationInPresentQueue(
        VIDMM_GLOBAL *this,
        _VIDMM_GLOBAL_ALLOC_NONPAGED **a2,
        unsigned int *a3)
{
  _VIDMM_GLOBAL_ALLOC_NONPAGED **v3; // r10
  bool HasOutstandingPresentReferences; // al
  char v5; // r11
  char v6; // cl
  char v7; // r9

  v3 = a2;
  if ( *((int *)a2 + 26) > 0 )
  {
    v7 = 1;
  }
  else
  {
    HasOutstandingPresentReferences = _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a2[12]);
    v6 = v5;
    if ( HasOutstandingPresentReferences )
      v6 = v5 + 1;
    v7 = v6;
  }
  if ( a3 )
    *a3 = *((_DWORD *)v3[12] + 3);
  return v7;
}
