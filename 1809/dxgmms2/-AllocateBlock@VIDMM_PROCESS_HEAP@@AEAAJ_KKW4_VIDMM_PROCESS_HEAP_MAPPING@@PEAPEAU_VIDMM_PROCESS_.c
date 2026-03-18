/*
 * XREFs of ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00C2D60
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C32E8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0pxqqt @ 0x1C00281E8 (McTemplateK0pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0028784 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C0087078 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0087144 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C00C3E74 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateBlock(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        ULONG a4,
        _QWORD *a5,
        char a6)
{
  unsigned __int64 v7; // r8
  ULONG v8; // r12d
  ULONG AllocationType; // esi
  VIDMM_LINEAR_POOL *v10; // r15
  HANDLE v11; // r13
  ULONG_PTR v12; // r8
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  NTSTATUS inserted; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  VIDMM_LINEAR_POOL *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  _DWORD *v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  _DWORD *v34; // r14
  __int64 v35; // rax
  int v36; // eax
  int v37; // esi
  _QWORD *v38; // rax
  __int64 v39; // rcx
  PVOID v40; // r9
  __int64 BlockListHead; // rax
  _QWORD *v42; // r8
  __int64 v43; // rdx
  ULONG Protect[2]; // [rsp+28h] [rbp-38h]
  __int64 v46; // [rsp+30h] [rbp-30h]
  __int64 v47; // [rsp+38h] [rbp-28h]
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-18h] BYREF
  void *Handle; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR v51; // [rsp+58h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+48h] BYREF

  v7 = a2 + a3;
  BaseAddress = 0LL;
  v8 = 0;
  Object = 0LL;
  *a5 = 0LL;
  AllocationType = 0;
  v10 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  if ( v7 <= (unsigned int)dword_1C004D2BC )
    v7 = (unsigned int)dword_1C004D2BC;
  v12 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v12;
  if ( v12 < a2 )
    goto LABEL_39;
  if ( a4 == 3 )
    goto LABEL_21;
  if ( a4 == 4 )
  {
LABEL_22:
    v20 = 134479872;
LABEL_23:
    v51 = v12;
    LODWORD(v16) = MmCreateSection(&Object, 0LL, 0LL, &v51, 4, v20, -1LL, 0LL);
    if ( (int)v16 < 0 )
    {
      Object = 0LL;
      _InterlockedIncrement(&dword_1C004D6B8);
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 1974LL;
LABEL_25:
      WdLogEvent5_WdLowResource(v22);
      goto LABEL_40;
    }
    ObfReferenceObject(Object);
    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
    v16 = inserted;
    if ( inserted < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v26 + 24) = Object;
      *(_QWORD *)(v26 + 32) = v16;
      WdLogEvent5_WdAssertion(v26);
      goto LABEL_40;
    }
    if ( a4 - 5 <= 1 )
    {
      LODWORD(v16) = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
      if ( (int)v16 < 0 )
      {
LABEL_40:
        if ( a4 - 3 > 1 )
        {
          if ( a4 == 5 )
            goto LABEL_48;
          if ( a4 != 6 )
          {
            if ( v11 )
              MmUnsecureVirtualMemory(v11);
            if ( BaseAddress )
            {
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
              BaseAddress = 0LL;
            }
LABEL_54:
            if ( v10 )
              VIDMM_LINEAR_POOL::`scalar deleting destructor'(v10);
            return (unsigned int)v16;
          }
        }
        if ( a4 - 5 > 1 )
        {
LABEL_50:
          if ( Object )
          {
            if ( Handle )
              ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
            ObfDereferenceObject(Object);
          }
          goto LABEL_54;
        }
LABEL_48:
        if ( BaseAddress )
          MmUnmapViewInSystemSpace(BaseAddress);
        goto LABEL_50;
      }
    }
    goto LABEL_30;
  }
  if ( a4 - 5 <= 1 )
  {
LABEL_21:
    v20 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v8 = 4;
  if ( a4 != 2 )
    v8 = 1028;
  v13 = 12288;
  if ( a4 != 2 )
    v13 = 8400896;
  AllocationType = v13 | 0x800000;
  if ( !a6 )
    AllocationType = v13;
  if ( dword_1C004D148 )
    AllocationType &= ~0x1000u;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v8) < 0 )
  {
    AllocationType &= ~0x800000u;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v8);
    v16 = v14;
    if ( v14 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C004D608);
LABEL_36:
      v22 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v22 + 24) = v16;
      goto LABEL_25;
    }
  }
  if ( (AllocationType & 0x1000) != 0 )
  {
    v11 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
    if ( !v11 )
    {
      v19 = WdLogNewEntry5_WdWarning(v18, v17);
      WdLogEvent5_WdWarning(v19);
LABEL_39:
      LODWORD(v16) = -1073741801;
      goto LABEL_40;
    }
  }
LABEL_30:
  v27 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
  if ( v27 )
    v10 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v27);
  if ( !v10 )
  {
    _InterlockedIncrement(&dword_1C004D60C);
    v29 = WdLogNewEntry5_WdLowResource(v28);
    *(_QWORD *)(v29 + 24) = 2090LL;
    WdLogEvent5_WdLowResource(v29);
    goto LABEL_39;
  }
  v30 = VIDMM_LINEAR_POOL::Init(v10, RegionSize, 0, 0LL, 0LL);
  v16 = v30;
  if ( v30 < 0 )
  {
    _InterlockedIncrement(&dword_1C004D610);
    goto LABEL_36;
  }
  v31 = operator new[](0x68uLL, 0x31316956u, PagedPool);
  v34 = v31;
  if ( !v31 )
  {
    _InterlockedIncrement(&dword_1C004D614);
    v35 = WdLogNewEntry5_WdLowResource(v32);
    *(_QWORD *)(v35 + 24) = 2112LL;
    WdLogEvent5_WdLowResource(v35);
    goto LABEL_39;
  }
  *(_QWORD *)v31 = a1;
  v31[6] = 0;
  *((_QWORD *)v31 + 4) = BaseAddress;
  *((_QWORD *)v31 + 5) = RegionSize;
  v36 = 2;
  v37 = (AllocationType >> 23) & 1;
  v34[12] = v8;
  *((_QWORD *)v34 + 9) = v10;
  *((_QWORD *)v34 + 7) = v11;
  if ( a4 != 2 )
    v36 = 0;
  v34[20] = a4;
  v34[16] = v36 | v37;
  *((_QWORD *)v34 + 11) = Object;
  *((_QWORD *)v34 + 12) = Handle;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v32) + 24) = v34;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += *((_QWORD *)v34 + 5);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 144LL);
  v38 = *(_QWORD **)(a1 + 8);
  v39 = *((_QWORD *)v34 + 5);
  if ( a4 == 1 )
  {
    v38[20] += v39;
  }
  else if ( a4 == 2 )
  {
    v38[22] += v39;
  }
  else
  {
    v38[24] += v39;
  }
  if ( bTracingEnabled )
  {
    v40 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v40 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v47) = 1;
      LODWORD(v46) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt(v39, &EventCreateProcessAllocation, v33, v40, RegionSize, *(_QWORD *)Protect, v46, v47);
    }
  }
  BlockListHead = VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v34 + 2);
  v43 = *(_QWORD *)BlockListHead;
  if ( *(_QWORD *)(*(_QWORD *)BlockListHead + 8LL) != BlockListHead )
    __fastfail(3u);
  v42[1] = BlockListHead;
  *v42 = v43;
  *(_QWORD *)(v43 + 8) = v42;
  *(_QWORD *)BlockListHead = v42;
  *a5 = v34;
  return (unsigned int)v16;
}
