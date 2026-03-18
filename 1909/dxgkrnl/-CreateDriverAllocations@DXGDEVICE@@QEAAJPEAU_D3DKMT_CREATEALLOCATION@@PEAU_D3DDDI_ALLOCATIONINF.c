/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C00EE500
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009DB0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B9C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BA80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000BAE0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F3A30 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
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
  struct _DXGK_ALLOCATIONINFO *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 NumAllocations; // rcx
  __int64 v21; // rdx
  unsigned int v22; // ebx
  struct _DXGK_ALLOCATIONINFO *v23; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v24; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v26; // r8
  void *v27; // rcx
  int v28; // eax
  UINT v29; // eax
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  unsigned int v35; // r12d
  int v36; // r15d
  UINT i; // edx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v46; // rbx
  __int64 v47; // rbx
  int v48; // r13d
  __int64 v49; // rax
  __int64 v50; // rcx
  const GUID *v51; // r8
  int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v56; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v58; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rcx
  _QWORD *v64; // rax
  unsigned __int8 v65; // cl
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // r8
  size_t v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  const GUID *v75; // r8
  struct _D3DKMT_CREATEALLOCATION *v76; // r10
  UINT v77; // r11d
  struct DXGALLOCATION *v78; // rsi
  struct DXGRESOURCE *v79; // r13
  DXGDEVICE *v80; // rdi
  struct _DXGK_ALLOCATIONINFO *v81; // r15
  __int64 v82; // r14
  struct _DXGK_ALLOCATIONINFO *v83; // rbx
  unsigned int Value; // edx
  __int64 v85; // r8
  __int64 v86; // r8
  UINT v87; // eax
  UINT v88; // eax
  struct DXGALLOCATION *v89; // rdx
  __int64 v90; // rcx
  SIZE_T v91; // rax
  __int64 v92; // rcx
  __int64 Flags; // rdx
  __int64 v94; // rcx
  DXGADAPTER *v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // r11d
  __int64 v99; // rdx
  __int64 (__fastcall **v100)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v101; // rcx
  int v102; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v103; // eax
  int v104; // r8d
  unsigned int v105; // ecx
  int v106; // ecx
  int v107; // eax
  unsigned int v108; // eax
  int v109; // ecx
  int v110; // edx
  unsigned int v111; // ecx
  int v112; // ecx
  int v113; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v114; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v115; // eax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rcx
  _QWORD *v124; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v126; // [rsp+28h] [rbp-B1h]
  void *v127; // [rsp+30h] [rbp-A9h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-A1h]
  __int128 v129; // [rsp+48h] [rbp-91h]
  struct _D3DKMT_CREATEALLOCATION *v130; // [rsp+58h] [rbp-81h]
  struct _DXGK_ALLOCATIONINFO *v131; // [rsp+60h] [rbp-79h]
  struct DXGALLOCATION *v132; // [rsp+68h] [rbp-71h]
  struct DXGRESOURCE *v133; // [rsp+70h] [rbp-69h]
  DXGDEVICE *v134; // [rsp+78h] [rbp-61h]
  int v135; // [rsp+80h] [rbp-59h] BYREF
  __int64 v136; // [rsp+88h] [rbp-51h]
  char v137; // [rsp+90h] [rbp-49h]
  char v138[8]; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-39h] BYREF

  v12 = this;
  v133 = a6;
  v13 = a4;
  *(_OWORD *)Size = 0LL;
  v132 = a5;
  v15 = *((_QWORD *)this + 2);
  v129 = 0LL;
  v134 = this;
  v131 = a4;
  v16 = *(_QWORD *)(v15 + 16);
  v126 = (struct _D3DDDI_ALLOCATIONINFO2 *)a3;
  v130 = a2;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v19 + 24) = 2927LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a3 = (const GUID *)v126;
  }
  NumAllocations = a2->NumAllocations;
  v21 = 0LL;
  v22 = 0;
  v127 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    v23 = v131;
    do
    {
      v24 = (struct _D3DDDI_ALLOCATIONINFO2 *)&a3[6 * v22];
      if ( v24->pPrivateDriverData )
      {
        PrivateDriverDataSize = v24->PrivateDriverDataSize;
        v26 = v22;
        v23[v26].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v23[v26].pPrivateDriverData = v24->pPrivateDriverData;
        }
        else
        {
          v27 = a7[v22];
          v23[v26].pPrivateDriverData = v27;
          memmove(v27, a8[v22], PrivateDriverDataSize);
        }
        a3 = (const GUID *)v126;
      }
      NumAllocations = a2->NumAllocations;
      ++v22;
    }
    while ( v22 < (unsigned int)NumAllocations );
    v12 = v134;
    v21 = 0LL;
    v13 = v131;
  }
  DWORD2(v129) = 0;
  if ( v133 && (v21 = *((_QWORD *)v133 + 7), v28 = *((_DWORD *)v133 + 1), DWORD2(v129) = 1, (v28 & 1) != 0) )
    *(_QWORD *)&v129 = *(_QWORD *)(v21 + 16);
  else
    *(_QWORD *)&v129 = v21;
  v29 = a2->PrivateDriverDataSize;
  HIDWORD(Size[0]) = NumAllocations;
  Size[1] = (size_t)v13;
  if ( v29 && a2->pStandardAllocation )
  {
    LODWORD(Size[0]) = v29;
    v30 = operator new[](v29, 0x4B677844u, PagedPool);
    v127 = v30;
    if ( !v30 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v35 = -1073741801;
      v34[3] = v12;
      v34[4] = LODWORD(Size[0]);
      v34[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_200;
    }
    if ( a11 )
      memmove(v30, Src, LODWORD(Size[0]));
    else
      memmove(v30, a2->pStandardAllocation, LODWORD(Size[0]));
    v36 = 0;
  }
  else
  {
    v36 = 0;
    LODWORD(Size[0]) = 0;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL)) )
      {
        for ( i = 0; i < a2->NumAllocations; *(_DWORD *)(88 * v38 + Size[1] + 64) |= 0x400u )
        {
          v38 = i++;
          NumAllocations = 88 * v38;
        }
      }
    }
  }
  v39 = *((_QWORD *)v12 + 2);
  v135 = -1;
  v136 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v137 = 1;
    v135 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(NumAllocations, &EventProfilerEnter, a3, 5002);
  }
  else
  {
    v137 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v135, 5002LL);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v44 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v46 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v44 = *v46;
    }
  }
  v47 = v44 + 112;
  v48 = 0;
  if ( !v44 )
    v47 = 0LL;
  if ( v47 && *(struct _KTHREAD **)(v47 + 8) == KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(v43, v42);
    *(_QWORD *)(v49 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( v44 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v47, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v52 = *(_DWORD *)(v47 + 16);
        if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v50, &EventBlockThread, v51, v52);
      }
      ExAcquirePushLockExclusiveEx(v47, 0LL);
    }
    v48 = 2;
    *(_QWORD *)(v47 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v39 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v56 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v58 = WdLogNewEntry5_WdAssertion(v54, v53);
      *(_QWORD *)(v58 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v58);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v54, v53);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v56 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v56 )
        v36 = *(_DWORD *)(v56 + 136);
    }
    else
    {
      v56 = 0LL;
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v138,
    *(struct DXGADAPTER **)(v39 + 16));
  v62 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v39 + 16) + 336LL))(
          *(_QWORD *)(*(_QWORD *)(v39 + 16) + 248LL),
          &v127);
  if ( v138[0] )
    KeUnstackDetachProcess(&ApcState);
  v63 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v63 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v61);
    v64[3] = 275LL;
    v64[4] = 16LL;
    v64[5] = v39;
    v64[6] = CurrentIrql;
    v65 = KeGetCurrentIrql();
    v64[7] = v65;
    WdLogEvent5_WdCriticalError(v64);
  }
  if ( v56 && *(_DWORD *)(v56 + 136) != v36 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v61);
    v66[3] = 275LL;
    v66[4] = 38LL;
    v66[5] = *(int *)(v56 + 136);
    v66[6] = v36;
    v66[7] = 0LL;
    WdLogEvent5_WdCriticalError(v66);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4248LL));
  v67 = (_QWORD *)WdLogNewEntry5_WdTrace(v63, v61);
  v67[3] = v62;
  v67[4] = v129;
  v67[5] = *(_QWORD *)(Size[1] + 56);
  v67[6] = *(unsigned int *)(Size[1] + 64);
  v69 = Size[1];
  v70 = *(unsigned int *)(Size[1] + 36);
  v67[7] = v70;
  if ( (_DWORD)v62 && (_DWORD)v62 != -1073741811 && (_DWORD)v62 != -1073741801 )
  {
    v71 = WdLogNewEntry5_WdError(v69, v70, v68);
    *(_QWORD *)(v71 + 24) = v62;
    WdLogEvent5_WdError(v71);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v39 + 16));
  if ( v48 == 2 )
  {
    *(_QWORD *)(v47 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v47, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v135, v72);
  if ( v137 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v74, &EventProfilerExit, v75, v135);
  v35 = v62;
  if ( (int)v62 >= 0 )
  {
    v76 = v130;
    v77 = 0;
    v78 = v132;
    v79 = v133;
    if ( v130->NumAllocations )
    {
      v80 = v134;
      v81 = v131;
      do
      {
        v82 = v77;
        v83 = &v81[v77];
        *(_QWORD *)(*((_QWORD *)v78 + 6) + 16LL) = v83->hAllocation;
        *(_QWORD *)(*((_QWORD *)v78 + 6) + 24LL) = v83->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) & 0xFFFFF7FF | ((v83->Flags.Value & 0x30) != 0 ? 0x800 : 0);
        *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^ (v83->Flags.Value << 17)) & 0x80000;
        v83->Flags.Value &= 0x807FFFFu;
        Value = v83->Flags.Value;
        v85 = *(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL);
        if ( (*(_DWORD *)(v85 + 1916) & 0x40) != 0 && *(_BYTE *)(v85 + 2486) )
        {
          Value |= 0x8000u;
          v83->Flags.Value = Value;
        }
        v86 = Value;
        if ( (Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL) + 2487LL) )
        {
          LODWORD(v86) = Value | 0x10000;
          v83->Flags.Value = Value | 0x10000;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
          {
            LODWORD(v86) = v86 | 0x20000;
            v83->Flags.Value = v86;
          }
          v87 = *((_DWORD *)a10 + 96);
          if ( v87 )
          {
            v83->SupportedWriteSegmentSet = v87;
            v83->PreferredSegment.Value = *((_DWORD *)a10 + 97);
          }
          v88 = *((_DWORD *)a10 + 98);
          if ( v88 )
            v83->Alignment = v88;
          v89 = v132;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
          {
            v90 = *((_QWORD *)v132 + 12 * v77 + 6);
            *(_DWORD *)(v90 + 4) |= 0x8000u;
          }
          v91 = *((_QWORD *)a10 + 50);
          if ( v91 )
            v83->Size = v91;
          if ( (*(_DWORD *)a10 & 0x8000) != 0 )
            v81[v77].Flags.Value |= 0x8000u;
          if ( *((_DWORD *)a10 + 4) == 5 )
          {
            v92 = *((_QWORD *)v89 + 12 * v77 + 6);
            *(_DWORD *)(v92 + 4) |= 0x10000u;
            v81[v77].Flags.Value |= 0x8000u;
          }
        }
        Flags = (unsigned int)v76->Flags;
        v94 = *(_DWORD *)&v76->Flags & 0x10000;
        if ( (*(_DWORD *)&v76->Flags & 0x10000) != 0 && v83->Size != a12->ExistingHeapData.Size )
        {
          v121 = (_QWORD *)WdLogNewEntry5_WdError(v94, Flags, v86);
          v121[3] = v81[v82].Size;
          v121[4] = a12->ExistingHeapData.Size;
LABEL_192:
          v121[5] = -1073741811LL;
          WdLogEvent5_WdError(v121);
          v35 = -1073741811;
          goto LABEL_200;
        }
        if ( (_DWORD)v94 && (Flags & 0x20020) != 0 || a10 && (*((_QWORD *)a10 + 42) || *((_QWORD *)a10 + 41)) )
          v83->Flags.Value |= 1u;
        if ( *((_DWORD *)v80 + 82) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v80 + 2) + 16LL)) > 1
          && !DXGADAPTER::ReplicateGdiContent(v95)
          && (v126[v82].Flags.Value & 1) == 0 )
        {
          v81[v82].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL) + 2580LL);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v80 + 2) + 16LL)) )
          *((_DWORD *)v78 + 18) ^= (*((_DWORD *)v78 + 18) ^ (v83->MaximumRenamingListLength << 12)) & 0x3F000;
        else
          *((_DWORD *)v78 + 18) &= 0xFFFC0FFF;
        v99 = v83->Flags.Value;
        if ( (v99 & 0x200) != 0
          && (v100 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v80 + 2) + 16LL),
              v100[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v99 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v80 + 2) + 16LL))
           || v100[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v100[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v100[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v100[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99, v96);
          v122[3] = v80;
          v122[4] = *(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL);
          v122[5] = -1073741637LL;
          WdLogEvent5_WdError(v122);
          v35 = -1073741637;
          goto LABEL_200;
        }
        v101 = *((_QWORD *)v78 + 6);
        if ( !*(_QWORD *)(v101 + 16) )
        {
          v121 = (_QWORD *)WdLogNewEntry5_WdError(v101, v99, v96);
          v121[3] = v80;
          v121[4] = v78;
          goto LABEL_192;
        }
        v73 = 96 * v82;
        v102 = *(_DWORD *)(96 * v82 + v96 + 32);
        if ( (v102 & 2) != 0 )
        {
          *(_DWORD *)(v101 + 4) |= 0x1000u;
          v102 = *(_DWORD *)(v73 + v96 + 32);
        }
        if ( (v102 & 1) == 0 || (v83->Flags.Value & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&v76->Flags & 2) != 0 )
            v83->Flags.Value |= 0x20000000u;
          if ( *((_DWORD *)v80 + 82) == 2 && *((_QWORD *)v80 + 216) != *(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL) )
          {
            if ( v97 )
            {
              if ( *(_QWORD *)(v97 + 32) )
              {
                if ( *(_QWORD *)(v97 + 40) )
                {
                  if ( *(_DWORD *)(v97 + 16) == 2 )
                  {
                    v114 = v76->Flags;
                    if ( (*(_BYTE *)&v114 & 0x20) == 0 && (*(_BYTE *)&v114 & 2) != 0 )
                    {
                      *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 2u;
                      *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 4u;
                      v81[v82].Flags.Value = v81[v82].Flags.Value & 0x3DBFFFFF | 0x2400000;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_176;
        }
        v103 = v76->Flags;
        v104 = *(_DWORD *)(v73 + v96 + 28);
        if ( (*(_BYTE *)&v103 & 2) != 0 )
        {
          v109 = *((_DWORD *)v80 + 82);
          if ( v109 == 2 )
          {
            *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 2u;
            v83->Flags.Value |= 0x40000000u;
            goto LABEL_161;
          }
          if ( (*(_WORD *)&v103 & 0x800) != 0 )
          {
            if ( (*(_WORD *)&v103 & 0x400) != 0 )
            {
              if ( v109 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL) + 2387LL) )
                v110 = 0x2000;
              else
                v110 = 0;
              *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) = v110 | *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) & 0xFFFFDFFF;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 1u;
              v83->Flags.Value |= 0x80000u;
            }
          }
          else if ( v109 == 1 )
          {
            if ( (*(_WORD *)&v103 & 0x400) != 0 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL) + 2387LL) )
                *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 0x2000u;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 1u;
            }
          }
          v111 = 0;
          if ( *((_DWORD *)v80 + 82) == 1 )
            v111 = 0x80000000;
          v112 = v83->Flags.Value & 0x7FFFFFFF | v111;
          v113 = 0;
          v83->Flags.Value = v112;
          v73 = 0x40000000LL;
          if ( !*((_DWORD *)v80 + 82) )
            v113 = 0x40000000;
          v108 = v112 & 0xBFFFFFFF | v113 | 0x20000000;
        }
        else
        {
          v105 = 0;
          *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 1u;
          if ( *((_DWORD *)v80 + 82) == 1 )
            v105 = 0x80000000;
          v106 = v83->Flags.Value & 0x7FFFFFFF | v105;
          v107 = 0;
          v83->Flags.Value = v106;
          v73 = 0x40000000LL;
          if ( !*((_DWORD *)v80 + 82) )
            v107 = 0x40000000;
          v108 = v106 & 0xBFFFFFFF | v107;
        }
        v83->Flags.Value = v108;
LABEL_161:
        if ( *((_QWORD *)v80 + 216) != *(_QWORD *)(*((_QWORD *)v80 + 2) + 16LL) )
        {
          *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 4u;
          v73 = v83->Flags.Value & 0x3DFFFFFF;
          LODWORD(v73) = v73 | 0x2000000;
          v83->Flags.Value = v73;
          if ( (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) & 2) != 0 )
          {
            v73 = (unsigned int)v73 | 0x20400000;
            v83->Flags.Value = v73;
          }
        }
        *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^ (v104 << 6)) & 0x3C0;
LABEL_176:
        if ( v79 && (*((_DWORD *)v79 + 1) & 8) != 0 )
          v83->Flags.Value |= 0x88000u;
        v115 = v76->Flags;
        if ( (*(_WORD *)&v115 & 0x1800) != 0 )
        {
          v83->Flags.Value |= 0x20100000u;
          v115 = v76->Flags;
        }
        if ( (*(_WORD *)&v115 & 0x400) != 0 )
          v81[v82].Flags.Value |= 0x200000u;
        v78 = (struct DXGALLOCATION *)*((_QWORD *)v78 + 8);
        v77 = v98 + 1;
      }
      while ( v77 < v76->NumAllocations );
    }
    if ( v79 )
    {
      v116 = v129;
      if ( (*(_DWORD *)&v76->Flags & 2) != 0 )
      {
        v117 = *((_QWORD *)v79 + 7);
        v118 = v117;
        v119 = *(_QWORD *)(v117 + 16);
        if ( v119 && (_QWORD)v129 && (_QWORD)v129 != v119 )
        {
          v120 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v117);
          v120[3] = 275LL;
          v120[4] = 7LL;
          v120[5] = 0LL;
          v120[6] = 0LL;
          v120[7] = 0LL;
          WdLogEvent5_WdCriticalError(v120);
          v118 = *((_QWORD *)v79 + 7);
          v116 = v129;
        }
        *(_QWORD *)(v118 + 16) = v116;
      }
      else
      {
        v123 = *((_QWORD *)v79 + 7);
        if ( v123 && (_QWORD)v129 && v123 != (_QWORD)v129 )
        {
          v124 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v123, v73);
          v124[3] = 275LL;
          v124[4] = 7LL;
          v124[5] = 0LL;
          v124[6] = 0LL;
          v124[7] = 0LL;
          WdLogEvent5_WdCriticalError(v124);
          v116 = v129;
        }
        *((_QWORD *)v79 + 7) = v116;
      }
    }
  }
LABEL_200:
  operator delete[](v127);
  return v35;
}
