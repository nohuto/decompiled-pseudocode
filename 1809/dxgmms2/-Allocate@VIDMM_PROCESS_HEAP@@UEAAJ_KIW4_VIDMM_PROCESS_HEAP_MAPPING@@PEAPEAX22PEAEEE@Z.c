/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00C2720
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0027CFC (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C00281E8 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0028290 (McTemplateK0qpxp.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C32E8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        ULONG_PTR a2,
        const GUID *a3,
        ULONG a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        PPAGED_LOOKASIDE_LIST Lookaside,
        char a9)
{
  __int64 v10; // r14
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  ULONG AllocationType; // r15d
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // rcx
  ULONG_PTR v21; // rdx
  PPAGED_LOOKASIDE_LIST v22; // r12
  __int64 v23; // rbx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // r14
  __int64 v27; // rax
  ULONG v28; // ebx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // ecx
  __int64 v34; // rcx
  NTSTATUS inserted; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  PVOID v39; // rcx
  _QWORD *v40; // rcx
  void *v41; // rax
  PVOID v42; // rax
  _QWORD *v43; // rcx
  char v44; // dl
  char v45; // cl
  PVOID v46; // r9
  __int64 v47; // rcx
  const GUID *v48; // r8
  ULONG Protect[2]; // [rsp+28h] [rbp-58h]
  __int64 v51; // [rsp+30h] [rbp-50h]
  __int64 v52; // [rsp+38h] [rbp-48h]
  PVOID BaseAddress; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *Handle; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v56; // [rsp+58h] [rbp-28h]
  int v57; // [rsp+60h] [rbp-20h] BYREF
  __int64 v58; // [rsp+68h] [rbp-18h]
  char v59; // [rsp+70h] [rbp-10h]
  ULONG v60; // [rsp+C0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+48h] BYREF

  RegionSize = a2;
  v57 = -1;
  v10 = (unsigned int)a3;
  v58 = 0LL;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v59 = 1;
    v57 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  AllocationType = 0;
  BaseAddress = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v60 = 0;
  v56 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v13[3] = RegionSize;
    v13[4] = v10;
    v13[5] = a1;
  }
  v15 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v13, v12) != v15 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
    v18[3] = 270LL;
    v18[4] = 30LL;
    v18[5] = 0LL;
    v18[6] = 0LL;
    v18[7] = 0LL;
    WdLogEvent5_WdCriticalError(v18);
  }
  v19 = a5;
  v20 = a6;
  v21 = RegionSize;
  *a5 = 0LL;
  *v20 = 0LL;
  v22 = Lookaside;
  LOBYTE(Lookaside->L.ListHead.Alignment) = 0;
  if ( v21 < (unsigned int)dword_1C004D2B8 )
  {
    LODWORD(v23) = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v21, (unsigned int)v10, a4, v19, v20, v22, a9);
    goto LABEL_66;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v26 = v24;
  if ( !v24 )
  {
    LODWORD(v23) = -1073741801;
    _InterlockedIncrement(&dword_1C004D604);
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = 340LL;
LABEL_13:
    WdLogEvent5_WdLowResource(v27);
    goto LABEL_36;
  }
  memset(v24, 0, 0x70uLL);
  if ( a4 == 3 )
    goto LABEL_28;
  if ( a4 == 4 )
  {
LABEL_29:
    v33 = 134479872;
LABEL_30:
    a5 = (_QWORD *)RegionSize;
    LODWORD(v23) = MmCreateSection(&Object, 0LL, 0LL, &a5, 4, v33, -1LL, 0LL);
    if ( (int)v23 < 0 )
    {
      Object = 0LL;
      _InterlockedIncrement(&dword_1C004D6B8);
      v27 = WdLogNewEntry5_WdLowResource(v34);
      *(_QWORD *)(v27 + 24) = 378LL;
      goto LABEL_13;
    }
    ObfReferenceObject(Object);
    inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
    v23 = inserted;
    if ( inserted >= 0 )
    {
      if ( a4 - 5 > 1 )
        goto LABEL_50;
      LODWORD(v23) = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
      if ( (int)v23 >= 0 )
        goto LABEL_50;
    }
    else
    {
      v38 = WdLogNewEntry5_WdAssertion(v37, v36);
      *(_QWORD *)(v38 + 24) = Object;
      *(_QWORD *)(v38 + 32) = v23;
      WdLogEvent5_WdAssertion(v38);
    }
LABEL_36:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_42;
      if ( a4 != 6 )
      {
        if ( BaseAddress )
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_48:
        if ( v26 )
          ExFreeToPagedLookasideList(Lookaside, v26);
        goto LABEL_66;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_44:
      v39 = Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v39 = Object;
        }
        ObfDereferenceObject(v39);
      }
      goto LABEL_48;
    }
LABEL_42:
    if ( BaseAddress )
      MmUnmapViewInSystemSpace(BaseAddress);
    goto LABEL_44;
  }
  if ( a4 - 5 <= 1 )
  {
LABEL_28:
    v33 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v28 = 4;
  if ( a4 != 2 )
    v28 = 1028;
  v29 = 12288;
  v60 = v28;
  if ( a4 != 2 )
    v29 = 8400896;
  AllocationType = v29 | 0x800000;
  if ( !a9 )
    AllocationType = v29;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v28) < 0 )
  {
    AllocationType &= ~0x800000u;
    LODWORD(v23) = ZwAllocateVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     &BaseAddress,
                     0LL,
                     &RegionSize,
                     AllocationType,
                     v28);
    if ( (int)v23 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C004D690);
      v27 = WdLogNewEntry5_WdLowResource(v30);
      *(_QWORD *)(v27 + 24) = 458LL;
      goto LABEL_13;
    }
  }
  v56 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
  if ( !v56 )
  {
    LODWORD(v23) = -1073741801;
    _InterlockedIncrement(&dword_1C004D690);
    v27 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v27 + 24) = 476LL;
    goto LABEL_13;
  }
LABEL_50:
  *v26 |= 1u;
  v40 = a6;
  *((_QWORD *)v26 + 7) = RegionSize;
  *((_QWORD *)v26 + 6) = v56;
  *((_BYTE *)v26 + 72) = 0;
  *((_QWORD *)v26 + 1) = BaseAddress;
  v26[4] = v60;
  v26[5] = AllocationType;
  *((_QWORD *)v26 + 4) = Object;
  v41 = Handle;
  *((_QWORD *)v26 + 10) = 0LL;
  *((_QWORD *)v26 + 5) = v41;
  v26[6] = a4;
  v42 = BaseAddress;
  *v19 = v26;
  *v40 = v42;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) += RegionSize;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += RegionSize;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 148LL);
  v43 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v43[19] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v43[21] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL) += RegionSize;
  }
  else
  {
    v43[23] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) += RegionSize;
  }
  if ( bTracingEnabled )
  {
    v44 = (char)BaseAddress;
    v45 = (char)Object;
    v46 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v46 = Object;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v52) = 0;
      LODWORD(v51) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt(
        (__int64)Object,
        &EventCreateProcessAllocation,
        v32,
        v46,
        RegionSize,
        *(_QWORD *)Protect,
        v51,
        v52);
      v44 = (char)BaseAddress;
      v45 = (char)Object;
    }
    if ( bTracingEnabled )
    {
      if ( a4 - 3 <= 3 )
        v44 = v45;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *(_QWORD *)(a1 + 8),
          &EventCreateProcessAllocationDetails,
          v32,
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v26,
          RegionSize,
          v44);
    }
  }
  LOBYTE(v22->L.ListHead.Alignment) = 1;
  LODWORD(v23) = 0;
LABEL_66:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v47, &EventProfilerExit, v48, v57);
  return (unsigned int)v23;
}
