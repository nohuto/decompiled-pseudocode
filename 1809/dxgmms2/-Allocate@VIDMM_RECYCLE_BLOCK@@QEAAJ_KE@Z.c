/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0059AC8
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0059A38 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     McTemplateK0pxqqt @ 0x1C00281E8 (McTemplateK0pxqqt.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00B2424 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v5; // rcx
  int v6; // r10d
  char v7; // r9
  char v8; // dl
  ULONG v9; // ebp
  int v10; // eax
  ULONG AllocationType; // edi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r9
  ULONG_PTR v15; // rdx
  unsigned int *v16; // rcx
  const GUID *v17; // r8
  PVOID *v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  NTSTATUS inserted; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // r9d
  VIDMM_PROCESS *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  ULONG Protect[2]; // [rsp+28h] [rbp-30h]
  void **v36; // [rsp+30h] [rbp-28h]
  __int64 v37; // [rsp+38h] [rbp-20h]
  ULONG_PTR v38; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+10h] BYREF

  RegionSize = a2;
  v5 = (int *)*((_QWORD *)this + 4);
  v6 = *v5;
  v7 = *((_BYTE *)v5 + 16);
  v8 = *((_BYTE *)v5 + 17);
  if ( (unsigned int)(*v5 - 9) <= 1 )
  {
    v27 = 1028;
    v28 = *(VIDMM_PROCESS **)(*((_QWORD *)v5 + 1) + 8LL);
    if ( v6 == 10 )
      v27 = 4;
    v29 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            v28,
            a2,
            4u,
            v27,
            (void **)this + 14,
            (unsigned __int64 *)this + 15,
            (void **)this + 5);
    v19 = (PVOID *)v29;
    if ( v29 >= 0 )
    {
      v14 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 128) |= 1u;
      goto LABEL_10;
    }
    _InterlockedIncrement(&dword_1C004D608);
    v31 = WdLogNewEntry5_WdLowResource(v30);
    *(_QWORD *)(v31 + 24) = v19;
LABEL_34:
    WdLogEvent5_WdLowResource(v31);
    return (unsigned int)v19;
  }
  if ( (unsigned int)(v6 - 3) > 3 )
  {
    if ( v6 == 2 || (v9 = 1028, v6 == 8) )
      v9 = 4;
    v10 = (v8 != 0 ? 2105344 : 0x2000) | 0x20400000;
    if ( !v7 )
      v10 = v8 != 0 ? 2105344 : 0x2000;
    AllocationType = v10;
    if ( a3 && !v7 && !v8 )
      AllocationType = v10 | 0x800000;
    LODWORD(v13) = ZwAllocateVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (PVOID *)this + 5,
                     0LL,
                     &RegionSize,
                     AllocationType,
                     v9);
    if ( (int)v13 < 0 )
    {
      if ( (AllocationType & 0x800000) != 0 )
      {
        AllocationType &= ~0x800000u;
        LODWORD(v13) = ZwAllocateVirtualMemory(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         (PVOID *)this + 5,
                         0LL,
                         &RegionSize,
                         AllocationType,
                         v9);
      }
      if ( (int)v13 < 0 )
      {
        _InterlockedIncrement(&dword_1C004D608);
        v32 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v32 + 24) = (int)v13;
LABEL_41:
        WdLogEvent5_WdLowResource(v32);
        return (unsigned int)v13;
      }
    }
    v14 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 128) ^= (*((_BYTE *)this + 128) ^ (AllocationType >> 23)) & 1;
    goto LABEL_10;
  }
  v38 = a2;
  v19 = (PVOID *)((char *)this + 56);
  v20 = (((v6 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872) | 0x80000;
  if ( !v7 )
    v20 = ((v6 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872;
  v21 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v38, 4, v20, -1LL, 0LL);
  v13 = v21;
  if ( v21 < 0 )
  {
    _InterlockedIncrement(&dword_1C004D6B8);
    v32 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v32 + 24) = v13;
    goto LABEL_41;
  }
  ObfReferenceObject(*v19);
  inserted = ObInsertObject(*v19, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v13 = inserted;
  if ( inserted < 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v25, v24);
    *(_QWORD *)(v33 + 24) = *v19;
    *(_QWORD *)(v33 + 32) = v13;
    WdLogEvent5_WdAssertion(v33);
    return (unsigned int)v13;
  }
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    v15 = RegionSize;
    v14 = 0LL;
    *((_QWORD *)this + 6) = RegionSize;
    goto LABEL_11;
  }
  LODWORD(v19) = MmMapViewInSystemSpace(*v19, (PVOID *)this + 5, &RegionSize);
  if ( (int)v19 < 0 )
  {
    _InterlockedIncrement(&dword_1C004D6B8);
    v31 = WdLogNewEntry5_WdLowResource(v26);
    *(_QWORD *)(v31 + 24) = 6870LL;
    goto LABEL_34;
  }
  v14 = *((_QWORD *)this + 5);
LABEL_10:
  v15 = RegionSize;
  *((_QWORD *)this + 6) = v14 + RegionSize;
LABEL_11:
  if ( bTracingEnabled )
  {
    v16 = (unsigned int *)*((_QWORD *)this + 4);
    v17 = (const GUID *)*v16;
    if ( (unsigned int)((_DWORD)v17 - 3) <= 3 )
      v14 = *((_QWORD *)this + 7);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v37) = 1;
      v34 = *(_QWORD *)(*((_QWORD *)v16 + 1) + 8LL);
      LODWORD(v36) = *(_DWORD *)(v34 + 8);
      Protect[0] = (unsigned int)v17;
      McTemplateK0pxqqt(v34, &EventCreateProcessAllocation, v17, v14, v15, *(_QWORD *)Protect, v36, v37);
    }
  }
  return 0LL;
}
