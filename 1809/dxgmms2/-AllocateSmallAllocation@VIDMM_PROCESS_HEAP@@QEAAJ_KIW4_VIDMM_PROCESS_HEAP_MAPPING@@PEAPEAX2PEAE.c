/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C32E8
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00C2720 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0027CFC (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp @ 0x1C0028290 (McTemplateK0qpxp.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0077444 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007CB4C (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00C2D60 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00C39A0 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00C3E74 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        union _LARGE_INTEGER **a5,
        LONGLONG *a6,
        _BYTE *a7,
        char a8)
{
  __int64 v8; // rbx
  _QWORD *v11; // rax
  struct _PAGED_LOOKASIDE_LIST *v12; // r12
  union _LARGE_INTEGER *v13; // rax
  __int64 v14; // rcx
  union _LARGE_INTEGER *v15; // rsi
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  _QWORD **BlockListHead; // r12
  _QWORD *v22; // r15
  struct _VIDMM_PROCESS_HEAP_BLOCK *v23; // rdi
  VIDMM_LINEAR_POOL *v24; // rcx
  char v25; // r12
  __int64 v26; // r9
  union _LARGE_INTEGER v27; // rbx
  int v28; // edx
  ULONG AllocationType; // ecx
  __int64 v30; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  ULONG_PTR v34; // rax
  const GUID *v35; // r8
  LONGLONG v36; // rax
  __int64 v37; // rdx
  char v38; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v39; // [rsp+68h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v41; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v42[8]; // [rsp+80h] [rbp-9h] BYREF
  char v43; // [rsp+D0h] [rbp+47h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp+4Fh] BYREF

  RegionSize = a2;
  v8 = a3;
  BaseAddress = 0LL;
  v41.QuadPart = 0LL;
  v39 = 0LL;
  v42[0] = 0LL;
  v43 = 0;
  v38 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v11[3] = RegionSize;
    v11[4] = v8;
    v11[5] = a1;
  }
  v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v15 = v13;
  if ( !v13 )
  {
    v16 = -1073741801;
    _InterlockedIncrement(&dword_1C004D604);
    v17 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v17 + 24) = 676LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_25:
    v23 = v39;
LABEL_26:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    if ( v42[0] && v23 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v23 + 9), v42[0]);
    if ( v43 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v23);
    if ( v15 )
      ExFreeToPagedLookasideList(v12, v15);
    if ( v38 )
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16));
    return (unsigned int)v16;
  }
  memset(v13, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(a1 + 16));
  v38 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v18);
  v22 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v19);
    v25 = a8;
    v16 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v8, a4, &v39, a8);
    if ( v16 < 0 )
      goto LABEL_24;
    LOBYTE(v26) = 1;
    v43 = 1;
    v23 = v39;
    v16 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v39 + 9),
            RegionSize,
            (unsigned int)v8,
            v26,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v41,
            (void **)v42);
    if ( v16 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v19);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_26;
    }
  }
  else
  {
    while ( 1 )
    {
      v23 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v22 - 1);
      v24 = (VIDMM_LINEAR_POOL *)v22[8];
      v22 = (_QWORD *)*v22;
      LOBYTE(v20) = 1;
      v39 = v23;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(
                  v24,
                  RegionSize,
                  (unsigned int)v8,
                  v20,
                  0LL,
                  0LL,
                  0,
                  0,
                  0LL,
                  &v41,
                  (void **)v42) >= 0 )
        break;
      if ( v22 == BlockListHead )
        goto LABEL_8;
    }
    v25 = a8;
  }
  v27 = v41;
  if ( !*((_QWORD *)v23 + 7) && !*((_QWORD *)v23 + 11) )
  {
    v28 = 4096;
    if ( *((_DWORD *)v23 + 20) != 2 )
      v28 = 8392704;
    BaseAddress = (PVOID)(v41.QuadPart + *((_QWORD *)v23 + 4));
    AllocationType = v28 | 0x800000;
    if ( !v25 )
      AllocationType = v28;
    v16 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v23 + 12));
    if ( v16 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C004D690);
      v30 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v30 + 24) = 799LL;
      WdLogEvent5_WdLowResource(v30);
LABEL_24:
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_25;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v19);
    v32[4] = v41.HighPart;
    v32[5] = v27.LowPart;
    v32[3] = v23;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) += RegionSize;
  v33 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v33[19] += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v33[21] += RegionSize;
  }
  else
  {
    v33[23] += RegionSize;
  }
  v15->LowPart &= ~1u;
  v34 = RegionSize;
  v15[4].QuadPart = 0LL;
  v15[7].QuadPart = v34;
  v15[3] = (union _LARGE_INTEGER)v42[0];
  LOBYTE(v15[9].LowPart) = 0;
  v15[1].QuadPart = (LONGLONG)v23;
  v15[2] = v27;
  ++*((_DWORD *)v23 + 6);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16));
  *a5 = v15;
  if ( a4 - 3 > 1 )
    v36 = v15[2].QuadPart + *(_QWORD *)(v15[1].QuadPart + 32);
  else
    v36 = 0LL;
  *a6 = v36;
  if ( bTracingEnabled )
  {
    v37 = a4 - 3 > 3 ? *((_QWORD *)v23 + 4) : *((_QWORD *)v23 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp(
        *(_QWORD *)(a1 + 8),
        &EventCreateProcessAllocationDetails,
        v35,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v15,
        RegionSize,
        v37);
  }
  *a7 = 1;
  return 0LL;
}
