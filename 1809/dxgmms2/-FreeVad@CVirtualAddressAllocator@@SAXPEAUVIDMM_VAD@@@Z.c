/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0066AD4
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C0061330 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0066880 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C007EEA8 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00107D4 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v1; // edi
  char **v3; // rsi
  char *v4; // rcx
  char *v5; // rax

  v1 = 0;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v3 = (char **)((char *)a1 + 24 * v1 + 96);
      while ( 1 )
      {
        v4 = *v3;
        if ( *v3 == (char *)v3 )
          break;
        if ( *((char ***)v4 + 1) != v3 || (v5 = *(char **)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
          __fastfail(3u);
        *v3 = v5;
        *((_QWORD *)v5 + 1) = v3;
        *(_QWORD *)v4 = 0LL;
        *((_QWORD *)v4 + 1) = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v4 - 8);
      }
      ++v1;
    }
    while ( v1 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a1);
}
