/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C011E400
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0009B80 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B7D0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B890 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B8F0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000CDB4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F0D90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
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
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v48; // rbx
  __int64 v49; // rbx
  int v50; // r13d
  __int64 v51; // rax
  __int64 v52; // rcx
  const GUID *v53; // r8
  int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v58; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v60; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rcx
  _QWORD *v66; // rax
  unsigned __int8 v67; // cl
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // r8
  size_t v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  const GUID *v77; // r8
  struct _D3DKMT_CREATEALLOCATION *v78; // r10
  UINT v79; // r11d
  struct DXGALLOCATION *v80; // rsi
  struct DXGRESOURCE *v81; // r13
  DXGDEVICE *v82; // rdi
  struct _DXGK_ALLOCATIONINFO *v83; // r15
  __int64 v84; // r14
  struct _DXGK_ALLOCATIONINFO *v85; // rbx
  unsigned int Value; // edx
  __int64 v87; // r8
  __int64 v88; // r8
  UINT v89; // eax
  UINT v90; // eax
  struct DXGALLOCATION *v91; // rdx
  __int64 v92; // rcx
  SIZE_T v93; // rax
  __int64 v94; // rcx
  __int64 Flags; // rdx
  __int64 v96; // rcx
  DXGADAPTER *v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // r11d
  __int64 v101; // rdx
  __int64 (__fastcall **v102)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v103; // rcx
  int v104; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v105; // eax
  int v106; // r8d
  unsigned int v107; // ecx
  int v108; // ecx
  int v109; // eax
  unsigned int v110; // eax
  int v111; // ecx
  int v112; // edx
  unsigned int v113; // ecx
  int v114; // ecx
  int v115; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v116; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v117; // eax
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rcx
  _QWORD *v126; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v128; // [rsp+28h] [rbp-B1h]
  void *v129; // [rsp+30h] [rbp-A9h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-A1h]
  __int128 v131; // [rsp+48h] [rbp-91h]
  struct _D3DKMT_CREATEALLOCATION *v132; // [rsp+58h] [rbp-81h]
  struct _DXGK_ALLOCATIONINFO *v133; // [rsp+60h] [rbp-79h]
  struct DXGALLOCATION *v134; // [rsp+68h] [rbp-71h]
  struct DXGRESOURCE *v135; // [rsp+70h] [rbp-69h]
  DXGDEVICE *v136; // [rsp+78h] [rbp-61h]
  int v137; // [rsp+80h] [rbp-59h] BYREF
  __int64 v138; // [rsp+88h] [rbp-51h]
  char v139; // [rsp+90h] [rbp-49h]
  char v140[8]; // [rsp+98h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-39h] BYREF

  v12 = this;
  v135 = a6;
  v13 = a4;
  *(_OWORD *)Size = 0LL;
  v134 = a5;
  v15 = *((_QWORD *)this + 2);
  v131 = 0LL;
  v136 = this;
  v133 = a4;
  v16 = *(_QWORD *)(v15 + 16);
  v128 = (struct _D3DDDI_ALLOCATIONINFO2 *)a3;
  v132 = a2;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v19 + 24) = 2927LL;
      WdLogEvent5_WdAssertion(v19);
    }
    a3 = (const GUID *)v128;
  }
  NumAllocations = a2->NumAllocations;
  v21 = 0LL;
  v22 = 0;
  v129 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    v23 = v133;
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
        a3 = (const GUID *)v128;
      }
      NumAllocations = a2->NumAllocations;
      ++v22;
    }
    while ( v22 < (unsigned int)NumAllocations );
    v12 = v136;
    v21 = 0LL;
    v13 = v133;
  }
  DWORD2(v131) = 0;
  if ( v135 && (v21 = *((_QWORD *)v135 + 7), v28 = *((_DWORD *)v135 + 1), DWORD2(v131) = 1, (v28 & 1) != 0) )
    *(_QWORD *)&v131 = *(_QWORD *)(v21 + 16);
  else
    *(_QWORD *)&v131 = v21;
  v29 = a2->PrivateDriverDataSize;
  HIDWORD(Size[0]) = NumAllocations;
  Size[1] = (size_t)v13;
  if ( v29 && a2->pStandardAllocation )
  {
    LODWORD(Size[0]) = v29;
    v30 = operator new[](v29, 0x4B677844u, PagedPool);
    v129 = v30;
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
  v137 = -1;
  v138 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v139 = 1;
    v137 = 5002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(NumAllocations, &EventProfilerEnter, a3, 5002);
  }
  else
  {
    v139 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v137, 5002LL);
  CurrentProcess = PsGetCurrentProcess(v41, v40);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v46 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v48 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v46 = *v48;
    }
  }
  v49 = v46 + 112;
  v50 = 0;
  if ( !v46 )
    v49 = 0LL;
  if ( v49 && *(struct _KTHREAD **)(v49 + 8) == KeGetCurrentThread() )
  {
    v51 = WdLogNewEntry5_WdAssertion(v45, v44);
    *(_QWORD *)(v51 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( v46 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v49, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v54 = *(_DWORD *)(v49 + 16);
        if ( v54 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v52, &EventBlockThread, v53, v54);
      }
      ExAcquirePushLockExclusiveEx(v49, 0LL);
    }
    v50 = 2;
    *(_QWORD *)(v49 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v39 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4248LL));
  CurrentIrql = KeGetCurrentIrql();
  v58 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v60 = WdLogNewEntry5_WdAssertion(v56, v55);
      *(_QWORD *)(v60 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v60);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v56, v55);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v58 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v58 )
        v36 = *(_DWORD *)(v58 + 136);
    }
    else
    {
      v58 = 0LL;
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v140,
    *(struct DXGADAPTER **)(v39 + 16));
  v64 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v39 + 16) + 336LL))(
          *(_QWORD *)(*(_QWORD *)(v39 + 16) + 248LL),
          &v129);
  if ( v140[0] )
    KeUnstackDetachProcess(&ApcState);
  v65 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v65 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v63);
    v66[3] = 275LL;
    v66[4] = 16LL;
    v66[5] = v39;
    v66[6] = CurrentIrql;
    v67 = KeGetCurrentIrql();
    v66[7] = v67;
    WdLogEvent5_WdCriticalError(v66);
  }
  if ( v58 && *(_DWORD *)(v58 + 136) != v36 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v63);
    v68[3] = 275LL;
    v68[4] = 38LL;
    v68[5] = *(int *)(v58 + 136);
    v68[6] = v36;
    v68[7] = 0LL;
    WdLogEvent5_WdCriticalError(v68);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4248LL));
  v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v65, v63);
  v69[3] = v64;
  v69[4] = v131;
  v69[5] = *(_QWORD *)(Size[1] + 56);
  v69[6] = *(unsigned int *)(Size[1] + 64);
  v71 = Size[1];
  v72 = *(unsigned int *)(Size[1] + 36);
  v69[7] = v72;
  if ( (_DWORD)v64 && (_DWORD)v64 != -1073741811 && (_DWORD)v64 != -1073741801 )
  {
    v73 = WdLogNewEntry5_WdError(v71, v72, v70);
    *(_QWORD *)(v73 + 24) = v64;
    WdLogEvent5_WdError(v73);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v39 + 16));
  if ( v50 == 2 )
  {
    *(_QWORD *)(v49 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v49, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137, v74);
  if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v76, &EventProfilerExit, v77, v137);
  v35 = v64;
  if ( (int)v64 >= 0 )
  {
    v78 = v132;
    v79 = 0;
    v80 = v134;
    v81 = v135;
    if ( v132->NumAllocations )
    {
      v82 = v136;
      v83 = v133;
      do
      {
        v84 = v79;
        v85 = &v83[v79];
        *(_QWORD *)(*((_QWORD *)v80 + 6) + 16LL) = v85->hAllocation;
        *(_QWORD *)(*((_QWORD *)v80 + 6) + 24LL) = v85->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) & 0xFFFFF7FF | ((v85->Flags.Value & 0x30) != 0 ? 0x800 : 0);
        *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) ^ (v85->Flags.Value << 17)) & 0x80000;
        v85->Flags.Value &= 0x807FFFFu;
        Value = v85->Flags.Value;
        v87 = *(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL);
        if ( (*(_DWORD *)(v87 + 1916) & 0x40) != 0 && *(_BYTE *)(v87 + 2486) )
        {
          Value |= 0x8000u;
          v85->Flags.Value = Value;
        }
        v88 = Value;
        if ( (Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) + 2487LL) )
        {
          LODWORD(v88) = Value | 0x10000;
          v85->Flags.Value = Value | 0x10000;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
          {
            LODWORD(v88) = v88 | 0x20000;
            v85->Flags.Value = v88;
          }
          v89 = *((_DWORD *)a10 + 96);
          if ( v89 )
          {
            v85->SupportedWriteSegmentSet = v89;
            v85->PreferredSegment.Value = *((_DWORD *)a10 + 97);
          }
          v90 = *((_DWORD *)a10 + 98);
          if ( v90 )
            v85->Alignment = v90;
          v91 = v134;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
          {
            v92 = *((_QWORD *)v134 + 12 * v79 + 6);
            *(_DWORD *)(v92 + 4) |= 0x8000u;
          }
          v93 = *((_QWORD *)a10 + 50);
          if ( v93 )
            v85->Size = v93;
          if ( (*(_DWORD *)a10 & 0x8000) != 0 )
            v83[v79].Flags.Value |= 0x8000u;
          if ( *((_DWORD *)a10 + 4) == 5 )
          {
            v94 = *((_QWORD *)v91 + 12 * v79 + 6);
            *(_DWORD *)(v94 + 4) |= 0x10000u;
            v83[v79].Flags.Value |= 0x8000u;
          }
        }
        Flags = (unsigned int)v78->Flags;
        v96 = *(_DWORD *)&v78->Flags & 0x10000;
        if ( (*(_DWORD *)&v78->Flags & 0x10000) != 0 && v85->Size != a12->ExistingHeapData.Size )
        {
          v123 = (_QWORD *)WdLogNewEntry5_WdError(v96, Flags, v88);
          v123[3] = v83[v84].Size;
          v123[4] = a12->ExistingHeapData.Size;
LABEL_192:
          v123[5] = -1073741811LL;
          WdLogEvent5_WdError(v123);
          v35 = -1073741811;
          goto LABEL_200;
        }
        if ( (_DWORD)v96 && (Flags & 0x20020) != 0 || a10 && (*((_QWORD *)a10 + 42) || *((_QWORD *)a10 + 41)) )
          v85->Flags.Value |= 1u;
        if ( *((_DWORD *)v82 + 82) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v82 + 2) + 16LL)) > 1
          && !DXGADAPTER::ReplicateGdiContent(v97)
          && (v128[v84].Flags.Value & 1) == 0 )
        {
          v83[v84].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) + 2580LL);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v82 + 2) + 16LL)) )
          *((_DWORD *)v80 + 18) ^= (*((_DWORD *)v80 + 18) ^ (v85->MaximumRenamingListLength << 12)) & 0x3F000;
        else
          *((_DWORD *)v80 + 18) &= 0xFFFC0FFF;
        v101 = v85->Flags.Value;
        if ( (v101 & 0x200) != 0
          && (v102 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v82 + 2) + 16LL),
              v102[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v101 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v82 + 2) + 16LL))
           || v102[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v102[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v102[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v102[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v124 = (_QWORD *)WdLogNewEntry5_WdError(v102, v101, v98);
          v124[3] = v82;
          v124[4] = *(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL);
          v124[5] = -1073741637LL;
          WdLogEvent5_WdError(v124);
          v35 = -1073741637;
          goto LABEL_200;
        }
        v103 = *((_QWORD *)v80 + 6);
        if ( !*(_QWORD *)(v103 + 16) )
        {
          v123 = (_QWORD *)WdLogNewEntry5_WdError(v103, v101, v98);
          v123[3] = v82;
          v123[4] = v80;
          goto LABEL_192;
        }
        v75 = 96 * v84;
        v104 = *(_DWORD *)(96 * v84 + v98 + 32);
        if ( (v104 & 2) != 0 )
        {
          *(_DWORD *)(v103 + 4) |= 0x1000u;
          v104 = *(_DWORD *)(v75 + v98 + 32);
        }
        if ( (v104 & 1) == 0 || (v85->Flags.Value & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&v78->Flags & 2) != 0 )
            v85->Flags.Value |= 0x20000000u;
          if ( *((_DWORD *)v82 + 82) == 2 && *((_QWORD *)v82 + 216) != *(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) )
          {
            if ( v99 )
            {
              if ( *(_QWORD *)(v99 + 32) )
              {
                if ( *(_QWORD *)(v99 + 40) )
                {
                  if ( *(_DWORD *)(v99 + 16) == 2 )
                  {
                    v116 = v78->Flags;
                    if ( (*(_BYTE *)&v116 & 0x20) == 0 && (*(_BYTE *)&v116 & 2) != 0 )
                    {
                      *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 2u;
                      *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 4u;
                      v83[v84].Flags.Value = v83[v84].Flags.Value & 0x3DBFFFFF | 0x2400000;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_176;
        }
        v105 = v78->Flags;
        v106 = *(_DWORD *)(v75 + v98 + 28);
        if ( (*(_BYTE *)&v105 & 2) != 0 )
        {
          v111 = *((_DWORD *)v82 + 82);
          if ( v111 == 2 )
          {
            *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 2u;
            v85->Flags.Value |= 0x40000000u;
            goto LABEL_161;
          }
          if ( (*(_WORD *)&v105 & 0x800) != 0 )
          {
            if ( (*(_WORD *)&v105 & 0x400) != 0 )
            {
              if ( v111 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) + 2387LL) )
                v112 = 0x2000;
              else
                v112 = 0;
              *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) = v112 | *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) & 0xFFFFDFFF;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 1u;
              v85->Flags.Value |= 0x80000u;
            }
          }
          else if ( v111 == 1 )
          {
            if ( (*(_WORD *)&v105 & 0x400) != 0 )
            {
              if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) + 2387LL) )
                *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 0x2000u;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 1u;
            }
          }
          v113 = 0;
          if ( *((_DWORD *)v82 + 82) == 1 )
            v113 = 0x80000000;
          v114 = v85->Flags.Value & 0x7FFFFFFF | v113;
          v115 = 0;
          v85->Flags.Value = v114;
          v75 = 0x40000000LL;
          if ( !*((_DWORD *)v82 + 82) )
            v115 = 0x40000000;
          v110 = v114 & 0xBFFFFFFF | v115 | 0x20000000;
        }
        else
        {
          v107 = 0;
          *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 1u;
          if ( *((_DWORD *)v82 + 82) == 1 )
            v107 = 0x80000000;
          v108 = v85->Flags.Value & 0x7FFFFFFF | v107;
          v109 = 0;
          v85->Flags.Value = v108;
          v75 = 0x40000000LL;
          if ( !*((_DWORD *)v82 + 82) )
            v109 = 0x40000000;
          v110 = v108 & 0xBFFFFFFF | v109;
        }
        v85->Flags.Value = v110;
LABEL_161:
        if ( *((_QWORD *)v82 + 216) != *(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL) )
        {
          *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) |= 4u;
          v75 = v85->Flags.Value & 0x3DFFFFFF;
          LODWORD(v75) = v75 | 0x2000000;
          v85->Flags.Value = v75;
          if ( (*(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) & 2) != 0 )
          {
            v75 = (unsigned int)v75 | 0x20400000;
            v85->Flags.Value = v75;
          }
        }
        *(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v80 + 6) + 4LL) ^ (v106 << 6)) & 0x3C0;
LABEL_176:
        if ( v81 && (*((_DWORD *)v81 + 1) & 8) != 0 )
          v85->Flags.Value |= 0x88000u;
        v117 = v78->Flags;
        if ( (*(_WORD *)&v117 & 0x1800) != 0 )
        {
          v85->Flags.Value |= 0x20100000u;
          v117 = v78->Flags;
        }
        if ( (*(_WORD *)&v117 & 0x400) != 0 )
          v83[v84].Flags.Value |= 0x200000u;
        v80 = (struct DXGALLOCATION *)*((_QWORD *)v80 + 8);
        v79 = v100 + 1;
      }
      while ( v79 < v78->NumAllocations );
    }
    if ( v81 )
    {
      v118 = v131;
      if ( (*(_DWORD *)&v78->Flags & 2) != 0 )
      {
        v119 = *((_QWORD *)v81 + 7);
        v120 = v119;
        v121 = *(_QWORD *)(v119 + 16);
        if ( v121 && (_QWORD)v131 && (_QWORD)v131 != v121 )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v119, v119);
          v122[3] = 275LL;
          v122[4] = 7LL;
          v122[5] = 0LL;
          v122[6] = 0LL;
          v122[7] = 0LL;
          WdLogEvent5_WdCriticalError(v122);
          v120 = *((_QWORD *)v81 + 7);
          v118 = v131;
        }
        *(_QWORD *)(v120 + 16) = v118;
      }
      else
      {
        v125 = *((_QWORD *)v81 + 7);
        if ( v125 && (_QWORD)v131 && v125 != (_QWORD)v131 )
        {
          v126 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v125, v75);
          v126[3] = 275LL;
          v126[4] = 7LL;
          v126[5] = 0LL;
          v126[6] = 0LL;
          v126[7] = 0LL;
          WdLogEvent5_WdCriticalError(v126);
          v118 = v131;
        }
        *((_QWORD *)v81 + 7) = v118;
      }
    }
  }
LABEL_200:
  operator delete[](v129);
  return v35;
}
