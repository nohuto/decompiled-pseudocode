/*
 * XREFs of ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C00146D8
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0009750 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C001401C (VidSchiCheckConditionDeviceCommand.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00849F4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0084ED4 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C01B0 (-IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C0220 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C0250 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(_VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // rax

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    v5 = *(_QWORD *)(v1 + 24);
    if ( !*(_BYTE *)(v4 + 28) )
    {
      v6 = *(unsigned __int64 **)(v4 + 64);
      if ( *(_BYTE *)(v4 + 29) )
      {
        if ( *v6 < v5 )
          return 1;
      }
      else if ( *(_DWORD *)v6 - (int)v5 < 0 )
      {
        return 1;
      }
    }
    return 0;
  }
  v2 = *((_QWORD *)this + 2);
  return v2 && *(int *)(v2 + 8) > 0;
}
