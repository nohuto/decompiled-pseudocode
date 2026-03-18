/*
 * XREFs of ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C002779C
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C006FC70 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B8890 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00017F4 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C398 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

struct _MDL *__fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v2; // rcx

  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this)
    && (v2 = *(struct _VIDMM_GLOBAL_ALLOC **)(v1 + 8), (*(_DWORD *)(*((_QWORD *)v2 + 17) + 80LL) & 0x1000) != 0) )
  {
    return VidMmGetFullMDL(v2, 0LL);
  }
  else
  {
    return 0LL;
  }
}
