/*
 * XREFs of ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0001400
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005DC50 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00826F4 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B8890 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BA0B8 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAddressAllocator::GetNumPde(CVirtualAddressAllocator *this, struct VIDMM_PAGE_DIRECTORY *a2)
{
  int v2; // eax
  __int64 v3; // rdx

  v2 = *(_DWORD *)a2;
  v3 = (*(_DWORD *)a2 >> 7) & 0x1F;
  if ( (v2 & 0x10) != 0 )
    return *(unsigned int *)(32 * v3 + *((_QWORD *)this + 14) + 16);
  else
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40184LL) + 48LL * (v2 & 7) + 1560 * v3 + 88);
}
