/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0073AE0
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0071E24 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007335C (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0076744 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0080114 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0070948 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0073CC0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0074100 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C007EE38 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  struct VIDMM_ALLOC **v5; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_GLOBAL *v15; // r10
  unsigned __int64 v16; // rsi
  UINT *v17; // rdx
  __int64 v18; // rcx
  struct VIDMM_PROCESS *v19; // r9
  void *KmdProcessHandle; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  VIDMM_PROCESS *v24; // r9
  unsigned int v25; // [rsp+50h] [rbp-D8h]
  struct _D3DGPU_PHYSICAL_ADDRESS v26; // [rsp+60h] [rbp-C8h] BYREF
  VIDMM_PAGE_DIRECTORY *v27; // [rsp+70h] [rbp-B8h]
  struct VIDMM_ALLOC **v28; // [rsp+78h] [rbp-B0h]
  char v29; // [rsp+80h] [rbp-A8h] BYREF
  _DWORD v30[20]; // [rsp+90h] [rbp-98h] BYREF

  v28 = a3;
  v5 = (struct VIDMM_ALLOC **)&v29;
  if ( a3 )
    v5 = a3;
  v8 = 0;
  *v5 = 0LL;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (*((_QWORD *)a2 + 13) - v9) >> 12;
  v25 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v11 = *((_QWORD *)this + 14);
  *(_QWORD *)&v26.SegmentId = 32LL * v25;
  v27 = *(VIDMM_PAGE_DIRECTORY **)(*(_QWORD *)&v26.SegmentId + v11);
  if ( v27 )
  {
    memset(v30, 0, 0x48uLL);
    v12 = *(_QWORD *)(*((_QWORD *)this + 10) + 40184LL);
    v30[13] = -1;
    if ( (**(_DWORD **)(1560LL * v25 + v12 + 440) & 0x80u) != 0 )
      *(_WORD *)((char *)&v30[14] + 1) = 257;
    v8 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
           v27,
           this,
           (const struct COMMIT_VA_STATE *)v30,
           0LL,
           v9,
           v10,
           0LL,
           0,
           v5);
    if ( v8 < 0 && *v5 && !v28 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v22 + 24) = 3153LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( a4 )
    {
      v15 = (VIDMM_GLOBAL *)*((_QWORD *)this + 10);
      v16 = v9 + (v10 << 12);
      if ( (*((_BYTE *)v15 + 40872) & 0x10) == 0 && v9 <= v16 )
      {
        v17 = (UINT *)(*((_QWORD *)this + 14) + *(_QWORD *)&v26.SegmentId);
        v18 = *(_QWORD *)(*(_QWORD *)v17 + 8LL);
        if ( v18 )
        {
          if ( *(_QWORD *)(v18 + 136) )
          {
            v19 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 11);
            v26.SegmentId = v17[6];
            v26.SegmentOffset = *(_QWORD *)(v18 + 144);
            KmdProcessHandle = (void *)*((_QWORD *)this + 13);
            if ( !KmdProcessHandle )
            {
              v23 = VIDMM_GLOBAL::AdapterId(v15);
              KmdProcessHandle = VIDMM_PROCESS::GetKmdProcessHandle(v24, v23);
              *((_QWORD *)this + 13) = KmdProcessHandle;
            }
            VIDMM_GLOBAL::FlushGpuVaTlb(v15, v25, &v26, v19, KmdProcessHandle, v9, v16);
          }
        }
      }
    }
  }
  *((_DWORD *)a2 + 16) &= 0xFFFFF3FF;
  return (unsigned int)v8;
}
