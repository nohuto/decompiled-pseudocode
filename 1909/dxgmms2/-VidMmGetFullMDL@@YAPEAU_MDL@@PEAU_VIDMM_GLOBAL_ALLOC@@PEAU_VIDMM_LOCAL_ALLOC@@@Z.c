/*
 * XREFs of ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0A8
 * Callers:
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C002779C (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C610 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0070278 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00846B0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00861B0 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C009179C (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C00ABD14 (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACB74 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00ACC0C (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00AD1EC (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0564 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00B1E20 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B872C (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BC330 (-MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ @ 0x1C00BC890 (-RestoreFromPurge@VIDMM_APERTURE_SEGMENT@@UEAAXXZ.c)
 *     ?UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00BCC50 (-UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

struct _MDL *__fastcall VidMmGetFullMDL(struct _VIDMM_GLOBAL_ALLOC *a1, struct _VIDMM_LOCAL_ALLOC *a2)
{
  struct _MDL *result; // rax

  result = (struct _MDL *)*((_QWORD *)a1 + 14);
  if ( result )
    return *(struct _MDL **)&result->Size;
  if ( (*((_DWORD *)a1 + 20) & 0xA000) != 0 )
    return (struct _MDL *)*((_QWORD *)a1 + 65);
  if ( !a2 )
    a2 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 13);
  if ( *((_QWORD *)a2 + 3) )
    return (struct _MDL *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 88LL))(
                            *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
                            *((_QWORD *)a2 + 3));
  result = (struct _MDL *)*((_QWORD *)a2 + 10);
  if ( result )
    return *(struct _MDL **)&result->Size;
  return result;
}
