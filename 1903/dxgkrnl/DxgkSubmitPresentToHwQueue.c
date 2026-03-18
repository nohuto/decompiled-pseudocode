/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C024C470
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C4A4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017530 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017688 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00177B0 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0024810 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C002483C (--1CWin32kLocks@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0042B7C (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C0042CA0 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qpqqqqpp @ 0x1C0042EEC (McTemplateK0qpqqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C0042FC4 (McTemplateK0qqxxqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0110150 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0140FA0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C020B2F0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0258F10 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  char *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  const GUID *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // rdx
  struct DXGGLOBAL *v26; // rax
  union _SLIST_HEADER *v27; // rbx
  const void *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  unsigned int v33; // r15d
  __int64 v34; // rdx
  void **v35; // rax
  PVOID v36; // rcx
  size_t v37; // r8
  void *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  const GUID *v49; // rdx
  struct DXGGLOBAL *v50; // rax
  union _SLIST_HEADER *v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 v53; // r8
  _QWORD *PoolWithTag; // rcx
  void *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  const GUID *v60; // r8
  const GUID *v61; // rdx
  struct DXGGLOBAL *v62; // rax
  union _SLIST_HEADER *v63; // rbx
  unsigned int v64; // r10d
  __int64 v65; // r8
  __int64 v66; // r15
  _DWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r11
  unsigned int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  _QWORD *v75; // rdx
  char *v76; // rax
  _QWORD *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r8
  unsigned int *v90; // rax
  __int64 v91; // rax
  struct DXGADAPTER *v92; // r15
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  const GUID *v98; // r8
  const GUID *v99; // rdx
  struct DXGGLOBAL *v100; // rax
  union _SLIST_HEADER *v101; // rbx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // r9
  int v105; // r15d
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  const GUID *v109; // r8
  const GUID *v110; // rdx
  struct DXGGLOBAL *v111; // rax
  union _SLIST_HEADER *v112; // rbx
  struct VIDSCH_SUBMIT_DATA_BASE *v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  _BYTE *v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rcx
  const GUID *v123; // r8
  const GUID *v124; // rdx
  struct DXGGLOBAL *v125; // rax
  union _SLIST_HEADER *v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  struct DXGPROCESS *v129; // rax
  const GUID *v130; // rdx
  __int64 v131; // rcx
  const GUID *v132; // r8
  struct DXGGLOBAL *v133; // rax
  union _SLIST_HEADER *v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rdx
  const GUID *v137; // rdx
  __int64 v138; // rcx
  const GUID *v139; // r8
  struct DXGGLOBAL *v140; // rax
  union _SLIST_HEADER *v141; // rbx
  int v142; // [rsp+60h] [rbp-298h] BYREF
  __int64 v143; // [rsp+68h] [rbp-290h]
  const GUID *v144; // [rsp+70h] [rbp-288h]
  int *v145; // [rsp+78h] [rbp-280h]
  char v146; // [rsp+80h] [rbp-278h]
  int v147; // [rsp+88h] [rbp-270h] BYREF
  _QWORD v148[2]; // [rsp+90h] [rbp-268h] BYREF
  PVOID P; // [rsp+A0h] [rbp-258h] BYREF
  _BYTE v150[32]; // [rsp+A8h] [rbp-250h] BYREF
  unsigned int v151; // [rsp+C8h] [rbp-230h]
  PVOID v152; // [rsp+D0h] [rbp-228h]
  _BYTE v153[32]; // [rsp+D8h] [rbp-220h] BYREF
  unsigned int v154; // [rsp+F8h] [rbp-200h]
  void *Src; // [rsp+100h] [rbp-1F8h]
  _BYTE v156[16]; // [rsp+108h] [rbp-1F0h] BYREF
  struct DXGPROCESS *v157; // [rsp+118h] [rbp-1E0h]
  PVOID v158; // [rsp+120h] [rbp-1D8h]
  PSLIST_ENTRY ListEntry; // [rsp+128h] [rbp-1D0h]
  char v160[8]; // [rsp+130h] [rbp-1C8h] BYREF
  __int64 v161; // [rsp+138h] [rbp-1C0h]
  char v162; // [rsp+140h] [rbp-1B8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v163[2]; // [rsp+148h] [rbp-1B0h] BYREF
  ULONG64 v164; // [rsp+158h] [rbp-1A0h]
  _QWORD *v165; // [rsp+160h] [rbp-198h]
  unsigned int v166; // [rsp+168h] [rbp-190h]
  _QWORD v167[6]; // [rsp+170h] [rbp-188h] BYREF
  char v168; // [rsp+1A0h] [rbp-158h]
  _BYTE v169[24]; // [rsp+1A8h] [rbp-150h] BYREF
  _QWORD v170[8]; // [rsp+1C0h] [rbp-138h] BYREF
  PVOID v171; // [rsp+200h] [rbp-F8h] BYREF
  _BYTE v172[16]; // [rsp+208h] [rbp-F0h] BYREF
  unsigned int v173; // [rsp+218h] [rbp-E0h]
  _BYTE v174[24]; // [rsp+220h] [rbp-D8h] BYREF
  DXGADAPTER *v175; // [rsp+238h] [rbp-C0h]

  v164 = a1;
  v147 = -1073741811;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  v4 = (char *)Global + 768;
  ++*((_DWORD *)Global + 197);
  v7 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
  ListEntry = (PSLIST_ENTRY)v7;
  if ( !v7 )
  {
    ++*((_DWORD *)v4 + 6);
    v7 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v4 + 6))(
           *((unsigned int *)v4 + 9),
           *((unsigned int *)v4 + 11),
           *((unsigned int *)v4 + 10),
           v4);
    ListEntry = (PSLIST_ENTRY)v7;
  }
  if ( !v7 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v8, v9);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  memset((void *)v7, 0, 0x5F8uLL);
  v165 = (_QWORD *)v7;
  v143 = 0LL;
  v142 = 2020;
  v145 = &v147;
  v146 = 0;
  v144 = (const GUID *)(v7 & -(__int64)(bTracingEnabled != 0));
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v12, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v142, 2020LL);
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v157 = Current;
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = PsGetCurrentProcess(v21, v20);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v22);
    v25 = v144;
    if ( v146 )
    {
      if ( v144 )
        goto LABEL_12;
      goto LABEL_17;
    }
    if ( !v144 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v171 = 0LL;
  v173 = 0;
  P = 0LL;
  v151 = 0;
  v28 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v28 = (const void *)MmUserProbeAddress;
  memmove((void *)v7, v28, 0x5D8uLL);
  v32 = *(_DWORD *)(v7 + 92);
  v33 = v32 + 1;
  v166 = v32 + 1;
  if ( v32 > 0x40 )
  {
    v135 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v135 + 24) = v33;
    WdLogEvent5_WdError(v135);
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v151 = 0;
    if ( v171 != v172 && v171 )
      ExFreePoolWithTag(v171, 0);
    v171 = 0LL;
    v173 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v136);
    if ( v146 )
    {
      v139 = v144;
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          *(_QWORD *)v144[5].Data4,
          v144,
          v144->Data1,
          *(_DWORD *)v144[3].Data4,
          *(_QWORD *)&v144[5].Data1,
          *(_QWORD *)v144[5].Data4,
          *(_DWORD *)v144[68].Data4,
          *v145);
    }
    else
    {
      v137 = v144;
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v144,
          v139,
          v144->Data1,
          *(_QWORD *)v144->Data4,
          v144[1].Data1,
          *(_DWORD *)&v144[5].Data2,
          *(_DWORD *)v144[5].Data4,
          *v145,
          *(_DWORD *)&v144[1].Data2,
          *(_DWORD *)v144[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v138, &EventProfilerExit, v139, v142);
    v140 = DXGGLOBAL::GetGlobal(v138, (__int64)v137);
    v141 = (union _SLIST_HEADER *)((char *)v140 + 768);
    ++*((_DWORD *)v140 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v140 + 48) < *((_WORD *)v140 + 392) )
    {
      ExpInterlockedPushEntrySList(v141, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++LODWORD(v141[2].Alignment);
      ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v141[3].Region)(v7, v141);
    }
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v171, v33)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, v33) )
  {
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v151 = 0;
    if ( v171 != v172 && v171 )
      ExFreePoolWithTag(v171, 0);
    v171 = 0LL;
    v173 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v34);
    if ( v146 )
    {
      v132 = v144;
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          *(_QWORD *)v144[5].Data4,
          v144,
          v144->Data1,
          *(_DWORD *)v144[3].Data4,
          *(_QWORD *)&v144[5].Data1,
          *(_QWORD *)v144[5].Data4,
          *(_DWORD *)v144[68].Data4,
          *v145);
    }
    else
    {
      v130 = v144;
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v144,
          v132,
          v144->Data1,
          *(_QWORD *)v144->Data4,
          v144[1].Data1,
          *(_DWORD *)&v144[5].Data2,
          *(_DWORD *)v144[5].Data4,
          *v145,
          *(_DWORD *)&v144[1].Data2,
          *(_DWORD *)v144[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v131, &EventProfilerExit, v132, v142);
    v133 = DXGGLOBAL::GetGlobal(v131, (__int64)v130);
    v134 = (union _SLIST_HEADER *)((char *)v133 + 768);
    ++*((_DWORD *)v133 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v133 + 48) < *((_WORD *)v133 + 392) )
    {
      ExpInterlockedPushEntrySList(v134, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++LODWORD(v134[2].Alignment);
      ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v134[3].Region)(v7, v134);
    }
    return 3221225495LL;
  }
  Src = 0LL;
  v35 = (void **)v164;
  if ( v164 >= MmUserProbeAddress )
    v35 = (void **)MmUserProbeAddress;
  Src = *v35;
  v36 = v171;
  v158 = v171;
  v37 = 4LL * v33;
  v38 = Src;
  if ( (char *)Src + v37 < Src || (unsigned __int64)Src + v37 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v36, v38, v37);
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v156,
    *(_DWORD *)v171,
    (struct _KTHREAD **)Current,
    (struct DXGHWQUEUE **)P,
    0);
  if ( !*(_QWORD *)P )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
    v42[3] = Current;
    v42[4] = *(unsigned int *)v171;
    v42[5] = -1073741811LL;
    WdLogEvent5_WdError(v42);
LABEL_36:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v156, v43);
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    v151 = 0;
    P = 0LL;
    if ( v171 != v172 && v171 )
      ExFreePoolWithTag(v171, 0);
    v171 = 0LL;
    v173 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v44);
    v25 = v144;
    if ( v146 )
    {
      if ( v144 )
      {
LABEL_12:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq(
            (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
            (__int64)v25,
            v24,
            v25->Data1,
            *(_DWORD *)v25[3].Data4,
            *(_QWORD *)&v25[5].Data1,
            *(_QWORD *)v25[5].Data4,
            *(_DWORD *)v25[68].Data4,
            *v145);
      }
LABEL_17:
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v142);
      v26 = DXGGLOBAL::GetGlobal(v23, (__int64)v25);
      v27 = (union _SLIST_HEADER *)((char *)v26 + 768);
      ++*((_DWORD *)v26 + 199);
      if ( ExQueryDepthSList((PSLIST_HEADER)v26 + 48) < *((_WORD *)v26 + 392) )
      {
        ExpInterlockedPushEntrySList(v27, (PSLIST_ENTRY)v7);
      }
      else
      {
        ++LODWORD(v27[2].Alignment);
        ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v27[3].Region)(v7, v27);
      }
      return 3221225485LL;
    }
    if ( !v144 )
      goto LABEL_17;
LABEL_15:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v25,
        v24,
        v25->Data1,
        *(_QWORD *)v25->Data4,
        v25[1].Data1,
        *(_DWORD *)&v25[5].Data2,
        *(_DWORD *)v25[5].Data4,
        *v145,
        *(_DWORD *)&v25[1].Data2,
        *(_DWORD *)v25[1].Data4);
    goto LABEL_17;
  }
  *(_QWORD *)(v7 + 1504) = P;
  v45 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v45 + 449) && *(_DWORD *)(v7 + 92) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v156, v39);
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v151 = 0;
    if ( v171 != v172 && v171 )
      ExFreePoolWithTag(v171, 0);
    v171 = 0LL;
    v173 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v46);
    v49 = v144;
    if ( v146 )
    {
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v144,
          v48,
          v144->Data1,
          *(_DWORD *)v144[3].Data4,
          *(_QWORD *)&v144[5].Data1,
          *(_QWORD *)v144[5].Data4,
          *(_DWORD *)v144[68].Data4,
          *v145);
    }
    else if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v144,
        v48,
        v144->Data1,
        *(_QWORD *)v144->Data4,
        v144[1].Data1,
        *(_DWORD *)&v144[5].Data2,
        *(_DWORD *)v144[5].Data4,
        *v145,
        *(_DWORD *)&v144[1].Data2,
        *(_DWORD *)v144[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v47, &EventProfilerExit, v48, v142);
    v50 = DXGGLOBAL::GetGlobal(v47, (__int64)v49);
    v51 = (union _SLIST_HEADER *)((char *)v50 + 768);
    ++*((_DWORD *)v50 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v50 + 48) < *((_WORD *)v50 + 392) )
    {
      ExpInterlockedPushEntrySList(v51, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++LODWORD(v51[2].Alignment);
      ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v51[3].Region)(v7, v51);
    }
    return 3221225474LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v148,
    *(struct DXGDEVICE **)(v45 + 16));
  PoolWithTag = 0LL;
  v152 = 0LL;
  v154 = 0;
  if ( v33 <= 4 )
  {
    PoolWithTag = v153;
    v152 = v153;
    v55 = (void *)(8LL * v33);
    goto LABEL_73;
  }
  v53 = v33;
  v52 = 0xFFFFFFFFFFFFFFFFuLL % v33;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v33 >= 8 )
  {
    Src = (void *)(8LL * v33);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (SIZE_T)Src, 0x4B677844u);
    v152 = PoolWithTag;
    v55 = Src;
LABEL_73:
    v154 = v33;
    if ( !PoolWithTag )
    {
LABEL_76:
      v56 = WdLogNewEntry5_WdWarning(PoolWithTag, v52, v53);
      *(_QWORD *)(v56 + 24) = 1982LL;
      WdLogEvent5_WdWarning(v56);
      goto LABEL_77;
    }
    memset(PoolWithTag, 0, (size_t)v55);
    PoolWithTag = v152;
  }
  if ( !PoolWithTag )
    goto LABEL_76;
  *PoolWithTag = v45;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v169, (struct _KTHREAD **)v157);
  v165 = v152;
  v64 = 0;
  LODWORD(v158) = 0;
  if ( *(_DWORD *)(v7 + 92) )
  {
    v65 = 1LL;
    LODWORD(Src) = 1;
    while ( 1 )
    {
      v66 = (unsigned int)v65;
      if ( (unsigned int)v65 >= v173 )
        v67 = v171;
      else
        v67 = (char *)v171 + 4 * (unsigned int)v65;
      v68 = (*v67 >> 6) & 0xFFFFFF;
      v69 = *v67 >> 30;
      if ( (unsigned int)v68 < *((_DWORD *)v157 + 56)
        && (v70 = *((_QWORD *)v157 + 26), v71 = *(_DWORD *)(v70 + 16 * v68 + 8), (_DWORD)v69 == ((v71 >> 5) & 3))
        && (v71 & 0x2000) == 0
        && (v71 & 0x1F) != 0 )
      {
        v73 = v71 & 0x1F;
        if ( (_BYTE)v73 == 15 )
        {
          v72 = *(_QWORD *)(v70 + 16LL * (unsigned int)v68);
        }
        else
        {
          v74 = WdLogNewEntry5_WdError(v73, v69, v65);
          *(_QWORD *)(v74 + 24) = 267LL;
          WdLogEvent5_WdError(v74);
          v72 = 0LL;
          v65 = (unsigned int)Src;
          v64 = (unsigned int)v158;
        }
      }
      else
      {
        v72 = 0LL;
      }
      if ( (unsigned int)v65 >= v151 )
        v75 = P;
      else
        v75 = (char *)P + 8 * v66;
      *v75 = v72;
      v76 = (char *)P;
      v77 = (char *)P + 8 * v66;
      if ( (unsigned int)v65 >= v151 )
        v77 = P;
      if ( !*v77 )
        break;
      if ( (unsigned int)v65 < v151 )
        v76 = (char *)P + 8 * v66;
      *((_QWORD *)v152 + v66) = *(_QWORD *)(*(_QWORD *)v76 + 16LL);
      v78 = *((_QWORD *)v152 + v66);
      if ( !v78 || (v78 = *(_QWORD *)(v78 + 16), v78 != *(_QWORD *)(v45 + 16)) )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdError(v78, v75, v65);
        v85[3] = v45;
        v87 = (unsigned int)v158;
        v85[4] = *(unsigned int *)(v7 + 4LL * (unsigned int)v158 + 96);
        v85[5] = v87;
        v85[6] = -1073741811LL;
        goto LABEL_131;
      }
      v79 = *(unsigned int *)(v165[v66] + 408LL);
      v80 = v165[v64];
      if ( (unsigned int)v79 <= *(_DWORD *)(v80 + 408) )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79, v65);
        v85[3] = -1073741811LL;
LABEL_131:
        v86 = v85;
        goto LABEL_132;
      }
      LODWORD(v158) = ++v64;
      v65 = (unsigned int)(v65 + 1);
      LODWORD(Src) = v65;
      if ( v64 >= *(_DWORD *)(v7 + 92) )
        goto LABEL_126;
    }
    v88 = WdLogNewEntry5_WdError(v77, v75, v65);
    v89 = (unsigned int)((_DWORD)v158 + 1);
    if ( (unsigned int)v89 >= v173 )
      v90 = (unsigned int *)v171;
    else
      v90 = (unsigned int *)((char *)v171 + 4 * v89);
    *(_QWORD *)(v88 + 24) = *v90;
    *(_QWORD *)(v88 + 32) = (unsigned int)v89;
    v86 = (_QWORD *)v88;
LABEL_132:
    WdLogEvent5_WdError(v86);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v169);
    goto LABEL_133;
  }
LABEL_126:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v169);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v167,
    v152,
    v154);
  if ( v168 )
  {
    if ( !v167[0] )
    {
      v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
      *(_QWORD *)(v84 + 24) = 2054LL;
      WdLogEvent5_WdWarning(v84);
LABEL_129:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v167);
LABEL_77:
      if ( v152 != v153 && v152 )
        ExFreePoolWithTag(v152, 0);
      v152 = 0LL;
      v154 = 0;
      if ( v148[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v156, v57);
      if ( P != v150 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v151 = 0;
      if ( v171 != v172 && v171 )
        ExFreePoolWithTag(v171, 0);
      v171 = 0LL;
      v173 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v58);
      v61 = v144;
      if ( v146 )
      {
        if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq(
            (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
            (__int64)v144,
            v60,
            v144->Data1,
            *(_DWORD *)v144[3].Data4,
            *(_QWORD *)&v144[5].Data1,
            *(_QWORD *)v144[5].Data4,
            *(_DWORD *)v144[68].Data4,
            *v145);
      }
      else if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v144,
          v60,
          v144->Data1,
          *(_QWORD *)v144->Data4,
          v144[1].Data1,
          *(_DWORD *)&v144[5].Data2,
          *(_DWORD *)v144[5].Data4,
          *v145,
          *(_DWORD *)&v144[1].Data2,
          *(_DWORD *)v144[1].Data4);
      }
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v59, &EventProfilerExit, v60, v142);
      v62 = DXGGLOBAL::GetGlobal(v59, (__int64)v61);
      v63 = (union _SLIST_HEADER *)((char *)v62 + 768);
      ++*((_DWORD *)v62 + 199);
      if ( ExQueryDepthSList((PSLIST_HEADER)v62 + 48) < *((_WORD *)v62 + 392) )
      {
        ExpInterlockedPushEntrySList(v63, (PSLIST_ENTRY)v7);
      }
      else
      {
        ++LODWORD(v63[2].Alignment);
        ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v63[3].Region)(v7, v63);
      }
      return 3221225495LL;
    }
    v91 = WdLogNewEntry5_WdWarning(v82, v81, v83);
    *(_QWORD *)(v91 + 24) = 2059LL;
    WdLogEvent5_WdWarning(v91);
LABEL_144:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v167);
LABEL_133:
    if ( v152 != v153 && v152 )
      ExFreePoolWithTag(v152, 0);
    v154 = 0;
    v152 = 0LL;
    if ( v148[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
    goto LABEL_36;
  }
  *(_QWORD *)(v7 + 1496) = v152;
  *(_BYTE *)(v7 + 1512) = 1;
  v92 = *(struct DXGADAPTER **)(*(_QWORD *)(v45 + 16) + 1728LL);
  LODWORD(Src) = DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)v45, (struct _D3DKMT_PRESENT *)v7, v157);
  v147 = (int)Src;
  if ( (int)Src < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v167);
    if ( v152 != v153 && v152 )
      ExFreePoolWithTag(v152, 0);
    v152 = 0LL;
    v154 = 0;
    if ( v148[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v156, v95);
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v151 = 0;
    if ( v171 != v172 && v171 )
      ExFreePoolWithTag(v171, 0);
    v171 = 0LL;
    v173 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v96);
    v99 = v144;
    if ( v146 )
    {
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v144,
          v98,
          v144->Data1,
          *(_DWORD *)v144[3].Data4,
          *(_QWORD *)&v144[5].Data1,
          *(_QWORD *)v144[5].Data4,
          *(_DWORD *)v144[68].Data4,
          *v145);
    }
    else if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v144,
        v98,
        v144->Data1,
        *(_QWORD *)v144->Data4,
        v144[1].Data1,
        *(_DWORD *)&v144[5].Data2,
        *(_DWORD *)v144[5].Data4,
        *v145,
        *(_DWORD *)&v144[1].Data2,
        *(_DWORD *)v144[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v97, &EventProfilerExit, v98, v142);
    v100 = DXGGLOBAL::GetGlobal(v97, (__int64)v99);
    v101 = (union _SLIST_HEADER *)((char *)v100 + 768);
    ++*((_DWORD *)v100 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v100 + 48) < *((_WORD *)v100 + 392) )
    {
      ExpInterlockedPushEntrySList(v101, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++LODWORD(v101[2].Alignment);
      ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v101[3].Region)(v7, v101);
    }
    return (unsigned int)Src;
  }
  v102 = *(unsigned int *)(v7 + 88);
  if ( (v102 & 0x10000000) != 0 )
  {
    if ( !v92 )
    {
      v103 = WdLogNewEntry5_WdError(v102, v93, v94);
      *(_QWORD *)(v103 + 24) = 2080LL;
LABEL_174:
      WdLogEvent5_WdError(v103);
      goto LABEL_144;
    }
    if ( (*((_DWORD *)v92 + 77) & 0x100) == 0 )
    {
      v103 = WdLogNewEntry5_WdError(v102, v93, v94);
      *(_QWORD *)(v103 + 24) = 2086LL;
      goto LABEL_174;
    }
  }
  else if ( v92 )
  {
    if ( (*((_DWORD *)v92 + 77) & 0x100) != 0 && (v102 & 0x18000) == 0 )
    {
      v103 = WdLogNewEntry5_WdError(v102, v93, v94);
      *(_QWORD *)(v103 + 24) = 2096LL;
      goto LABEL_174;
    }
  }
  else
  {
    v92 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v170, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v157 + 12), v92);
  v161 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL) + 16LL);
  v162 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v174, *(_QWORD *)(v45 + 16), 2, v104, 0);
  v105 = COREDEVICEACCESS::AcquireShared((__int64)v174, 0xFFFFFFFF, 0LL);
  v147 = v105;
  if ( v105 < 0 )
    goto LABEL_184;
  if ( (*(_DWORD *)(v7 + 88) & 0x200000) != 0 )
  {
    v105 = SubmitPresentHistoryToken(
             (_DWORD *)(v7 + 360),
             (__int64)v174,
             (__int64)v160,
             v170,
             0,
             0LL,
             v7,
             0LL,
             v45,
             0LL,
             0xFFFFFFFF,
             0LL);
LABEL_184:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v174);
    if ( v162 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v170);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v167);
    if ( v152 != v153 && v152 )
      ExFreePoolWithTag(v152, 0);
    v152 = 0LL;
    v154 = 0;
    if ( v148[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v156, v106);
    if ( P != v150 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v151 = 0;
    if ( v171 != v172 && v171 )
      ExFreePoolWithTag(v171, 0);
    v171 = 0LL;
    v173 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v107);
    v110 = v144;
    if ( v146 )
    {
      if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v144,
          v109,
          v144->Data1,
          *(_DWORD *)v144[3].Data4,
          *(_QWORD *)&v144[5].Data1,
          *(_QWORD *)v144[5].Data4,
          *(_DWORD *)v144[68].Data4,
          *v145);
    }
    else if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v144,
        v109,
        v144->Data1,
        *(_QWORD *)v144->Data4,
        v144[1].Data1,
        *(_DWORD *)&v144[5].Data2,
        *(_DWORD *)v144[5].Data4,
        *v145,
        *(_DWORD *)&v144[1].Data2,
        *(_DWORD *)v144[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v108, &EventProfilerExit, v109, v142);
    v111 = DXGGLOBAL::GetGlobal(v108, (__int64)v110);
    v112 = (union _SLIST_HEADER *)((char *)v111 + 768);
    ++*((_DWORD *)v111 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v111 + 48) < *((_WORD *)v111 + 392) )
    {
      ExpInterlockedPushEntrySList(v112, (PSLIST_ENTRY)v7);
    }
    else
    {
      ++LODWORD(v112[2].Alignment);
      ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v112[3].Region)(v7, v112);
    }
    return (unsigned int)v105;
  }
  v113 = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*(_QWORD *)(v45 + 16) + 16LL);
  v163[0] = 0LL;
  v163[1] = v113;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v163);
  if ( !v163[0] )
  {
    v118 = WdLogNewEntry5_WdLowResource(v115, v114, v116, v117);
    *(_QWORD *)(v118 + 24) = 2138LL;
    WdLogEvent5_WdLowResource(v118);
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v163);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v174);
    if ( v162 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v170);
    goto LABEL_129;
  }
  v147 = DXGCONTEXT::Present(
           (DXGCONTEXT *)v45,
           (struct _D3DKMT_PRESENT *)v7,
           (struct COREDEVICEACCESS *)v174,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v160,
           (struct CWin32kLocks *)v170,
           (struct DXGCONTEXT **)v152,
           v163[0]);
  if ( v147 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v175) )
    {
      v105 = COREDEVICEACCESS::AcquireShared((__int64)v174, 0xFFFFFFFF, 0LL);
      if ( v105 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v163);
        goto LABEL_184;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v45 + 16), (struct COREDEVICEACCESS *)v174);
  }
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v163);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v174);
  if ( v162 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
  if ( v147 >= 0 )
  {
    v119 = (_BYTE *)(v164 + 1496);
    if ( v164 + 1496 >= MmUserProbeAddress )
      v119 = (_BYTE *)MmUserProbeAddress;
    *v119 = *(_BYTE *)(v7 + 1512);
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v170);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v167);
  if ( v152 != v153 && v152 )
    ExFreePoolWithTag(v152, 0);
  v152 = 0LL;
  v154 = 0;
  if ( v148[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v148);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v156, v120);
  if ( P != v150 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v151 = 0;
  if ( v171 != v172 && v171 )
    ExFreePoolWithTag(v171, 0);
  v171 = 0LL;
  v173 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142, v121);
  v124 = v144;
  if ( v146 )
  {
    if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v144,
        v123,
        v144->Data1,
        *(_DWORD *)v144[3].Data4,
        *(_QWORD *)&v144[5].Data1,
        *(_QWORD *)v144[5].Data4,
        *(_DWORD *)v144[68].Data4,
        *v145);
  }
  else if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      (__int64)v144,
      v123,
      v144->Data1,
      *(_QWORD *)v144->Data4,
      v144[1].Data1,
      *(_DWORD *)&v144[5].Data2,
      *(_DWORD *)v144[5].Data4,
      *v145,
      *(_DWORD *)&v144[1].Data2,
      *(_DWORD *)v144[1].Data4);
  }
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v122, &EventProfilerExit, v123, v142);
  v125 = DXGGLOBAL::GetGlobal(v122, (__int64)v124);
  v126 = (union _SLIST_HEADER *)((char *)v125 + 768);
  ++*((_DWORD *)v125 + 199);
  if ( ExQueryDepthSList((PSLIST_HEADER)v125 + 48) < *((_WORD *)v125 + 392) )
  {
    ExpInterlockedPushEntrySList(v126, (PSLIST_ENTRY)v7);
  }
  else
  {
    ++LODWORD(v126[2].Alignment);
    ((void (__fastcall *)(__int64, union _SLIST_HEADER *))v126[3].Region)(v7, v126);
  }
  v129 = DXGPROCESS::GetCurrent(v128, v127);
  DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v129 + 9) + 88LL));
  return (unsigned int)v147;
}
