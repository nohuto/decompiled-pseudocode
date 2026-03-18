/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00C53A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180B4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0027800 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C0028D24 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0028DCC (McTemplateK0qpxp.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00C5F90 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
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
  int v32; // ecx
  __int64 v33; // rcx
  NTSTATUS inserted; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rcx
  PVOID v40; // rcx
  _QWORD *v41; // rcx
  void *v42; // rax
  PVOID v43; // rax
  _QWORD *v44; // rcx
  PVOID v45; // rcx
  PVOID v46; // rdx
  PVOID v47; // r9
  const GUID *v48; // r8
  __int64 v49; // rcx
  const GUID *v50; // r8
  ULONG Protect[2]; // [rsp+28h] [rbp-58h]
  __int64 v53; // [rsp+30h] [rbp-50h]
  __int64 v54; // [rsp+38h] [rbp-48h]
  PVOID BaseAddress; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *Handle; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v58; // [rsp+58h] [rbp-28h]
  int v59; // [rsp+60h] [rbp-20h] BYREF
  __int64 v60; // [rsp+68h] [rbp-18h]
  char v61; // [rsp+70h] [rbp-10h]
  ULONG v62; // [rsp+C0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+48h] BYREF

  RegionSize = a2;
  v59 = -1;
  v10 = (unsigned int)a3;
  v60 = 0LL;
  if ( (qword_1C004E010 & 2) != 0 )
  {
    v61 = 1;
    v59 = 8004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 8004);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  AllocationType = 0;
  BaseAddress = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v62 = 0;
  v58 = 0LL;
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
  if ( v21 < (unsigned int)dword_1C004E2B8 )
  {
    LODWORD(v23) = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v21, (unsigned int)v10, a4, v19, v20, v22, a9);
    goto LABEL_67;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v26 = v24;
  if ( !v24 )
  {
    LODWORD(v23) = -1073741801;
    _InterlockedIncrement(&dword_1C004E624);
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = 340LL;
LABEL_36:
    WdLogEvent5_WdLowResource(v27);
LABEL_37:
    if ( a4 - 3 > 1 )
    {
      if ( a4 == 5 )
        goto LABEL_43;
      if ( a4 != 6 )
      {
        if ( BaseAddress )
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_49:
        if ( v26 )
          ExFreeToPagedLookasideList(Lookaside, v26);
        goto LABEL_67;
      }
    }
    if ( a4 - 5 > 1 )
    {
LABEL_45:
      v40 = Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v40 = Object;
        }
        ObfDereferenceObject(v40);
      }
      goto LABEL_49;
    }
LABEL_43:
    if ( BaseAddress )
      MmUnmapViewInSystemSpace(BaseAddress);
    goto LABEL_45;
  }
  memset(v24, 0, 0x70uLL);
  if ( a4 == 3 )
    goto LABEL_27;
  if ( a4 == 4 )
    goto LABEL_28;
  if ( a4 - 5 <= 1 )
  {
LABEL_27:
    v32 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_29:
      a5 = (_QWORD *)RegionSize;
      LODWORD(v23) = MmCreateSection(&Object, 0LL, 0LL, &a5, 4, v32, -1LL, 0LL);
      if ( (int)v23 < 0 )
      {
        Object = 0LL;
        _InterlockedIncrement(&dword_1C004E6D8);
        v27 = WdLogNewEntry5_WdLowResource(v33);
        *(_QWORD *)(v27 + 24) = 378LL;
        goto LABEL_36;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v23 = inserted;
      if ( inserted < 0 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v37 + 24) = Object;
        *(_QWORD *)(v37 + 32) = v23;
        WdLogEvent5_WdAssertion(v37);
        goto LABEL_37;
      }
      if ( a4 - 5 <= 1 )
      {
        v38 = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        v23 = v38;
        if ( v38 < 0 )
        {
          _InterlockedIncrement(&dword_1C004E6D4);
          v27 = WdLogNewEntry5_WdLowResource(v39);
          *(_QWORD *)(v27 + 24) = v23;
          goto LABEL_36;
        }
      }
      goto LABEL_51;
    }
LABEL_28:
    v32 = 134479872;
    goto LABEL_29;
  }
  v28 = 4;
  if ( a4 != 2 )
    v28 = 1028;
  v29 = 12288;
  v62 = v28;
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
      _InterlockedIncrement(&dword_1C004E6B0);
      v27 = WdLogNewEntry5_WdLowResource(v30);
      *(_QWORD *)(v27 + 24) = 460LL;
      goto LABEL_36;
    }
  }
  v58 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
  if ( !v58 )
  {
    LODWORD(v23) = -1073741801;
    _InterlockedIncrement(&dword_1C004E6B0);
    v27 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v27 + 24) = 478LL;
    goto LABEL_36;
  }
LABEL_51:
  *v26 |= 1u;
  v41 = a6;
  *((_QWORD *)v26 + 7) = RegionSize;
  *((_QWORD *)v26 + 6) = v58;
  *((_BYTE *)v26 + 72) = 0;
  *((_QWORD *)v26 + 1) = BaseAddress;
  v26[4] = v62;
  v26[5] = AllocationType;
  *((_QWORD *)v26 + 4) = Object;
  v42 = Handle;
  *((_QWORD *)v26 + 10) = 0LL;
  *((_QWORD *)v26 + 5) = v42;
  v26[6] = a4;
  v43 = BaseAddress;
  *v19 = v26;
  *v41 = v43;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) += RegionSize;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += RegionSize;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 148LL);
  v44 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v44[19] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v44[21] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL) += RegionSize;
  }
  else
  {
    v44[23] += RegionSize;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) += RegionSize;
  }
  if ( bTracingEnabled )
  {
    v45 = BaseAddress;
    v46 = Object;
    v47 = BaseAddress;
    if ( a4 - 3 <= 3 )
      v47 = Object;
    v48 = *(const GUID **)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      LODWORD(v54) = 0;
      LODWORD(v53) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      Protect[0] = a4;
      McTemplateK0pxqqt(
        (__int64)BaseAddress,
        &EventCreateProcessAllocation,
        v48,
        v47,
        RegionSize,
        *(_QWORD *)Protect,
        v53,
        v54);
      v45 = BaseAddress;
      v46 = Object;
    }
    if ( bTracingEnabled )
    {
      if ( a4 - 3 <= 3 )
        v45 = v46;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          (__int64)v45,
          &EventCreateProcessAllocationDetails,
          v48,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v26,
          RegionSize,
          (char)v45);
    }
  }
  LOBYTE(v22->L.ListHead.Alignment) = 1;
  LODWORD(v23) = 0;
LABEL_67:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v49, &EventProfilerExit, v50, v59);
  return (unsigned int)v23;
}
