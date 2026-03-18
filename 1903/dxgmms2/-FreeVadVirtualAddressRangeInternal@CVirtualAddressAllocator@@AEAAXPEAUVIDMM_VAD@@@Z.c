/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00776B0
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00630AC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C006A82C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006BE60 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0074330 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082944 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B81A4 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00028CC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C002789C (McTemplateK0ppxxxxxqxx.c)
 *     McTemplateK0pqxx @ 0x1C0027998 (McTemplateK0pqxx.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C006A82C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0077668 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C00778FC (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007EB48 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        const GUID *a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rcx
  struct VIDMM_VAD *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  const GUID *v10; // r8
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rbx
  _DWORD *v15; // rsi
  char *v16; // rbx
  __int64 v17; // rcx
  char **v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rbx
  struct _RTL_BALANCED_NODE *v20; // rax
  const GUID *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  struct VIDMM_VAD **v24; // rcx
  _QWORD *v25; // rdx
  __int64 VidMmAllocFromOwner; // rax
  const GUID *v27; // r8
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+50h] [rbp-38h]
  __int64 v30; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)a2 + 56);
  v5 = *((_QWORD *)a2 + 7);
  v6 = a2;
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_35;
    v25 = (_QWORD *)*((_QWORD *)a2 + 8);
    if ( (_QWORD *)*v25 != v3 )
      goto LABEL_35;
    *v25 = v5;
    *(_QWORD *)(v5 + 8) = v25;
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
          LODWORD(v29) = (_DWORD)v27;
          McTemplateK0ppxxxxxqxx(
            *(_QWORD *)(v9 + 64),
            &EndGpuVirtualAddressRangeMapping,
            v27,
            this,
            VidMmAllocFromOwner,
            *(_QWORD *)(v9 + 64),
            *(_QWORD *)(v9 + 88),
            *(_QWORD *)(v9 + 96),
            *(_QWORD *)(v9 + 80),
            *(_QWORD *)(v9 + 72),
            v29,
            *(_QWORD *)(v9 + 104),
            *(_QWORD *)(v9 + 112));
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v9, 0, 1);
      }
      v7 = *((unsigned int *)v6 + 18);
      ++v8;
    }
    while ( v8 < ((*((_DWORD *)v6 + 18) >> 4) & 0x7Fu) );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v28) = v7;
    McTemplateK0pqxx(v7, &DestroyGpuVirtualAddressRange, a3, this, v28, *((_QWORD *)v6 + 3), *((_QWORD *)v6 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v6);
  *((_DWORD *)v6 + 18) &= 0xFFFFFFF0;
  v11 = (char *)v6 + 80;
  while ( 1 )
  {
    v12 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
      goto LABEL_35;
    v13 = *(_QWORD *)v12;
    if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
      goto LABEL_35;
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
    v23 = *((_QWORD *)v6 + 5);
    if ( *(struct VIDMM_VAD **)(v23 + 8) != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_35;
    v24 = (struct VIDMM_VAD **)*((_QWORD *)v6 + 6);
    if ( *v24 != (struct VIDMM_VAD *)((char *)v6 + 40) )
      goto LABEL_35;
    *v24 = (struct VIDMM_VAD *)v23;
    *(_QWORD *)(v23 + 8) = v24;
    CVirtualAddressAllocator::FreeVad(v6);
    v6 = (struct VIDMM_VAD *)(v14 - 10);
  }
  v15 = (_DWORD *)*((_QWORD *)v6 + 5);
  v16 = (char *)v6 + 40;
  if ( v15 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 4) == *((_QWORD *)v15 - 2) && (v15[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v15 - 10), v10);
    *((_QWORD *)v15 - 2) = *((_QWORD *)v6 + 3);
    v17 = *(_QWORD *)v16;
    if ( *(char **)(*(_QWORD *)v16 + 8LL) == v16 )
    {
      v18 = (char **)*((_QWORD *)v6 + 6);
      if ( *v18 == v16 )
      {
        *v18 = (char *)v17;
        *(_QWORD *)(v17 + 8) = v18;
        CVirtualAddressAllocator::FreeVad(v6);
        v6 = (struct VIDMM_VAD *)(v15 - 10);
        goto LABEL_20;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
LABEL_20:
  LOBYTE(v10) = 0;
  v19 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v30 = *((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 3);
  if ( !v19 )
    goto LABEL_27;
  while ( (int)CompareVadSizeAvl(&v30, v19) < 0 )
  {
    v20 = v19->Children[0];
    if ( !v19->Children[0] )
    {
      LOBYTE(v10) = 0;
      goto LABEL_27;
    }
LABEL_23:
    v19 = v20;
  }
  v20 = v19->Children[1];
  if ( v20 )
    goto LABEL_23;
  LOBYTE(v10) = 1;
LABEL_27:
  RtlAvlInsertNodeEx((char *)this + 40, v19, v10, v6);
  v22 = *((_DWORD *)v6 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v6 + 18) = v22;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v28) = v22;
    McTemplateK0pqxx(v22, &CreateGpuVirtualAddressRange, v21, this, v28, *((_QWORD *)v6 + 3), *((_QWORD *)v6 + 4));
  }
}
