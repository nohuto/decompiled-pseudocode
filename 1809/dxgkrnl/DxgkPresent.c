/*
 * XREFs of DxgkPresent @ 0x1C01251E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0013F44 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0021AFC (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0021BA0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     McTemplateK0qpqqqpp @ 0x1C0021C90 (McTemplateK0qpqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C0021D4C (McTemplateK0qqxxqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0125D80 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01260FC (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C02246A8 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0225EE8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(char *Src, int a2)
{
  bool v4; // r14
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v7; // rdi
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rbx
  const GUID *v10; // r8
  __int64 v11; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  char *v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGCONTEXT *v20; // r14
  __int64 v21; // r13
  struct _KEVENT *v22; // r15
  struct _KEVENT *v23; // r15
  unsigned int v24; // r15d
  __int64 v25; // r15
  _QWORD *PoolWithTag; // rcx
  unsigned __int64 v27; // r8
  size_t v28; // rax
  PVOID v29; // r9
  _BYTE *v30; // r9
  size_t v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGADAPTER *v36; // r15
  int v37; // eax
  DXGPRESENT *v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  struct DXGADAPTER *v41; // rdi
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  const GUID *v45; // r8
  int v46; // edi
  __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // rcx
  PSLIST_ENTRY v50; // rdi
  __int64 v51; // rcx
  int v52; // eax
  int v53; // r8d
  char v54; // al
  unsigned int v55; // edx
  __int64 v56; // rcx
  int v57; // eax
  int v58; // r8d
  char v59; // al
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  unsigned int v63; // eax
  DXGGLOBAL **v64; // rdx
  _BYTE *v65; // rcx
  __int64 v66; // rcx
  const GUID *v67; // r8
  struct DXGGLOBAL *v68; // rax
  char *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rbx
  PLIST_ENTRY i; // rdi
  DXGPRESENT *v76; // rcx
  __int64 v77; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v79; // r12
  __int64 v80; // rdi
  __int64 v81; // rcx
  const GUID *v82; // r8
  struct DXGGLOBAL *v83; // rax
  union _SLIST_HEADER *v84; // rdi
  __int64 v85; // rcx
  const GUID *v86; // r8
  struct DXGGLOBAL *v87; // rax
  union _SLIST_HEADER *v88; // rdi
  __int64 v89; // rcx
  __int64 v90; // rax
  int Next; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  _QWORD *v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  const GUID *v99; // r8
  struct DXGGLOBAL *v100; // rax
  union _SLIST_HEADER *v101; // rdi
  __int64 v102; // rax
  __int64 v103; // rcx
  const GUID *v104; // r8
  unsigned __int8 v105; // r15
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  const GUID *v109; // r8
  struct DXGGLOBAL *v110; // rax
  union _SLIST_HEADER *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // r10
  unsigned int v116; // ecx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r10
  __int64 v126; // rax
  PVOID v127; // rcx
  _QWORD *v128; // rax
  PVOID v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rcx
  const GUID *v136; // r8
  struct DXGGLOBAL *v137; // rax
  union _SLIST_HEADER *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  const GUID *v142; // r8
  struct DXGGLOBAL *v143; // rax
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  _QWORD *v145; // rax
  __int64 v146; // rcx
  const GUID *v147; // r8
  struct DXGGLOBAL *v148; // rax
  union _SLIST_HEADER *v149; // rsi
  unsigned int v150; // r14d
  __int64 v151; // rcx
  const GUID *v152; // r8
  struct DXGGLOBAL *v153; // rax
  union _SLIST_HEADER *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // rcx
  const GUID *v157; // r8
  struct DXGGLOBAL *v158; // rax
  void (__fastcall *v159)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  int v160; // r12d
  __int64 v161; // rcx
  const GUID *v162; // r8
  struct DXGGLOBAL *v163; // rax
  union _SLIST_HEADER *v164; // rdi
  __int64 *v165; // rax
  __int64 *v166; // rdi
  int v167; // [rsp+50h] [rbp-228h] BYREF
  __int64 v168; // [rsp+58h] [rbp-220h]
  __int64 v169; // [rsp+60h] [rbp-218h]
  int *v170; // [rsp+68h] [rbp-210h]
  char v171; // [rsp+70h] [rbp-208h]
  PVOID P; // [rsp+78h] [rbp-200h]
  _BYTE v173[32]; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned int v174; // [rsp+A0h] [rbp-1D8h]
  PVOID v175; // [rsp+A8h] [rbp-1D0h]
  _BYTE v176[32]; // [rsp+B0h] [rbp-1C8h] BYREF
  int v177; // [rsp+D0h] [rbp-1A8h]
  _BYTE v178[16]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v179; // [rsp+E8h] [rbp-190h] BYREF
  int v180; // [rsp+F0h] [rbp-188h]
  __int64 v181; // [rsp+F8h] [rbp-180h] BYREF
  struct DXGADAPTER *v182; // [rsp+100h] [rbp-178h]
  char v183; // [rsp+108h] [rbp-170h]
  PSLIST_ENTRY ListEntry; // [rsp+110h] [rbp-168h]
  struct DXGCONTEXT *v185[3]; // [rsp+118h] [rbp-160h] BYREF
  char v186[8]; // [rsp+130h] [rbp-148h] BYREF
  struct _KTHREAD **v187[2]; // [rsp+138h] [rbp-140h] BYREF
  DXGADAPTER *v188; // [rsp+148h] [rbp-130h]
  char v189; // [rsp+150h] [rbp-128h]
  struct _KTHREAD **v190[5]; // [rsp+158h] [rbp-120h] BYREF
  char v191; // [rsp+180h] [rbp-F8h]
  __int64 v192; // [rsp+190h] [rbp-E8h]
  struct _SLIST_ENTRY *v193[2]; // [rsp+198h] [rbp-E0h] BYREF
  _QWORD v194[6]; // [rsp+1A8h] [rbp-D0h] BYREF
  char v195; // [rsp+1D8h] [rbp-A0h]
  _BYTE v196[32]; // [rsp+1E0h] [rbp-98h] BYREF
  _BYTE v197[120]; // [rsp+200h] [rbp-78h] BYREF
  int AllocationInfo; // [rsp+290h] [rbp+18h] BYREF
  PVOID v200; // [rsp+298h] [rbp+20h]

  AllocationInfo = -1073741811;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = (char *)Global + 800;
  ++*((_DWORD *)Global + 205);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 50);
  ListEntry = v9;
  if ( !v9 )
  {
    ++*((_DWORD *)v7 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v7 + 6))(
                         *((unsigned int *)v7 + 9),
                         *((unsigned int *)v7 + 11),
                         *((unsigned int *)v7 + 10),
                         v7);
    ListEntry = v9;
  }
  if ( !v9 )
  {
    v77 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v77 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v77);
    return 3221225495LL;
  }
  memset(v9, 0, 0x5F8uLL);
  if ( bTracingEnabled )
    v11 = (__int64)v9;
  else
    v11 = 0LL;
  v168 = 0LL;
  v167 = 2020;
  v170 = &AllocationInfo;
  v171 = 0;
  v169 = v11;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&AllocationInfo, &EventProfilerEnter, v10, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v167, 2020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v79 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v15 = *v79;
      }
    }
  }
  v185[1] = (struct DXGCONTEXT *)v15;
  if ( !v15 )
  {
    v80 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v80 + 24) = -1073741811LL;
    *(_QWORD *)(v80 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v80);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v82,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v82,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_128;
    goto LABEL_129;
  }
  v16 = Src;
  if ( v4 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      v16 = (char *)MmUserProbeAddress;
    memmove(v9, v16, 0x5D8uLL);
  }
  else
  {
    memmove(v9, Src, 0x5D8uLL);
  }
  if ( !a2 && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v86,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v86,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v85, &EventProfilerExit, v86, v167);
    v87 = DXGGLOBAL::GetGlobal(v85);
    v88 = (union _SLIST_HEADER *)((char *)v87 + 800);
    ++*((_DWORD *)v87 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v87 + 50) < *((_WORD *)v87 + 408) )
    {
      ExpInterlockedPushEntrySList(v88, v9);
    }
    else
    {
      ++LODWORD(v88[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v88[3].Region)(v9, v88);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    v89 = *((unsigned int *)&v9[90].Next + 2);
    if ( !(_DWORD)v89 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v89);
      *(_QWORD *)(v90 + 24) = 1138LL;
      WdLogEvent5_WdAssertion(v90);
      LODWORD(v89) = *((_DWORD *)&v9[90].Next + 2);
    }
    Next = (int)v9->Next;
    LODWORD(v9->Next) = v89;
    *((_DWORD *)&v9[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       (struct DXGPROCESS *)v15,
                       (const struct _D3DKMT_PRESENT *)v9,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 12));
    if ( AllocationInfo < 0 )
    {
      v95 = WdLogNewEntry5_WdWarning(v93, v92, v94);
      *(_QWORD *)(v95 + 24) = HIDWORD(v9[1].Next);
      WdLogEvent5_WdWarning(v95);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v178,
    (unsigned int)v9->Next,
    (struct _KTHREAD **)v15,
    v185,
    0);
  v20 = v185[0];
  if ( !v185[0] )
  {
    v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v96[3] = -1073741811LL;
    v96[4] = PsGetCurrentProcess();
    v96[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v96);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    v97 = v169;
    if ( !v171 )
    {
      if ( !v169 || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_155;
LABEL_154:
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v97,
        v82,
        *(_DWORD *)v97,
        *(_QWORD *)(v97 + 8),
        *(_DWORD *)(v97 + 16),
        *(_DWORD *)(v97 + 88),
        *v170,
        *(_DWORD *)(v97 + 20),
        *(_DWORD *)(v97 + 24));
      goto LABEL_155;
    }
    goto LABEL_158;
  }
  if ( *((_BYTE *)v185[0] + 433) && *((_DWORD *)&v9[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v99,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v99,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v98, &EventProfilerExit, v99, v167);
    v100 = DXGGLOBAL::GetGlobal(v98);
    v101 = (union _SLIST_HEADER *)((char *)v100 + 800);
    ++*((_DWORD *)v100 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v100 + 50) < *((_WORD *)v100 + 408) )
    {
      ExpInterlockedPushEntrySList(v101, v9);
    }
    else
    {
      ++LODWORD(v101[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v101[3].Region)(v9, v101);
    }
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v185[0] + 99) & 8) != 0 )
  {
    v102 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v102 + 24) = 1172LL;
    WdLogEvent5_WdWarning(v102);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    v97 = v169;
    if ( !v171 )
    {
LABEL_177:
      if ( !v97 || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_155;
      goto LABEL_154;
    }
LABEL_158:
    if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v97,
        v82,
        *(_DWORD *)v97,
        *(_DWORD *)(v97 + 56),
        *(_QWORD *)(v97 + 80),
        *(_QWORD *)(v97 + 88),
        *(_DWORD *)(v97 + 1096),
        *v170);
LABEL_155:
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_128:
      McTemplateK0q(v81, &EventProfilerExit, v82, v167);
LABEL_129:
    v83 = DXGGLOBAL::GetGlobal(v81);
    v84 = (union _SLIST_HEADER *)((char *)v83 + 800);
    ++*((_DWORD *)v83 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v83 + 50) >= *((_WORD *)v83 + 408) )
    {
LABEL_326:
      Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v84[3].Region;
      ++LODWORD(v84[2].Alignment);
      Region(v9, v84);
      return 3221225485LL;
    }
LABEL_130:
    ExpInterlockedPushEntrySList(v84, v9);
    return 3221225485LL;
  }
  v21 = *((_QWORD *)v185[0] + 2);
  v192 = v21;
  v179 = v21;
  v180 = 0;
  if ( !v21 )
    goto LABEL_25;
  v22 = *(struct _KEVENT **)(v21 + 16);
  if ( *(_DWORD *)(v21 + 328) == 2 )
  {
    v23 = v22 + 4;
    if ( KeReadStateEvent(v23) )
      goto LABEL_23;
LABEL_181:
    KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
    goto LABEL_23;
  }
  v23 = v22 + 3;
  if ( !KeReadStateEvent(v23) )
    goto LABEL_181;
LABEL_23:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL));
    v105 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v103, &EventBlockThread, v104, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v21 + 104), 1u);
    if ( v105 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v180 = 1;
LABEL_25:
  v24 = *((_DWORD *)&v9[5].Next + 3);
  if ( v24 > 0x40 )
  {
    v106 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v106 + 24) = v20;
    *(_QWORD *)(v106 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v106);
    if ( !v21 )
      goto LABEL_191;
    goto LABEL_190;
  }
  v25 = v24 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v174 = 0;
  v27 = (unsigned int)v25;
  if ( (unsigned int)v25 > 4 )
  {
    v17 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v25;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v25 < 8 )
      goto LABEL_30;
    v200 = (PVOID)(8 * v25);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v25, 0x4B677844u);
    P = PoolWithTag;
    v27 = (unsigned int)v25;
    v28 = (size_t)v200;
  }
  else
  {
    PoolWithTag = v173;
    P = v173;
    v28 = 8 * v25;
  }
  v174 = v25;
  if ( !PoolWithTag )
  {
LABEL_195:
    v107 = WdLogNewEntry5_WdWarning(PoolWithTag, v17, v27);
    *(_QWORD *)(v107 + 24) = 1198LL;
    WdLogEvent5_WdWarning(v107);
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v109,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v109,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      goto LABEL_209;
    goto LABEL_210;
  }
  memset(PoolWithTag, 0, v28);
  PoolWithTag = P;
  v27 = (unsigned int)v25;
LABEL_30:
  if ( !PoolWithTag )
    goto LABEL_195;
  v29 = 0LL;
  v175 = 0LL;
  v177 = 0;
  if ( (unsigned int)v25 > 4 )
  {
    v17 = 0xFFFFFFFFFFFFFFFFuLL % v27;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v27 < 8 )
      goto LABEL_35;
    v200 = (PVOID)(8 * v27);
    v30 = ExAllocatePoolWithTag(PagedPool, 8 * v27, 0x4B677844u);
    v175 = v30;
    PoolWithTag = P;
    v31 = (size_t)v200;
  }
  else
  {
    v30 = v176;
    v175 = v176;
    v31 = 8 * v27;
  }
  v177 = v25;
  if ( !v30 )
  {
LABEL_214:
    v112 = WdLogNewEntry5_WdWarning(PoolWithTag, v17, v27);
    *(_QWORD *)(v112 + 24) = 1208LL;
    WdLogEvent5_WdWarning(v112);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    v113 = v169;
    if ( !v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        goto LABEL_225;
      goto LABEL_226;
    }
LABEL_229:
    if ( v113 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v113,
        v109,
        *(_DWORD *)v113,
        *(_DWORD *)(v113 + 56),
        *(_QWORD *)(v113 + 80),
        *(_QWORD *)(v113 + 88),
        *(_DWORD *)(v113 + 1096),
        *v170);
    goto LABEL_226;
  }
  memset(v30, 0, v31);
  PoolWithTag = P;
  v29 = v175;
LABEL_35:
  if ( !v29 )
    goto LABEL_214;
  *PoolWithTag = v20;
  *(_QWORD *)v175 = v20;
  v200 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196, (struct _KTHREAD **)v15);
  v32 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    do
    {
      v114 = (*((_DWORD *)&v9[6].Next + v32) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v114 < *(_DWORD *)(v15 + 248) )
      {
        v115 = *(_QWORD *)(v15 + 232);
        v116 = *(_DWORD *)(v115 + 16 * v114 + 8);
        if ( *((_DWORD *)&v9[6].Next + v32) >> 30 == ((v116 >> 5) & 3) && (v116 & 0x2000) == 0 && (v116 & 0x1F) != 0 )
        {
          v117 = v116 & 0x1F;
          if ( (_BYTE)v117 == 7 )
          {
            v119 = *(_QWORD *)(v115 + 16LL * (unsigned int)v114);
            goto LABEL_239;
          }
          v118 = WdLogNewEntry5_WdError(v117);
          *(_QWORD *)(v118 + 24) = 316LL;
          WdLogEvent5_WdError(v118);
        }
      }
      v119 = 0LL;
LABEL_239:
      v120 = v32 + 1;
      v121 = 8 * v120;
      *(_QWORD *)((char *)P + v121) = v119;
      *(_QWORD *)((char *)v175 + v121) = v119;
      v122 = *((_QWORD *)P + v120);
      if ( !v122 || (*(_DWORD *)(v122 + 396) & 8) != 0 || (v121 = *((_QWORD *)v20 + 2), *(_QWORD *)(v122 + 16) != v121) )
      {
        v128 = (_QWORD *)WdLogNewEntry5_WdError(v121);
        v128[3] = v20;
        v128[4] = *((unsigned int *)&v9[6].Next + v32);
        v128[5] = v32;
        v128[6] = -1073741811LL;
        WdLogEvent5_WdError(v128);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196);
        v129 = v175;
        if ( v175 == v176 || !v175 )
          goto LABEL_259;
        goto LABEL_258;
      }
      if ( v32
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v121 + 16) + 16LL))
        && *(_DWORD *)(*(_QWORD *)(v124 + 8 * v125) + 392LL) <= *(_DWORD *)(*(_QWORD *)(v124 + 8LL * (v32 - 1)) + 392LL) )
      {
        v126 = WdLogNewEntry5_WdError(v123);
        *(_QWORD *)(v126 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v126);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196);
        if ( v175 != v176 && v175 )
          ExFreePoolWithTag(v175, 0);
        v175 = 0LL;
        v177 = 0;
        v127 = P;
        if ( P == v173 || !P )
          goto LABEL_251;
        goto LABEL_250;
      }
      v32 = v120;
    }
    while ( (unsigned int)v120 < *((_DWORD *)&v9[5].Next + 3) );
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v196);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v194,
    P,
    v174);
  if ( v195 )
  {
    if ( v194[0] )
    {
      v131 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v131 + 24) = 1278LL;
      WdLogEvent5_WdWarning(v131);
      goto LABEL_276;
    }
    v130 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v130 + 24) = 1273LL;
    WdLogEvent5_WdWarning(v130);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    v113 = v169;
    if ( !v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
LABEL_225:
        McTemplateK0qpqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v113,
          v109,
          *(_DWORD *)v113,
          *(_QWORD *)(v113 + 8),
          *(_DWORD *)(v113 + 16),
          *(_DWORD *)(v113 + 88),
          *v170,
          *(_DWORD *)(v113 + 20),
          *(_DWORD *)(v113 + 24));
LABEL_226:
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_209:
        McTemplateK0q(v108, &EventProfilerExit, v109, v167);
LABEL_210:
      v110 = DXGGLOBAL::GetGlobal(v108);
      v111 = (union _SLIST_HEADER *)((char *)v110 + 800);
      ++*((_DWORD *)v110 + 207);
      if ( ExQueryDepthSList((PSLIST_HEADER)v110 + 50) >= *((_WORD *)v110 + 408) )
      {
LABEL_403:
        v159 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v111[3].Region;
        ++LODWORD(v111[2].Alignment);
        v159(v9, v111);
        return 3221225495LL;
      }
      goto LABEL_211;
    }
    goto LABEL_229;
  }
  *((_QWORD *)&v9[93].Next + 1) = v175;
  *((_BYTE *)&v9[94].Next + 8) = 1;
  v36 = *(struct DXGADAPTER **)(*((_QWORD *)v20 + 2) + 1728LL);
  v37 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v37 & 0x8000) != 0 )
  {
    if ( (v37 & 0x400000) != 0 || v9[90].Next )
    {
      v133 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v133[3] = -1073741811LL;
      v133[4] = v20;
      v133[5] = *((unsigned int *)&v9[5].Next + 2);
      v133[6] = v9[90].Next;
      WdLogEvent5_WdError(v133);
      v39 = -1073741811;
    }
    else
    {
      v39 = 0;
    }
  }
  else
  {
    v38 = (DXGPRESENT *)*((_QWORD *)v20 + 19);
    if ( v38
      || ((v76 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL)) == 0LL
        ? (v38 = 0LL)
        : (v38 = DXGPRESENT::DXGPRESENT(v76, *(_DWORD *)(*((_QWORD *)v20 + 2) + 1736LL))),
          (*((_QWORD *)v20 + 19) = v38) != 0LL) )
    {
      *((_BYTE *)v20 + 434) = 1;
      v39 = DXGPRESENT::CopyPresentArgs(v38, v20, (struct _D3DKMT_PRESENT *)v9);
    }
    else
    {
      v134 = (_QWORD *)WdLogNewEntry5_WdLowResource(v76);
      v134[3] = -1073741801LL;
      v134[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
      v134[5] = v15;
      v134[6] = v20;
      WdLogEvent5_WdLowResource(v134);
      v39 = -1073741801;
    }
  }
  LODWORD(v200) = v39;
  AllocationInfo = v39;
  if ( v39 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v136,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v136,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v135, &EventProfilerExit, v136, v167);
    v137 = DXGGLOBAL::GetGlobal(v135);
    v138 = (union _SLIST_HEADER *)((char *)v137 + 800);
    ++*((_DWORD *)v137 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v137 + 50) < *((_WORD *)v137 + 408) )
    {
      ExpInterlockedPushEntrySList(v138, v9);
    }
    else
    {
      ++LODWORD(v138[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v138[3].Region)(v9, v138);
    }
    return (unsigned int)v200;
  }
  v40 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v40 & 0x10000000) != 0 )
  {
    if ( v36 )
    {
      if ( (*((_DWORD *)v36 + 77) & 0x100) != 0 )
        goto LABEL_45;
      v132 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v132 + 24) = 1305LL;
      WdLogEvent5_WdError(v132);
    }
    else
    {
      v139 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v139 + 24) = 1299LL;
      WdLogEvent5_WdError(v139);
    }
LABEL_276:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    v129 = v175;
    if ( v175 != v176 && v175 )
LABEL_258:
      ExFreePoolWithTag(v129, 0);
LABEL_259:
    v175 = 0LL;
    v177 = 0;
    v127 = P;
    if ( P != v173 && P )
LABEL_250:
      ExFreePoolWithTag(v127, 0);
LABEL_251:
    P = 0LL;
    v174 = 0;
    if ( !v21 )
    {
LABEL_191:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
      v97 = v169;
      if ( v171 )
        goto LABEL_158;
      goto LABEL_177;
    }
LABEL_190:
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    goto LABEL_191;
  }
  if ( v36 )
  {
    if ( (*((_DWORD *)v36 + 77) & 0x100) != 0 && (v40 & 0x18000) == 0 )
    {
      v140 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v140 + 24) = 1315LL;
      WdLogEvent5_WdError(v140);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
      if ( v175 != v176 && v175 )
        ExFreePoolWithTag(v175, 0);
      v175 = 0LL;
      v177 = 0;
      if ( P != v173 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v174 = 0;
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
      if ( v171 )
      {
        if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq(
            (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
            v169,
            v142,
            *(_DWORD *)v169,
            *(_DWORD *)(v169 + 56),
            *(_QWORD *)(v169 + 80),
            *(_QWORD *)(v169 + 88),
            *(_DWORD *)(v169 + 1096),
            *v170);
      }
      else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v142,
          *(_DWORD *)v169,
          *(_QWORD *)(v169 + 8),
          *(_DWORD *)(v169 + 16),
          *(_DWORD *)(v169 + 88),
          *v170,
          *(_DWORD *)(v169 + 20),
          *(_DWORD *)(v169 + 24));
      }
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v141, &EventProfilerExit, v142, v167);
      v143 = DXGGLOBAL::GetGlobal(v141);
      v84 = (union _SLIST_HEADER *)((char *)v143 + 800);
      ++*((_DWORD *)v143 + 207);
      if ( ExQueryDepthSList((PSLIST_HEADER)v143 + 50) >= *((_WORD *)v143 + 408) )
        goto LABEL_326;
      goto LABEL_130;
    }
  }
  else
  {
    v36 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
  }
LABEL_45:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v197, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v15 + 104), v36);
  v182 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 16LL);
  v183 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v182 + 3);
  v181 = -1LL;
  v41 = v182;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v41 + 120, 0LL);
  v183 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v186, *((_QWORD *)v20 + 2), 2, v42, 0);
  if ( v189 )
  {
    v145 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43);
    v145[3] = 275LL;
    v145[4] = 4LL;
    v145[5] = v187;
    v145[6] = 0LL;
    v145[7] = 0LL;
    WdLogEvent5_WdCriticalError(v145);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v188 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v188 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v44, &EventBlockThread, v45, 72);
      KeWaitForSingleObject((char *)v188 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v188);
  }
  v189 = 1;
  if ( *((_DWORD *)v190[4] + 116) == 1 )
  {
    if ( !v191 || (COREACCESS::AcquireShared((DXGADAPTER **)v190), *((_DWORD *)v190[2] + 44) == 1) )
    {
      v46 = 0;
    }
    else
    {
      COREACCESS::Release(v190);
      COREACCESS::Release(v187);
      v46 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release(v187);
    v46 = -1073741130;
  }
  AllocationInfo = v46;
  if ( v46 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v186);
    if ( v183 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v181);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v197);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v147,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v147,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v146, &EventProfilerExit, v147, v167);
    v148 = DXGGLOBAL::GetGlobal(v146);
    v149 = (union _SLIST_HEADER *)((char *)v148 + 800);
    ++*((_DWORD *)v148 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v148 + 50) < *((_WORD *)v148 + 408) )
    {
      ExpInterlockedPushEntrySList(v149, v9);
    }
    else
    {
      ++LODWORD(v149[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v149[3].Region)(v9, v149);
    }
    return (unsigned int)v46;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v150 = SubmitPresentHistoryToken(
             (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v9[22].Next + 1),
             (struct COREDEVICEACCESS *)v186,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v181,
             (struct CWin32kLocks *)v197,
             0,
             0LL,
             0LL,
             0LL,
             v185[0],
             0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v186);
    if ( v183 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v181);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v197);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v152,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v152,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v151, &EventProfilerExit, v152, v167);
    v153 = DXGGLOBAL::GetGlobal(v151);
    v154 = (union _SLIST_HEADER *)((char *)v153 + 800);
    ++*((_DWORD *)v153 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v153 + 50) < *((_WORD *)v153 + 408) )
    {
      ExpInterlockedPushEntrySList(v154, v9);
    }
    else
    {
      ++LODWORD(v154[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v154[3].Region)(v9, v154);
    }
    return v150;
  }
  v47 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL);
  v193[1] = (struct _SLIST_ENTRY *)v47;
  v48 = v47 + 1120;
  ++*(_DWORD *)(v47 + 1140);
  v50 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v47 + 1120));
  if ( !v50 )
  {
    ++*(_DWORD *)(v47 + 1144);
    v50 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v47 + 1168))(
                          *(unsigned int *)(v47 + 1156),
                          *(unsigned int *)(v47 + 1164),
                          *(unsigned int *)(v47 + 1160),
                          v47 + 1120);
  }
  v193[0] = v50;
  if ( !v50 )
  {
    v155 = WdLogNewEntry5_WdLowResource(v49);
    *(_QWORD *)(v155 + 24) = 1357LL;
    WdLogEvent5_WdLowResource(v155);
    CVidSchSubmitData::~CVidSchSubmitData(v193);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v186);
    if ( v183 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v181);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v197);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v157,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v157,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v156, &EventProfilerExit, v157, v167);
    v158 = DXGGLOBAL::GetGlobal(v156);
    v111 = (union _SLIST_HEADER *)((char *)v158 + 800);
    ++*((_DWORD *)v158 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v158 + 50) >= *((_WORD *)v158 + 408) )
      goto LABEL_403;
LABEL_211:
    ExpInterlockedPushEntrySList(v111, v9);
    return 3221225495LL;
  }
  v51 = *(_QWORD *)(v47 + 16);
  v52 = *(_DWORD *)(v51 + 2160);
  if ( v52 < 0x2000 )
    v53 = 1;
  else
    v53 = *(_DWORD *)(v51 + 256);
  if ( v52 >= 0x2000 || (v54 = *(_BYTE *)(v51 + 2452)) != 0 )
    v54 = 1;
  if ( v54 )
    v55 = *(_DWORD *)(v51 + 2368) * ((8 * v53 + 191) & 0xFFFFFFF8) + 8 * (v53 + 8 * (*(_DWORD *)(v51 + 2368) * v53 + 9));
  else
    v55 = 1296;
  memset(v50, 0, v55);
  v56 = *(_QWORD *)(v47 + 16);
  v57 = *(_DWORD *)(v56 + 2160);
  if ( v57 < 0x2000 )
    v58 = 1;
  else
    v58 = *(_DWORD *)(v56 + 256);
  if ( v57 >= 0x2000 || (v59 = *(_BYTE *)(v56 + 2452)) != 0 )
    v59 = 1;
  v60 = *(_DWORD *)(v56 + 2368);
  BYTE4(v50[22].Next) = v59;
  if ( v59 )
  {
    HIDWORD(v50[35].Next) = v60;
    *((_DWORD *)&v50[35].Next + 2) = v58;
    v61 = 8 * v58;
    v62 = v58 << 6;
    *((_DWORD *)&v50[35].Next + 3) = v60 * (v62 + ((v61 + 191) & 0xFFFFFFF8)) + 16;
    v63 = v60 * (v62 + ((v61 + 191) & 0xFFFFFFF8)) + 576;
    *((_DWORD *)&v50[33].Next + 2) = v63;
    *((_DWORD *)&v50[33].Next + 3) = v61 + v63;
  }
  AllocationInfo = DXGCONTEXT::Present(
                     v185[0],
                     (const struct DXGK_PRESENT_PARAMS *)v9,
                     (struct COREDEVICEACCESS *)v186,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v181,
                     (struct CWin32kLocks *)v197,
                     (struct DXGCONTEXT **)P,
                     (struct VIDSCH_SUBMIT_DATA_BASE *)v50);
  if ( AllocationInfo != -1071775482 )
    goto LABEL_71;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v188)
    || (v160 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v186), v160 >= 0) )
  {
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v20 + 2), (struct COREDEVICEACCESS *)v186);
LABEL_71:
    ++*(_DWORD *)(v48 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v48) >= *(_WORD *)(v48 + 16) )
    {
      ++*(_DWORD *)(v48 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v48 + 56))(v50, v48);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v48, v50);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v186);
    if ( v183 )
    {
      v183 = 0;
      ExReleasePushLockSharedEx((char *)v182 + 120, 0LL);
      KeLeaveCriticalRegion();
      v64 = (DXGGLOBAL **)v182;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v182 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v64[2], (struct DXGADAPTER *)v64);
    }
    if ( AllocationInfo >= 0 )
    {
      v65 = Src + 1488;
      if ( (unsigned __int64)(Src + 1488) >= MmUserProbeAddress )
        v65 = (_BYTE *)MmUserProbeAddress;
      *v65 = *((_BYTE *)&v9[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v197);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
    if ( v175 != v176 && v175 )
      ExFreePoolWithTag(v175, 0);
    v175 = 0LL;
    v177 = 0;
    if ( P != v173 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v174 = 0;
    if ( v21 && v180 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v21 + 104));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
    if ( v171 )
    {
      if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v169,
          v67,
          *(_DWORD *)v169,
          *(_DWORD *)(v169 + 56),
          *(_QWORD *)(v169 + 80),
          *(_QWORD *)(v169 + 88),
          *(_DWORD *)(v169 + 1096),
          *v170);
    }
    else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v67,
        *(_DWORD *)v169,
        *(_QWORD *)(v169 + 8),
        *(_DWORD *)(v169 + 16),
        *(_DWORD *)(v169 + 88),
        *v170,
        *(_DWORD *)(v169 + 20),
        *(_DWORD *)(v169 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v66, &EventProfilerExit, v67, v167);
    v68 = DXGGLOBAL::GetGlobal(v66);
    v69 = (char *)v68 + 800;
    ++*((_DWORD *)v68 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v68 + 50) >= *((_WORD *)v68 + 408) )
    {
      ++*((_DWORD *)v69 + 8);
      (*((void (__fastcall **)(PSLIST_ENTRY, char *))v69 + 7))(v9, v69);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v69, v9);
    }
    v70 = PsGetCurrentProcess();
    v71 = PsGetProcessDxgProcess(v70);
    v72 = v71;
    if ( v71 )
    {
      if ( (*(_BYTE *)(v71 + 323) & 4) != 0 )
      {
        v165 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v166 = v165;
        if ( v165 )
        {
          ObfDereferenceObject(v165);
          v72 = *v166;
        }
      }
    }
    v73 = *(_QWORD *)(v72 + 72);
    for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v73 + 88), (PKSPIN_LOCK)(v73 + 104));
          i;
          i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v73 + 88), (PKSPIN_LOCK)(v73 + 104)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
      operator delete(i);
    }
    return (unsigned int)AllocationInfo;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v193);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v186);
  if ( v183 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v181);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v197);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v194);
  if ( v175 != v176 && v175 )
    ExFreePoolWithTag(v175, 0);
  v175 = 0LL;
  v177 = 0;
  if ( P != v173 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v174 = 0;
  if ( v21 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v179);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v178);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v167);
  if ( v171 )
  {
    if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v169,
        v162,
        *(_DWORD *)v169,
        *(_DWORD *)(v169 + 56),
        *(_QWORD *)(v169 + 80),
        *(_QWORD *)(v169 + 88),
        *(_DWORD *)(v169 + 1096),
        *v170);
  }
  else if ( v169 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqpp(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      v169,
      v162,
      *(_DWORD *)v169,
      *(_QWORD *)(v169 + 8),
      *(_DWORD *)(v169 + 16),
      *(_DWORD *)(v169 + 88),
      *v170,
      *(_DWORD *)(v169 + 20),
      *(_DWORD *)(v169 + 24));
  }
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v161, &EventProfilerExit, v162, v167);
  v163 = DXGGLOBAL::GetGlobal(v161);
  v164 = (union _SLIST_HEADER *)((char *)v163 + 800);
  ++*((_DWORD *)v163 + 207);
  if ( ExQueryDepthSList((PSLIST_HEADER)v163 + 50) < *((_WORD *)v163 + 408) )
  {
    ExpInterlockedPushEntrySList(v164, v9);
  }
  else
  {
    ++LODWORD(v164[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v164[3].Region)(v9, v164);
  }
  return (unsigned int)v160;
}
