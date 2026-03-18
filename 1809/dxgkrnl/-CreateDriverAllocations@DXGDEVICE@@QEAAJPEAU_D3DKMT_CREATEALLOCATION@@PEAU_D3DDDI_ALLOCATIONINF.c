/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C010FBD0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0005E6C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0016318 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F8C28 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        const GUID *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  DXGDEVICE *v12; // r13
  struct DXGRESOURCE *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 NumAllocations; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  struct _DXGK_ALLOCATIONINFO *v22; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v23; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v25; // r8
  void *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  UINT v29; // eax
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  unsigned int v35; // r15d
  int v36; // r15d
  UINT i; // edx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v45; // rbx
  __int64 v46; // rbx
  int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rcx
  const GUID *v50; // r8
  int v51; // r9d
  __int64 v52; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v54; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v56; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  _QWORD *v64; // rax
  unsigned __int8 v65; // cl
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  struct _DXGK_ALLOCATIONINFO *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  const GUID *v71; // r8
  struct _D3DKMT_CREATEALLOCATION *v72; // r10
  UINT v73; // r11d
  struct DXGALLOCATION *v74; // rsi
  struct DXGRESOURCE *v75; // r13
  DXGDEVICE *v76; // rdi
  struct _DXGK_ALLOCATIONINFO *v77; // r12
  __int64 v78; // r14
  struct _DXGK_ALLOCATIONINFO *v79; // rbx
  int Value; // edx
  __int64 v81; // r8
  int v82; // r8d
  UINT v83; // eax
  UINT v84; // eax
  struct DXGALLOCATION *v85; // rdx
  __int64 v86; // rcx
  SIZE_T v87; // rax
  __int64 v88; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  __int64 v90; // rcx
  DXGADAPTER *v91; // rcx
  __int64 v92; // r8
  int v93; // r11d
  UINT v94; // edx
  __int64 (__fastcall **v95)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v96; // rcx
  __int64 v97; // rdx
  int v98; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v99; // ecx
  bool v100; // r8
  int v101; // r9d
  unsigned int v102; // ecx
  int v103; // ecx
  int v104; // eax
  int v105; // eax
  int v106; // edx
  unsigned int v107; // ecx
  int v108; // ecx
  int v109; // eax
  __int64 v110; // rcx
  int v111; // edx
  __int64 v112; // rcx
  __int64 v113; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v114; // eax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r8
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rcx
  _QWORD *v122; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v124; // [rsp+28h] [rbp-B1h]
  void *v125; // [rsp+30h] [rbp-A9h] BYREF
  UINT Size; // [rsp+38h] [rbp-A1h]
  int Size_4; // [rsp+3Ch] [rbp-9Dh]
  struct _DXGK_ALLOCATIONINFO *v128; // [rsp+40h] [rbp-99h]
  __int64 v129; // [rsp+48h] [rbp-91h]
  int v130; // [rsp+50h] [rbp-89h]
  struct _D3DKMT_CREATEALLOCATION *v131; // [rsp+58h] [rbp-81h]
  struct _DXGK_ALLOCATIONINFO *v132; // [rsp+60h] [rbp-79h]
  struct DXGALLOCATION *v133; // [rsp+68h] [rbp-71h]
  struct DXGRESOURCE *v134; // [rsp+70h] [rbp-69h]
  DXGDEVICE *v135; // [rsp+78h] [rbp-61h]
  int v136; // [rsp+80h] [rbp-59h] BYREF
  __int64 v137; // [rsp+88h] [rbp-51h]
  char v138; // [rsp+90h] [rbp-49h]
  char v139[8]; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-39h] BYREF

  v12 = this;
  v13 = a6;
  v133 = a5;
  v15 = *((_QWORD *)this + 2);
  v135 = this;
  v132 = a4;
  v124 = (struct _D3DDDI_ALLOCATIONINFO2 *)a3;
  v16 = *(_QWORD *)(v15 + 16);
  v131 = a2;
  v134 = a6;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 2926LL;
      WdLogEvent5_WdAssertion(v18);
    }
    a3 = (const GUID *)v124;
  }
  NumAllocations = a2->NumAllocations;
  v20 = 0LL;
  v21 = 0;
  v125 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    v22 = v132;
    do
    {
      v23 = (struct _D3DDDI_ALLOCATIONINFO2 *)&a3[6 * v21];
      if ( v23->pPrivateDriverData )
      {
        PrivateDriverDataSize = v23->PrivateDriverDataSize;
        v25 = v21;
        v22[v25].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v22[v25].pPrivateDriverData = v23->pPrivateDriverData;
        }
        else
        {
          v26 = a7[v21];
          v22[v25].pPrivateDriverData = v26;
          memmove(v26, a8[v21], PrivateDriverDataSize);
        }
        a3 = (const GUID *)v124;
      }
      NumAllocations = a2->NumAllocations;
      ++v21;
    }
    while ( v21 < (unsigned int)NumAllocations );
    v12 = v135;
    v20 = 0LL;
    v13 = v134;
  }
  v130 = 0;
  if ( v13 )
  {
    v27 = *((_DWORD *)v13 + 1);
    v28 = *((_QWORD *)v13 + 7);
    v130 = 1;
    if ( (v27 & 1) == 0 )
    {
      v129 = v28;
      goto LABEL_19;
    }
    v20 = *(_QWORD *)(v28 + 16);
  }
  v129 = v20;
LABEL_19:
  v128 = v132;
  v29 = a2->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  if ( v29 && a2->pStandardAllocation )
  {
    Size = v29;
    v30 = operator new(v29, 0x4B677844u, PagedPool);
    v125 = v30;
    if ( !v30 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v35 = -1073741801;
      v34[3] = v12;
      v34[4] = Size;
      v34[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_198;
    }
    if ( a11 )
      memmove(v30, Src, Size);
    else
      memmove(v30, a2->pStandardAllocation, Size);
    v36 = 0;
  }
  else
  {
    v36 = 0;
    Size = 0;
    v125 = 0LL;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL)) )
      {
        for ( i = 0; i < a2->NumAllocations; v128[v38].Flags.Value |= 0x400u )
        {
          v38 = i++;
          NumAllocations = 88 * v38;
        }
      }
    }
  }
  v39 = *((_QWORD *)v12 + 2);
  v136 = -1;
  v137 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v138 = 1;
    v136 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(NumAllocations, &EventProfilerEnter, a3, 5002);
  }
  else
  {
    v138 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v136, 5002);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v43 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v45 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v43 = *v45;
      }
    }
  }
  v46 = v43 + 120;
  v47 = 0;
  if ( !v43 )
    v46 = 0LL;
  if ( v46 && *(struct _KTHREAD **)(v46 + 8) == KeGetCurrentThread() )
  {
    v48 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v48 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( v43 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v51 = *(_DWORD *)(v46 + 16);
        if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v49, &EventBlockThread, v50, v51);
      }
      ExAcquirePushLockExclusiveEx(v46, 0LL);
    }
    v47 = 2;
    *(_QWORD *)(v46 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v39 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4256LL));
  CurrentIrql = KeGetCurrentIrql();
  v54 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v56 = WdLogNewEntry5_WdAssertion(v52);
      *(_QWORD *)(v56 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v56);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v52);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v54 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v54 )
        v36 = *(_DWORD *)(v54 + 136);
    }
    else
    {
      v54 = 0LL;
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v139,
    *(struct DXGADAPTER **)(v39 + 16));
  v60 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v39 + 16) + 336LL))(
          *(_QWORD *)(*(_QWORD *)(v39 + 16) + 248LL),
          &v125);
  if ( v139[0] )
    KeUnstackDetachProcess(&ApcState);
  v63 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v63 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63);
    v64[3] = 275LL;
    v64[4] = 16LL;
    v64[5] = v39;
    v64[6] = CurrentIrql;
    v65 = KeGetCurrentIrql();
    v64[7] = v65;
    WdLogEvent5_WdCriticalError(v64);
  }
  if ( v54 && *(_DWORD *)(v54 + 136) != v36 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63);
    v66[3] = 275LL;
    v66[4] = 38LL;
    v66[5] = *(int *)(v54 + 136);
    v66[6] = v36;
    v66[7] = 0LL;
    WdLogEvent5_WdCriticalError(v66);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4256LL));
  v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v59, v61, v62);
  v67[3] = v60;
  v67[4] = v129;
  v67[5] = v128->hAllocation;
  v67[6] = v128->Flags.Value;
  v68 = v128;
  v67[7] = v128->PreferredSegment.Value;
  if ( (_DWORD)v60 && (_DWORD)v60 != -1073741811 && (_DWORD)v60 != -1073741801 )
  {
    v69 = WdLogNewEntry5_WdError(v68);
    *(_QWORD *)(v69 + 24) = v60;
    WdLogEvent5_WdError(v69);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v39 + 16));
  if ( v47 == 2 )
  {
    *(_QWORD *)(v46 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v46, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v136);
  if ( v138 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v70, &EventProfilerExit, v71, v136);
  v35 = v60;
  if ( (int)v60 >= 0 )
  {
    v72 = v131;
    v73 = 0;
    v74 = v133;
    v75 = v134;
    if ( v131->NumAllocations )
    {
      v76 = v135;
      v77 = v132;
      while ( 1 )
      {
        v78 = v73;
        v79 = &v77[v73];
        *(_QWORD *)(*((_QWORD *)v74 + 6) + 16LL) = v79->hAllocation;
        *(_QWORD *)(*((_QWORD *)v74 + 6) + 24LL) = v79->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) & 0xFFFFF7FF | ((v79->Flags.Value & 0x30) != 0 ? 0x800 : 0);
        *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) ^ (v79->Flags.Value << 17)) & 0x80000;
        v79->Flags.Value &= 0x807FFFFu;
        Value = v79->Flags.Value;
        v81 = *(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL);
        if ( (*(_DWORD *)(v81 + 1892) & 0x40) != 0 && *(_BYTE *)(v81 + 2454) )
        {
          Value |= 0x8000u;
          v79->Flags.Value = Value;
        }
        v82 = Value;
        if ( (Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 2455LL) )
        {
          v82 = Value | 0x10000;
          v79->Flags.Value = Value | 0x10000;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
            v79->Flags.Value = v82 | 0x20000;
          v83 = *((_DWORD *)a10 + 96);
          if ( v83 )
          {
            v79->SupportedWriteSegmentSet = v83;
            v79->PreferredSegment.Value = *((_DWORD *)a10 + 97);
          }
          v84 = *((_DWORD *)a10 + 98);
          if ( v84 )
            v79->Alignment = v84;
          v85 = v133;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
          {
            v86 = *((_QWORD *)v133 + 12 * v73 + 6);
            *(_DWORD *)(v86 + 4) |= 0x8000u;
          }
          v87 = *((_QWORD *)a10 + 50);
          if ( v87 )
            v79->Size = v87;
          if ( *((_DWORD *)a10 + 4) == 5 )
          {
            v88 = *((_QWORD *)v85 + 12 * v73 + 6);
            *(_DWORD *)(v88 + 4) |= 0x10000u;
            v77[v73].Flags.Value |= 0x8000u;
          }
        }
        Flags = v72->Flags;
        v90 = *(_DWORD *)&Flags & 0x10000;
        if ( (*(_DWORD *)&Flags & 0x10000) != 0 && v79->Size != a12->ExistingHeapData.Size )
        {
          v119 = (_QWORD *)WdLogNewEntry5_WdError(v90);
          v119[3] = v77[v78].Size;
          v119[4] = a12->ExistingHeapData.Size;
          goto LABEL_188;
        }
        if ( (_DWORD)v90 && (*(_DWORD *)&Flags & 0x20020) != 0
          || a10 && (*((_QWORD *)a10 + 42) || *((_QWORD *)a10 + 41)) )
        {
          v79->Flags.Value |= 1u;
        }
        if ( *((_DWORD *)v76 + 82) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v76 + 2) + 16LL)) > 1
          && !DXGADAPTER::ReplicateGdiContent(v91)
          && (v124[v78].Flags.Value & 1) == 0 )
        {
          v77[v78].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 2548LL);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v76 + 2) + 16LL)) )
          *((_DWORD *)v74 + 18) ^= (*((_DWORD *)v74 + 18) ^ (v79->MaximumRenamingListLength << 12)) & 0x3F000;
        else
          *((_DWORD *)v74 + 18) &= 0xFFFC0FFF;
        v94 = v79->Flags.Value;
        if ( (v94 & 0x200) != 0
          && (v95 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v76 + 2) + 16LL),
              v95[70] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v94 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v76 + 2) + 16LL))
           || v95[72] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v95[80] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v95[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v95[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v120 = (_QWORD *)WdLogNewEntry5_WdError(v95);
          v120[3] = v76;
          v120[4] = *(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL);
          v120[5] = -1073741637LL;
          WdLogEvent5_WdError(v120);
          v35 = -1073741637;
          goto LABEL_198;
        }
        v96 = *((_QWORD *)v74 + 6);
        if ( !*(_QWORD *)(v96 + 16) )
          break;
        v97 = v92 + 96 * v78;
        v98 = *(_DWORD *)(v97 + 32);
        if ( (v98 & 2) != 0 )
        {
          *(_DWORD *)(v96 + 4) |= 0x1000u;
          v98 = *(_DWORD *)(v97 + 32);
        }
        if ( (v98 & 1) == 0 || (v79->Flags.Value & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&v72->Flags & 2) != 0 )
            v79->Flags.Value |= 0x20000000u;
        }
        else
        {
          v99 = v72->Flags;
          v100 = 0;
          v101 = *(_DWORD *)(v97 + 28);
          if ( (*(_BYTE *)&v99 & 2) != 0 )
          {
            v105 = *((_DWORD *)v76 + 82);
            if ( v105 == 2 )
            {
              *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 2u;
              v79->Flags.Value |= 0x40000000u;
            }
            else
            {
              if ( (*(_WORD *)&v99 & 0x800) != 0 )
              {
                if ( (*(_WORD *)&v99 & 0x400) != 0 )
                {
                  if ( v105 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 2363LL) )
                    v106 = 0x2000;
                  else
                    v106 = 0;
                  *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) = v106 | *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) & 0xFFFFDFFF;
                  v105 = *((_DWORD *)v76 + 82);
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 1u;
                  v79->Flags.Value |= 0x80000u;
                  v105 = *((_DWORD *)v76 + 82);
                }
              }
              else if ( v105 == 1 )
              {
                if ( (*(_WORD *)&v99 & 0x400) != 0 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL) + 2363LL) )
                    *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 0x2000u;
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 1u;
                }
                v105 = *((_DWORD *)v76 + 82);
                v100 = v105 == 1;
              }
              v107 = 0;
              if ( v105 == 1 )
                v107 = 0x80000000;
              v108 = v79->Flags.Value & 0x7FFFFFFF | v107;
              v109 = 0;
              v79->Flags.Value = v108;
              if ( !*((_DWORD *)v76 + 82) )
                v109 = 0x40000000;
              v79->Flags.Value = v108 & 0xBFFFFFFF | v109 | 0x20000000;
            }
          }
          else
          {
            v102 = 0;
            *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 1u;
            if ( *((_DWORD *)v76 + 82) == 1 )
              v102 = 0x80000000;
            v103 = v79->Flags.Value & 0x7FFFFFFF | v102;
            v104 = 0;
            v79->Flags.Value = v103;
            if ( !*((_DWORD *)v76 + 82) )
              v104 = 0x40000000;
            v79->Flags.Value = v103 & 0xBFFFFFFF | v104;
            v100 = *((_DWORD *)v76 + 82) == 1;
          }
          v110 = *(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL);
          if ( *((_QWORD *)v76 + 216) != v110 )
          {
            *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 4u;
            v111 = v79->Flags.Value & 0x3DFFFFFF | 0x2000000;
            v79->Flags.Value = v111;
            v110 = *(unsigned int *)(*((_QWORD *)v74 + 6) + 4LL);
            if ( (v110 & 2) != 0 )
              v79->Flags.Value = v111 | 0x20400000;
            v100 = 0;
          }
          if ( v101 == -3 )
          {
            if ( !v100 )
            {
              v119 = (_QWORD *)WdLogNewEntry5_WdError(v110);
              v119[3] = v76;
              v119[4] = -1073741811LL;
              goto LABEL_189;
            }
            *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) |= 0x100000u;
            v112 = *(_QWORD *)(*((_QWORD *)v76 + 216) + 2520LL);
            v113 = 636LL;
            if ( *(_DWORD *)(v112 + 712) )
              v113 = 716LL;
            *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) ^ (*(_DWORD *)(v113 + v112) << 6)) & 0x3C0;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v74 + 6) + 4LL) ^ (v101 << 6)) & 0x3C0;
          }
        }
        if ( v75 && (*((_DWORD *)v75 + 1) & 8) != 0 )
          v79->Flags.Value |= 0x88000u;
        v114 = v72->Flags;
        if ( (*(_WORD *)&v114 & 0x1800) != 0 )
        {
          v79->Flags.Value |= 0x20100000u;
          v114 = v72->Flags;
        }
        if ( (*(_WORD *)&v114 & 0x400) != 0 )
          v77[v78].Flags.Value |= 0x200000u;
        v74 = (struct DXGALLOCATION *)*((_QWORD *)v74 + 8);
        v73 = v93 + 1;
        if ( v73 >= v72->NumAllocations )
          goto LABEL_180;
      }
      v119 = (_QWORD *)WdLogNewEntry5_WdError(v96);
      v119[3] = v76;
      v119[4] = v74;
LABEL_188:
      v119[5] = -1073741811LL;
LABEL_189:
      WdLogEvent5_WdError(v119);
      v35 = -1073741811;
      goto LABEL_198;
    }
LABEL_180:
    if ( v75 )
    {
      v115 = v129;
      if ( (*(_DWORD *)&v72->Flags & 2) != 0 )
      {
        v116 = *((_QWORD *)v75 + 7);
        v117 = *(_QWORD *)(v116 + 16);
        if ( v117 && v129 && v129 != v117 )
        {
          v118 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v116);
          v118[3] = 275LL;
          v118[4] = 7LL;
          v118[5] = 0LL;
          v118[6] = 0LL;
          v118[7] = 0LL;
          WdLogEvent5_WdCriticalError(v118);
          v116 = *((_QWORD *)v75 + 7);
          v115 = v129;
        }
        *(_QWORD *)(v116 + 16) = v115;
      }
      else
      {
        v121 = *((_QWORD *)v75 + 7);
        if ( v121 && v129 && v121 != v129 )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v121);
          v122[3] = 275LL;
          v122[4] = 7LL;
          v122[5] = 0LL;
          v122[6] = 0LL;
          v122[7] = 0LL;
          WdLogEvent5_WdCriticalError(v122);
          v115 = v129;
        }
        *((_QWORD *)v75 + 7) = v115;
      }
    }
  }
LABEL_198:
  operator delete[](v125);
  return v35;
}
