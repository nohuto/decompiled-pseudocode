/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C008160C
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C008157C (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     ?GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ @ 0x1C00023F4 (-GetCurrentHandle@VIDMM_PARTITION@@SAPEAXXZ.c)
 *     McTemplateK0pxqqt @ 0x1C0028D24 (McTemplateK0pxqqt.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C00699F4 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z @ 0x1C00B5508 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJPEAX_KKKPEAPEAXPEA_K2@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::Allocate(VIDMM_RECYCLE_BLOCK *this, ULONG_PTR a2, char a3)
{
  int *v3; // r10
  int v7; // ecx
  char v8; // r14
  char v9; // dl
  PVOID *v10; // rsi
  int v11; // ebx
  __int64 CurrentHandle; // rax
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  NTSTATUS inserted; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // r9
  ULONG v22; // esi
  int v23; // eax
  ULONG v24; // r8d
  __int64 v25; // rcx
  unsigned int *v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rcx
  unsigned int v30; // esi
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r8d
  ULONG v35; // r8d
  ULONG_PTR v36; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  ViewSize = a2;
  v3 = (int *)*((_QWORD *)this + 4);
  v7 = *v3;
  v8 = *((_BYTE *)v3 + 16);
  v9 = *((_BYTE *)v3 + 17);
  if ( (unsigned int)(*v3 - 9) <= 1 )
  {
    *((_DWORD *)this + 32) = 0x800000;
    v30 = 1028;
    if ( *v3 == 10 )
      v30 = 4;
    v31 = VIDMM_PROCESS::MapHostVirtualAddressToGuest(
            *(VIDMM_PROCESS **)(*((_QWORD *)v3 + 1) + 8LL),
            0LL,
            a2,
            0x800000u,
            v30,
            (void **)this + 14,
            (unsigned __int64 *)this + 15,
            (void **)this + 5);
    v16 = v31;
    if ( v31 >= 0 )
    {
      v21 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 132) |= 1u;
      goto LABEL_10;
    }
    _InterlockedIncrement(&dword_1C004E628);
    goto LABEL_34;
  }
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    if ( v7 == 2 || (v22 = 1028, v7 == 8) )
      v22 = 4;
    v23 = 0x2000;
    *((_DWORD *)this + 32) = 0x2000;
    if ( v9 )
    {
      v23 = 2105344;
      *((_DWORD *)this + 32) = 2105344;
    }
    if ( v8 )
    {
      v23 |= 0x20400000u;
      *((_DWORD *)this + 32) = v23;
    }
    v24 = v23;
    if ( a3 && !v8 && !v9 )
    {
      v24 = v23 | 0x800000;
      *((_DWORD *)this + 32) = v23 | 0x800000;
    }
    LODWORD(v16) = VidMmAllocateVirtualMemory((PVOID *)this + 5, &ViewSize, v24, v22);
    if ( (int)v16 >= 0 )
      goto LABEL_19;
    v34 = *((_DWORD *)this + 32);
    if ( (v34 & 0x800000) != 0 )
    {
      v35 = v34 & 0xFF7FFFFF;
      *((_DWORD *)this + 32) = v35;
      LODWORD(v16) = VidMmAllocateVirtualMemory((PVOID *)this + 5, &ViewSize, v35, v22);
    }
    if ( (int)v16 >= 0 )
    {
LABEL_19:
      *((_QWORD *)this + 6) = *((_QWORD *)this + 5) + ViewSize;
      *((_BYTE *)this + 132) ^= (*((_BYTE *)this + 132) ^ (*((_DWORD *)this + 32) >> 23)) & 1;
      goto LABEL_20;
    }
    _InterlockedIncrement(&dword_1C004E628);
    v32 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v32 + 24) = (int)v16;
    goto LABEL_35;
  }
  v36 = a2;
  v10 = (PVOID *)((char *)this + 56);
  v11 = ((v7 - 4) & 0xFFFFFFFD) != 0 ? 1208221696 : 134479872;
  CurrentHandle = VIDMM_PARTITION::GetCurrentHandle();
  v13 = v11 | 0x80000;
  if ( !v8 )
    v13 = v11;
  v14 = MmCreateSection((char *)this + 56, 0LL, 0LL, &v36, 4, v13, CurrentHandle, 0LL);
  v16 = v14;
  if ( v14 < 0 )
    goto LABEL_33;
  ObfReferenceObject(*v10);
  inserted = ObInsertObject(*v10, 0LL, 0, 0, 0LL, (PHANDLE)this + 8);
  v16 = inserted;
  if ( inserted < 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v33 + 24) = *v10;
    *(_QWORD *)(v33 + 32) = v16;
    WdLogEvent5_WdAssertion(v33);
    return (unsigned int)v16;
  }
  if ( (unsigned int)(**((_DWORD **)this + 4) - 5) > 1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = ViewSize;
    goto LABEL_20;
  }
  v20 = MmMapViewInSystemSpace(*v10, (PVOID *)this + 5, &ViewSize);
  v16 = v20;
  if ( v20 < 0 )
  {
LABEL_33:
    _InterlockedIncrement(&dword_1C004E6D8);
LABEL_34:
    v32 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v32 + 24) = v16;
LABEL_35:
    WdLogEvent5_WdLowResource(v32);
    return (unsigned int)v16;
  }
  v21 = *((_QWORD *)this + 5);
LABEL_10:
  *((_QWORD *)this + 6) = v21 + ViewSize;
LABEL_20:
  if ( bTracingEnabled )
  {
    v26 = (unsigned int *)*((_QWORD *)this + 4);
    v27 = (const GUID *)*v26;
    v28 = *(_QWORD *)(*((_QWORD *)v26 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt(v28, &EventCreateProcessAllocation, v27);
  }
  return 0LL;
}
