/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0066880
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00714EC (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0071B98 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0079EA4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B4CF0 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00109F4 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C0027D98 (McTemplateK0ppxxxxxqxx.c)
 *     McTemplateK0pqxx @ 0x1C0027E94 (McTemplateK0pqxx.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005F5BC (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0066AD4 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00714EC (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007CE30 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        const GUID *a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rcx
  struct VIDMM_VAD *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rsi
  const GUID *v10; // r8
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  struct VIDMM_VAD **v16; // rcx
  unsigned int *v17; // rdi
  char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  char **v21; // rax
  struct _RTL_BALANCED_NODE *v22; // rdi
  struct _RTL_BALANCED_NODE *v23; // rax
  const GUID *v24; // r8
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 VidMmAllocFromOwner; // rax
  const GUID *v28; // r8
  __int64 v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+50h] [rbp-38h]
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)a2 + 56);
  v5 = *((_QWORD *)a2 + 7);
  v6 = a2;
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_42;
    v26 = (_QWORD *)*((_QWORD *)a2 + 8);
    if ( (_QWORD *)*v26 != v3 )
      goto LABEL_42;
    *v26 = v5;
    *(_QWORD *)(v5 + 8) = v26;
    *v3 = 0LL;
  }
  v7 = *((unsigned int *)v6 + 18);
  v8 = 0;
  if ( (v7 & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *((_QWORD *)v6 + 3 * v8 + 12);
        if ( (struct VIDMM_VAD *)v9 == (struct VIDMM_VAD *)((char *)v6 + 24 * v8 + 96) )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*(_DWORD *)(v9 + 56) << 28) >> 28, *(_QWORD *)(v9 + 48));
          LODWORD(v30) = (_DWORD)v28;
          McTemplateK0ppxxxxxqxx(
            *(_QWORD *)(v9 + 64),
            &EndGpuVirtualAddressRangeMapping,
            v28,
            this,
            VidMmAllocFromOwner,
            *(_QWORD *)(v9 + 64),
            *(_QWORD *)(v9 + 88),
            *(_QWORD *)(v9 + 96),
            *(_QWORD *)(v9 + 80),
            *(_QWORD *)(v9 + 72),
            v30,
            *(_QWORD *)(v9 + 104),
            *(_QWORD *)(v9 + 112));
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v9, 0, 1u);
      }
      v7 = *((unsigned int *)v6 + 18);
      ++v8;
    }
    while ( v8 < ((*((_DWORD *)v6 + 18) >> 4) & 0x7Fu) );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v29) = v7;
    McTemplateK0pqxx(v7, &DestroyGpuVirtualAddressRange, a3, this, v29, *((_QWORD *)v6 + 3), *((_QWORD *)v6 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v6);
  *((_DWORD *)v6 + 18) &= 0xFFFFFFF0;
  v11 = (char *)v6 + 80;
  while ( 1 )
  {
    v12 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_42;
    v13 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_42;
    *(_QWORD *)v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == v11 )
      break;
    **((_QWORD **)v12 + 2) = 0LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v6 + 6);
  if ( v14 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 3) == *((_QWORD *)v14 - 1) && (v14[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v14 - 10), v10);
    *((_QWORD *)v14 - 1) = *((_QWORD *)v6 + 4);
    v15 = *((_QWORD *)v6 + 5);
    if ( *(struct VIDMM_VAD **)(v15 + 8) != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_42;
    v16 = (struct VIDMM_VAD **)*((_QWORD *)v6 + 6);
    if ( *v16 != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_42;
    *v16 = (struct VIDMM_VAD *)v15;
    *(_QWORD *)(v15 + 8) = v16;
    CVirtualAddressAllocator::FreeVad(v6);
    v6 = (struct VIDMM_VAD *)(v14 - 10);
  }
  v17 = (unsigned int *)*((_QWORD *)v6 + 5);
  v18 = (char *)v6 + 40;
  if ( v17 != (unsigned int *)((char *)this + 24) )
  {
    v19 = *((_QWORD *)v17 - 2);
    if ( *((_QWORD *)v6 + 4) == v19 )
    {
      v10 = (const GUID *)v17[8];
      if ( (v17[8] & 0xF) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v29) = v17[8];
          McTemplateK0pqxx(v19, &DestroyGpuVirtualAddressRange, v10, this, v29, v19, *((_QWORD *)v17 - 1));
        }
        RtlAvlRemoveNode((char *)this + 40, v17 - 10);
        v17[8] &= 0xFFFFFFF0;
        *((_QWORD *)v17 - 2) = *((_QWORD *)v6 + 3);
        v20 = *(_QWORD *)v18;
        if ( *(char **)(*(_QWORD *)v18 + 8LL) == v18 )
        {
          v21 = (char **)*((_QWORD *)v6 + 6);
          if ( *v21 == v18 )
          {
            *v21 = (char *)v20;
            *(_QWORD *)(v20 + 8) = v21;
            CVirtualAddressAllocator::FreeVad(v6);
            v6 = (struct VIDMM_VAD *)(v17 - 10);
            goto LABEL_25;
          }
        }
LABEL_42:
        __fastfail(3u);
      }
    }
  }
LABEL_25:
  LOBYTE(v10) = 0;
  v22 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v31 = *((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 3);
  if ( !v22 )
    goto LABEL_31;
  while ( (int)CompareVadSizeAvl(&v31, v22) < 0 )
  {
    v23 = v22->Children[0];
    if ( !v22->Children[0] )
    {
      LOBYTE(v10) = 0;
      goto LABEL_31;
    }
LABEL_28:
    v22 = v23;
  }
  v23 = v22->Children[1];
  if ( v23 )
    goto LABEL_28;
  LOBYTE(v10) = 1;
LABEL_31:
  RtlAvlInsertNodeEx((char *)this + 40, v22, v10, v6);
  v25 = *((_DWORD *)v6 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v6 + 18) = v25;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v29) = v25;
    McTemplateK0pqxx(v25, &CreateGpuVirtualAddressRange, v24, this, v29, *((_QWORD *)v6 + 3), *((_QWORD *)v6 + 4));
  }
}
