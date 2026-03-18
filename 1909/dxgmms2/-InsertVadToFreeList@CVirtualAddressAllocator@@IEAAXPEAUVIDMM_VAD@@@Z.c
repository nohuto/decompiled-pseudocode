/*
 * XREFs of ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0076468
 * Callers:
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005EF0C (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C007618C (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 * Callees:
 *     McTemplateK0pqxx @ 0x1C0027998 (McTemplateK0pqxx.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007FC78 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToFreeList(CVirtualAddressAllocator *this, struct VIDMM_VAD *a2)
{
  char v2; // bl
  __int64 v3; // r8
  struct _RTL_BALANCED_NODE *v5; // rdi
  struct _RTL_BALANCED_NODE *v7; // rax
  const GUID *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 3);
  v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v10 = v3;
  if ( !v5 )
    goto LABEL_8;
  while ( (int)CompareVadSizeAvl(&v10, v5) < 0 )
  {
    v7 = v5->Children[0];
    if ( !v5->Children[0] )
      goto LABEL_8;
LABEL_4:
    v5 = v7;
  }
  v7 = v5->Children[1];
  if ( v7 )
    goto LABEL_4;
  v2 = 1;
LABEL_8:
  LOBYTE(v3) = v2;
  RtlAvlInsertNodeEx((char *)this + 40, v5, v3, a2);
  v9 = *((_DWORD *)a2 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)a2 + 18) = v9;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0pqxx(v9, &CreateGpuVirtualAddressRange, v8, this, v9, *((_QWORD *)a2 + 3), *((_QWORD *)a2 + 4));
}
