/*
 * XREFs of ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C006CD2C
 * Callers:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003AFD4 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006E96C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B2034 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00B22BC (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00B2424 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0061330 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006CDEC (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  struct _RTL_AVL_TREE *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct VIDMM_VAD *v13; // rbx
  struct VIDMM_VAD *v14; // rdx
  __int64 v16; // rax
  _BYTE v17[32]; // [rsp+50h] [rbp-28h] BYREF
  struct VIDMM_VAD *v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, this + 7);
  if ( (int)CVirtualAddressAllocator::AllocateVirtualAddressRange(
              (CVirtualAddressAllocator *)this,
              v10,
              a2,
              0LL,
              a4,
              a5,
              a6,
              &v18,
              1u) < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v16);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 3221225473LL;
  }
  else
  {
    v13 = v18;
    v14 = v18;
    *((_DWORD *)v18 + 18) |= 0x800u;
    CVirtualAddressAllocator::InsertVadToReservedList((CVirtualAddressAllocator *)this, v14);
    *a7 = *((_QWORD *)v13 + 3);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 0LL;
  }
}
