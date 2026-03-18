/*
 * XREFs of ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0027CD0
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00757A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B560C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 136) + 80LL) & 0x1000) != 0 )
    return 0LL;
  else
    return *(__int64 *)(v1 + 144) >> 12;
}
