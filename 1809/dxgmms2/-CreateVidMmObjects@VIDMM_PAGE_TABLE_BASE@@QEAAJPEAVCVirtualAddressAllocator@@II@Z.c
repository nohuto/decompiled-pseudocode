/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0078300
 * Callers:
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00787E8 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007E64C (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00626E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r11d
  struct VIDMM_DEVICE *v8; // r15
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // edx
  struct _VIDMM_GLOBAL_ALLOC **v17; // rdi
  __int64 v18; // rcx
  int OneAllocation; // ebp
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v26; // [rsp+A4h] [rbp-74h]
  int v27; // [rsp+A8h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-68h] BYREF

  v4 = *((_QWORD *)a2 + 10);
  v6 = *(_DWORD *)this;
  v8 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 12);
  v9 = a3;
  v10 = *(_QWORD *)(v4 + 40184) + 1560LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( (*(_BYTE *)(v4 + 40872) & 0x10) != 0 || (v11 = 0, !((__int16)v6 >> 13)) )
    v11 = 1;
  v12 = *(_QWORD *)(v4 + 24);
  v13 = v11 | 0x40;
  v25[0] = 0;
  v26 = v11 | 0x40;
  v14 = *(_DWORD *)(v12 + 308);
  if ( (v14 & 8) != 0 || (v14 & 0x10) != 0 )
  {
    v13 = v11 | 0x44;
    v26 = v11 | 0x44;
  }
  v27 = 0;
  if ( a4 )
    LOBYTE(v15) = a4 - 1;
  else
    v15 = *(unsigned __int16 *)(v10 + 28) - *(_DWORD *)(v10 + 20);
  v16 = *(_DWORD *)(v10 + 48LL * (v6 & 7) + 100);
  v17 = (struct _VIDMM_GLOBAL_ALLOC **)((char *)this + 8);
  if ( !v16 )
    v16 = 4096;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (VIDMM_GLOBAL *)v4,
                    v8,
                    (v6 >> 7) & 0x1F,
                    v9,
                    v9,
                    v16,
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
                    1,
                    0LL,
                    (struct _D3DDDI_SEGMENTPREFERENCE **)this + 1);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C004D5D8);
    v23 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v23 + 24) = 3897LL;
    WdLogEvent5_WdLowResource(v23);
    return (unsigned int)OneAllocation;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 34) & 4) != 0 )
      *((_DWORD *)*v17 + 19) |= 0x200u;
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 11), &ApcState);
    v20 = VIDMM_GLOBAL::OpenOneAllocation(
            (DXGADAPTER **)v4,
            v8,
            *v17,
            0LL,
            0,
            0LL,
            (struct VIDMM_ALLOC **)this + 2,
            v25);
    KeUnstackDetachProcess(&ApcState);
    if ( v20 < 0 )
    {
      _InterlockedIncrement(&dword_1C004D5DC);
      v24 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v24 + 24) = 3927LL;
      WdLogEvent5_WdLowResource(v24);
      return (unsigned int)v20;
    }
    else
    {
      return 0LL;
    }
  }
}
