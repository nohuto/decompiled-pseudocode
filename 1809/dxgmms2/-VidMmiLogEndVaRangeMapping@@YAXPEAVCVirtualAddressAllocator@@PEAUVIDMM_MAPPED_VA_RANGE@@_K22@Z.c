/*
 * XREFs of ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C0081BC8
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00635D4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00109F4 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0027D98 (McTemplateK0ppxxxxxqxx.c)
 */

void __fastcall VidMmiLogEndVaRangeMapping(
        struct CVirtualAddressAllocator *a1,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 VidMmAllocFromOwner; // rax
  int v7; // r10d
  _QWORD *v8; // r11
  const GUID *v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-28h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a2 + 16) << 28) >> 28, *((_QWORD *)a2 + 7));
    v11 = v7;
    McTemplateK0ppxxxxxqxx(
      a5,
      &EndGpuVirtualAddressRangeMapping,
      v9,
      a1,
      VidMmAllocFromOwner,
      v9,
      v10,
      a5,
      v8[11],
      v8[10],
      v11,
      v8[14],
      v8[15]);
  }
}
