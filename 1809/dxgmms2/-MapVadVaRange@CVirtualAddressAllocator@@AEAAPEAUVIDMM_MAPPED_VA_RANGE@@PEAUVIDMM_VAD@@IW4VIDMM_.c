/*
 * XREFs of ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C00634A4
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001E40 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00107D4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0015E04 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00635D4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::MapVadVaRange(
        CVirtualAddressAllocator *a1,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  unsigned __int64 v14; // rbx
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v16; // rbx
  PVOID v17; // rax
  __int64 v18; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax

  v14 = a10;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(a4, a5);
  if ( VidMmGlobalAllocFromOwner )
    v14 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 16);
  v16 = v14 - a6;
  v17 = operator new[](0x88uLL, 0x39346956u, PagedPool);
  if ( v17 )
    v19 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v17,
                                            (__int64)a2,
                                            a9,
                                            a9 + a10,
                                            a3,
                                            a5,
                                            a6,
                                            a4,
                                            a7,
                                            a8,
                                            (v16 >> 12) & -(__int64)(v16 < a10),
                                            a6);
  else
    v19 = 0LL;
  if ( v19 )
  {
    if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(a1, a2, a3, 0LL, v19) >= 0 )
      return v19;
    v24 = WdLogNewEntry5_WdWarning(v21, v20);
    WdLogEvent5_WdWarning(v24);
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((char *)v19);
  }
  else
  {
    _InterlockedIncrement(&dword_1C004D6D4);
    v23 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v23 + 24) = 1866LL;
    WdLogEvent5_WdLowResource(v23);
  }
  return 0LL;
}
