/*
 * XREFs of ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0077768
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007618C (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00777B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     McTemplateK0pqxx @ 0x1C0027998 (McTemplateK0pqxx.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVadFromFreeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        const GUID *a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 18);
    McTemplateK0pqxx(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v5,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  }
  RtlAvlRemoveNode((char *)this + 40, a2);
  *((_DWORD *)a2 + 18) &= 0xFFFFFFF0;
}
