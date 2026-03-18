/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0061248
 * Callers:
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0061134 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0080C8C (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0071870 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00749D0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct _VIDMM_GLOBAL_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rdi
  struct VIDMM_DEVICE *v6; // r15
  unsigned __int64 v8; // rbp
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // r11
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  struct _VIDMM_GLOBAL_ALLOC **v16; // rsi
  unsigned int v17; // edx
  __int64 v18; // rcx
  int OneAllocation; // ebp
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25[8]; // [rsp+A0h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *((_QWORD *)a2 + 10);
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 12);
  v8 = a3;
  v9 = *(_DWORD *)this;
  v10 = 0;
  v11 = *(_QWORD *)(v4 + 40184) + 1560LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( (*(_BYTE *)(v4 + 40872) & 0x10) != 0 || !((__int16)v9 >> 13) )
    v10 = 1;
  v12 = *(_QWORD *)(v4 + 24);
  v13 = v10 | 0x40;
  v25[0] = 0;
  v14 = *(_DWORD *)(v12 + 308);
  if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 )
    v13 |= 4u;
  if ( a4 )
    LOBYTE(v15) = a4 - 1;
  else
    v15 = *(unsigned __int16 *)(v11 + 28) - *(_DWORD *)(v11 + 20);
  v16 = this + 1;
  v17 = *(_DWORD *)(v11 + 48LL * (v9 & 7) + 100);
  if ( !v17 )
    v17 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (VIDMM_GLOBAL *)v4,
                    v6,
                    (v9 >> 7) & 0x1F,
                    v8,
                    v8,
                    v17,
                    1 << v15,
                    0,
                    0,
                    (struct _DXGK_ALLOCATIONINFOFLAGS)v13,
                    0LL,
                    0LL,
                    0LL,
                    0xA0000000,
                    0,
                    0LL,
                    1u,
                    0LL,
                    this + 1);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C004E5B8);
    v23 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v23 + 24) = 3894LL;
    WdLogEvent5_WdLowResource(v23);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 34) & 4) != 0 )
      *((_DWORD *)*v16 + 19) |= 0x200u;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 11), &ApcState);
    v20 = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)v4, v6, *v16, 0LL, 0, 0LL, this + 2, v25);
    KeUnstackDetachProcess(&ApcState);
    if ( v20 < 0 )
    {
      _InterlockedIncrement(&dword_1C004E5BC);
      v24 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v24 + 24) = 3924LL;
      WdLogEvent5_WdLowResource(v24);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
