/*
 * XREFs of ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0015624
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0008630 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0015098 (VidSchiCheckConditionDeviceCommand.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00810E0 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0081B44 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BD260 (-IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BD2D0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BD300 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(_VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // rax

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    v4 = *(_QWORD *)(v1 + 24);
    if ( *(_BYTE *)(v3 + 28) )
      return 0;
    v5 = *(unsigned __int64 **)(v3 + 64);
    if ( *(_BYTE *)(v3 + 29) )
    {
      if ( *v5 >= v4 )
        return 0;
    }
    else if ( *(_DWORD *)v5 - (int)v4 >= 0 )
    {
      return 0;
    }
  }
  else if ( *(int *)(*((_QWORD *)this + 2) + 8LL) <= 0 )
  {
    return 0;
  }
  return 1;
}
