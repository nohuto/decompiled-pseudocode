/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C0218090
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C001831C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0021AFC (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0021BA0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     McTemplateK0qpqqqpp @ 0x1C0021C90 (McTemplateK0qpqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C0021D4C (McTemplateK0qqxxqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C003C450 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01DCDB0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0213058 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C02246A8 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(__int64 a1)
{
  void **v1; // r14
  struct DXGGLOBAL *Global; // rax
  char *v3; // rbx
  __int64 v4; // rcx
  PSLIST_ENTRY v5; // rdi
  __int64 v6; // rax
  const GUID *v8; // r8
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r12
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // rdx
  const void *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // esi
  PVOID v21; // rcx
  size_t v22; // r8
  void *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  const GUID *v28; // r8
  struct DXGGLOBAL *v29; // rax
  union _SLIST_HEADER *v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *PoolWithTag; // rcx
  SIZE_T v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  bool v38; // zf
  PVOID v39; // r9
  SIZE_T v40; // r15
  _BYTE *v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // r10
  unsigned int v44; // r12d
  unsigned int v45; // r15d
  unsigned int *v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // r9
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // r8
  char *v56; // rax
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rcx
  __int64 v67; // rdx
  unsigned int *v68; // rax
  __int64 v69; // rax
  struct DXGADAPTER *v70; // rsi
  struct DXGPROCESS *v71; // r12
  int v72; // r15d
  __int64 v73; // rcx
  const GUID *v74; // r8
  struct DXGGLOBAL *v75; // rax
  union _SLIST_HEADER *v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rax
  struct DXGGLOBAL *v79; // rax
  union _SLIST_HEADER *v80; // rbx
  void (__fastcall *Region)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v82; // r9
  int v83; // esi
  __int64 v84; // rcx
  const GUID *v85; // r8
  struct DXGGLOBAL *v86; // rax
  union _SLIST_HEADER *v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // rax
  struct DXGGLOBAL *v90; // rax
  union _SLIST_HEADER *v91; // rbx
  void (__fastcall *v92)(PSLIST_ENTRY, union _SLIST_HEADER *); // rax
  __int64 v93; // rcx
  const GUID *v94; // r8
  struct DXGGLOBAL *v95; // rax
  union _SLIST_HEADER *v96; // rbx
  struct DXGPROCESS *v97; // rax
  __int64 v98; // rcx
  const GUID *v99; // r8
  struct DXGGLOBAL *v100; // rax
  union _SLIST_HEADER *v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rcx
  const GUID *v104; // r8
  struct DXGGLOBAL *v105; // rax
  union _SLIST_HEADER *v106; // rbx
  int v107; // [rsp+50h] [rbp-288h] BYREF
  __int64 v108; // [rsp+58h] [rbp-280h]
  const GUID *v109; // [rsp+60h] [rbp-278h]
  unsigned int *v110; // [rsp+68h] [rbp-270h]
  char v111; // [rsp+70h] [rbp-268h]
  _QWORD v112[2]; // [rsp+78h] [rbp-260h] BYREF
  PVOID P; // [rsp+88h] [rbp-250h] BYREF
  _BYTE v114[32]; // [rsp+90h] [rbp-248h] BYREF
  unsigned int v115; // [rsp+B0h] [rbp-228h]
  PVOID v116; // [rsp+B8h] [rbp-220h]
  _BYTE v117[32]; // [rsp+C0h] [rbp-218h] BYREF
  unsigned int v118; // [rsp+E0h] [rbp-1F8h]
  unsigned int v119; // [rsp+E8h] [rbp-1F0h] BYREF
  PVOID v120; // [rsp+F0h] [rbp-1E8h]
  _BYTE v121[32]; // [rsp+F8h] [rbp-1E0h] BYREF
  unsigned int v122; // [rsp+118h] [rbp-1C0h]
  _BYTE v123[16]; // [rsp+120h] [rbp-1B8h] BYREF
  struct DXGPROCESS *v124; // [rsp+130h] [rbp-1A8h]
  void *Src; // [rsp+138h] [rbp-1A0h]
  char v126[8]; // [rsp+140h] [rbp-198h] BYREF
  __int64 v127; // [rsp+148h] [rbp-190h]
  char v128; // [rsp+150h] [rbp-188h]
  PSLIST_ENTRY ListEntry; // [rsp+158h] [rbp-180h]
  struct VIDSCH_SUBMIT_DATA_BASE *v130[2]; // [rsp+160h] [rbp-178h] BYREF
  unsigned int v131; // [rsp+170h] [rbp-168h]
  _QWORD v132[6]; // [rsp+178h] [rbp-160h] BYREF
  char v133; // [rsp+1A8h] [rbp-130h]
  _BYTE v134[32]; // [rsp+1B0h] [rbp-128h] BYREF
  _BYTE v135[24]; // [rsp+1D0h] [rbp-108h] BYREF
  DXGADAPTER *v136; // [rsp+1E8h] [rbp-F0h]
  PSLIST_ENTRY v137; // [rsp+230h] [rbp-A8h]
  PVOID v138; // [rsp+238h] [rbp-A0h]
  _BYTE v139[64]; // [rsp+240h] [rbp-98h] BYREF
  PVOID v140; // [rsp+280h] [rbp-58h] BYREF
  _BYTE v141[16]; // [rsp+288h] [rbp-50h] BYREF
  unsigned int v142; // [rsp+298h] [rbp-40h]

  v1 = (void **)a1;
  v119 = -1073741811;
  Global = DXGGLOBAL::GetGlobal(a1);
  v3 = (char *)Global + 800;
  ++*((_DWORD *)Global + 205);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 50);
  ListEntry = v5;
  if ( !v5 )
  {
    ++*((_DWORD *)v3 + 6);
    v5 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v3 + 6))(
                         *((unsigned int *)v3 + 9),
                         *((unsigned int *)v3 + 11),
                         *((unsigned int *)v3 + 10),
                         v3);
    ListEntry = v5;
  }
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v6 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v6);
    return 3221225495LL;
  }
  memset(v5, 0, 0x5F8uLL);
  v137 = v5;
  v108 = 0LL;
  v107 = 2020;
  v110 = &v119;
  v111 = 0;
  v109 = (const GUID *)((unsigned __int64)v5 & -(__int64)(bTracingEnabled != 0));
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((unsigned __int64)v5 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v8, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v107, 2020);
  Current = DXGPROCESS::GetCurrent();
  v124 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = PsGetCurrentProcess(v13, v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    v16 = v109;
    if ( v111 )
    {
      if ( v109 )
      {
LABEL_200:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq(
            (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
            (__int64)v16,
            v15,
            v16->Data1,
            *(_DWORD *)v16[3].Data4,
            *(_QWORD *)&v16[5].Data1,
            *(_QWORD *)v16[5].Data4,
            *(_DWORD *)v16[68].Data4,
            *v110);
      }
LABEL_205:
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v107);
      v79 = DXGGLOBAL::GetGlobal(v14);
      v80 = (union _SLIST_HEADER *)((char *)v79 + 800);
      ++*((_DWORD *)v79 + 207);
      if ( ExQueryDepthSList((PSLIST_HEADER)v79 + 50) < *((_WORD *)v79 + 408) )
      {
        ExpInterlockedPushEntrySList(v80, v5);
      }
      else
      {
        Region = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v80[3].Region;
        ++LODWORD(v80[2].Alignment);
        Region(v5, v80);
      }
      return 3221225485LL;
    }
    if ( !v109 )
      goto LABEL_205;
    goto LABEL_203;
  }
  v140 = 0LL;
  v142 = 0;
  P = 0LL;
  v115 = 0;
  v17 = v1 + 1;
  if ( (unsigned __int64)(v1 + 1) >= MmUserProbeAddress )
    v17 = (const void *)MmUserProbeAddress;
  memmove(v5, v17, 0x5D8uLL);
  v19 = *((_DWORD *)&v5[5].Next + 3);
  v20 = v19 + 1;
  v131 = v19 + 1;
  if ( v19 > 0x40 )
  {
    v102 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v102 + 24) = v20;
    WdLogEvent5_WdError(v102);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      v104 = v109;
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          *(_QWORD *)v109[5].Data4,
          v109,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v104,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v103, &EventProfilerExit, v104, v107);
    v105 = DXGGLOBAL::GetGlobal(v103);
    v106 = (union _SLIST_HEADER *)((char *)v105 + 800);
    ++*((_DWORD *)v105 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v105 + 50) < *((_WORD *)v105 + 408) )
    {
      ExpInterlockedPushEntrySList(v106, v5);
    }
    else
    {
      ++LODWORD(v106[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v106[3].Region)(v5, v106);
    }
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v140, v20)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, v20) )
  {
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      v99 = v109;
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          *(_QWORD *)v109[5].Data4,
          v109,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v99,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v98, &EventProfilerExit, v99, v107);
    v100 = DXGGLOBAL::GetGlobal(v98);
    v101 = (union _SLIST_HEADER *)((char *)v100 + 800);
    ++*((_DWORD *)v100 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v100 + 50) < *((_WORD *)v100 + 408) )
    {
      ExpInterlockedPushEntrySList(v101, v5);
    }
    else
    {
      ++LODWORD(v101[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v101[3].Region)(v5, v101);
    }
    return 3221225495LL;
  }
  Src = 0LL;
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (void **)MmUserProbeAddress;
  Src = *v1;
  v21 = v140;
  v138 = v140;
  v22 = 4LL * v20;
  v23 = Src;
  if ( (char *)Src + v22 < Src || (unsigned __int64)Src + v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v21, v23, v22);
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v123,
    *(_DWORD *)v140,
    Current,
    (struct DXGHWQUEUE **)P,
    0);
  if ( !*(_QWORD *)P )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v25[3] = Current;
    v25[4] = *(unsigned int *)v140;
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
LABEL_198:
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    v16 = v109;
    if ( v111 )
    {
      if ( v109 )
        goto LABEL_200;
      goto LABEL_205;
    }
    if ( !v109 )
      goto LABEL_205;
LABEL_203:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v16,
        v15,
        v16->Data1,
        *(_QWORD *)v16->Data4,
        v16[1].Data1,
        *(_DWORD *)v16[5].Data4,
        *v110,
        *(_DWORD *)&v16[1].Data2,
        *(_DWORD *)v16[1].Data4);
    goto LABEL_205;
  }
  v5[94].Next = (struct _SLIST_ENTRY *)P;
  v26 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v26 + 433) && *((_DWORD *)&v5[5].Next + 3) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v109,
          v28,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v28,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, v107);
    v29 = DXGGLOBAL::GetGlobal(v27);
    v30 = (union _SLIST_HEADER *)((char *)v29 + 800);
    ++*((_DWORD *)v29 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v29 + 50) < *((_WORD *)v29 + 408) )
    {
      ExpInterlockedPushEntrySList(v30, v5);
    }
    else
    {
      ++LODWORD(v30[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v30[3].Region)(v5, v30);
    }
    return 3221225474LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v112,
    *(struct DXGDEVICE **)(v26 + 16));
  PoolWithTag = 0LL;
  v116 = 0LL;
  v118 = 0;
  if ( v20 <= 4 )
  {
    PoolWithTag = v117;
    v116 = v117;
    v34 = 8LL * v20;
  }
  else
  {
    v31 = 0xFFFFFFFFFFFFFFFFuLL % v20;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 8 )
      goto LABEL_62;
    v34 = 8LL * v20;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v34, 0x4B677844u);
    v116 = PoolWithTag;
  }
  v118 = v20;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v34);
    PoolWithTag = v116;
  }
  Current = v124;
LABEL_62:
  if ( !PoolWithTag )
  {
    v35 = WdLogNewEntry5_WdWarning(0LL, v31, v32);
    *(_QWORD *)(v35 + 24) = 1953LL;
    WdLogEvent5_WdWarning(v35);
LABEL_64:
    if ( v116 != v117 && v116 )
      ExFreePoolWithTag(v116, 0);
    v116 = 0LL;
    v118 = 0;
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v109,
          v37,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v37,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    v38 = (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0;
LABEL_272:
    if ( !v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v36, &EventProfilerExit, v37, v107);
    v90 = DXGGLOBAL::GetGlobal(v36);
    v91 = (union _SLIST_HEADER *)((char *)v90 + 800);
    ++*((_DWORD *)v90 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v90 + 50) < *((_WORD *)v90 + 408) )
    {
      ExpInterlockedPushEntrySList(v91, v5);
    }
    else
    {
      v92 = (void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v91[3].Region;
      ++LODWORD(v91[2].Alignment);
      v92(v5, v91);
    }
    return 3221225495LL;
  }
  v39 = 0LL;
  v120 = 0LL;
  v122 = 0;
  if ( v20 <= 4 )
  {
    v41 = v121;
    v120 = v121;
    v40 = 8LL * v20;
    goto LABEL_87;
  }
  v31 = 0xFFFFFFFFFFFFFFFFuLL % v20;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v20 >= 8 )
  {
    v40 = 8LL * v20;
    v41 = ExAllocatePoolWithTag(PagedPool, v40, 0x4B677844u);
    v120 = v41;
    PoolWithTag = v116;
LABEL_87:
    v122 = v20;
    if ( !v41 )
    {
LABEL_90:
      v42 = WdLogNewEntry5_WdWarning(PoolWithTag, v31, v32);
      *(_QWORD *)(v42 + 24) = 1963LL;
      WdLogEvent5_WdWarning(v42);
      goto LABEL_91;
    }
    memset(v41, 0, v40);
    PoolWithTag = v116;
    v39 = v120;
  }
  if ( !v39 )
    goto LABEL_90;
  *PoolWithTag = v26;
  *(_QWORD *)v120 = v26;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v134, (struct _KTHREAD **)Current);
  v43 = v116;
  Src = v116;
  v44 = 0;
  if ( *((_DWORD *)&v5[5].Next + 3) )
  {
    v45 = 1;
    while ( 1 )
    {
      if ( v45 >= v142 )
        v46 = (unsigned int *)v140;
      else
        v46 = (unsigned int *)((char *)v140 + 4 * v45);
      v47 = *v46;
      v48 = (*v46 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v48 < *((_DWORD *)v124 + 62)
        && (v49 = *((_QWORD *)v124 + 29),
            v50 = *(_DWORD *)(v49 + 16 * v48 + 8),
            ((v47 >> 25) & 0x60) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60))
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) != 0 )
      {
        v52 = v50 & 0x1F;
        if ( (_BYTE)v52 == 15 )
        {
          v51 = *(_QWORD *)(v49 + 16LL * (unsigned int)v48);
        }
        else
        {
          v53 = WdLogNewEntry5_WdError(v52);
          *(_QWORD *)(v53 + 24) = 316LL;
          WdLogEvent5_WdError(v53);
          v51 = 0LL;
          v43 = Src;
        }
      }
      else
      {
        v51 = 0LL;
      }
      v54 = 8LL * v45;
      v55 = P;
      if ( v45 < v115 )
        v55 = (char *)P + v54;
      *v55 = v51;
      v56 = (char *)P;
      v57 = (char *)P + v54;
      if ( v45 >= v115 )
        v57 = P;
      if ( !*v57 )
        break;
      if ( v45 < v115 )
        v56 = (char *)P + v54;
      v58 = *(_QWORD *)(*(_QWORD *)v56 + 16LL);
      *((_QWORD *)v116 + v45) = v58;
      *((_QWORD *)v120 + v45) = v58;
      v59 = *((_QWORD *)v116 + v45);
      if ( !v59 || *(_QWORD *)(v59 + 16) != *(_QWORD *)(v26 + 16) )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v59);
        v65[3] = v26;
        v65[4] = *((unsigned int *)&v5[6].Next + v44);
        v65[5] = v44;
        v65[6] = -1073741811LL;
        goto LABEL_123;
      }
      v60 = v43[v44];
      if ( *(_DWORD *)(v43[v45] + 392LL) <= *(_DWORD *)(v60 + 392) )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v60);
        v65[3] = -1073741811LL;
LABEL_123:
        v66 = v65;
        goto LABEL_124;
      }
      v44 = v45++;
      if ( v44 >= *((_DWORD *)&v5[5].Next + 3) )
        goto LABEL_119;
    }
    v67 = WdLogNewEntry5_WdError(v54);
    if ( v45 >= v142 )
      v68 = (unsigned int *)v140;
    else
      v68 = (unsigned int *)((char *)v140 + 4 * v45);
    *(_QWORD *)(v67 + 24) = *v68;
    *(_QWORD *)(v67 + 32) = v44 + 1;
    v66 = (_QWORD *)v67;
LABEL_124:
    WdLogEvent5_WdError(v66);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v134);
    goto LABEL_125;
  }
LABEL_119:
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v134);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v132,
    v116,
    v118);
  if ( v133 )
  {
    if ( !v132[0] )
    {
      v64 = WdLogNewEntry5_WdWarning(v62, v61, v63);
      *(_QWORD *)(v64 + 24) = 2035LL;
      WdLogEvent5_WdWarning(v64);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
LABEL_91:
      if ( v120 != v121 && v120 )
        ExFreePoolWithTag(v120, 0);
      v120 = 0LL;
      v122 = 0;
      goto LABEL_64;
    }
    v69 = WdLogNewEntry5_WdWarning(v62, v61, v63);
    *(_QWORD *)(v69 + 24) = 2040LL;
    WdLogEvent5_WdWarning(v69);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
LABEL_125:
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v122 = 0;
    v120 = 0LL;
    if ( v116 != v117 && v116 )
      ExFreePoolWithTag(v116, 0);
    v118 = 0;
    v116 = 0LL;
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    v115 = 0;
    P = 0LL;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    goto LABEL_198;
  }
  *((_QWORD *)&v5[93].Next + 1) = v120;
  *((_BYTE *)&v5[94].Next + 8) = 1;
  v70 = *(struct DXGADAPTER **)(*(_QWORD *)(v26 + 16) + 1728LL);
  v71 = v124;
  v72 = DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)v26, (struct _D3DKMT_PRESENT *)v5, v124);
  v119 = v72;
  if ( v72 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v120 = 0LL;
    v122 = 0;
    if ( v116 != v117 && v116 )
      ExFreePoolWithTag(v116, 0);
    v116 = 0LL;
    v118 = 0;
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v109,
          v74,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v74,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v73, &EventProfilerExit, v74, v107);
    v75 = DXGGLOBAL::GetGlobal(v73);
    v76 = (union _SLIST_HEADER *)((char *)v75 + 800);
    ++*((_DWORD *)v75 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v75 + 50) < *((_WORD *)v75 + 408) )
    {
      ExpInterlockedPushEntrySList(v76, v5);
    }
    else
    {
      ++LODWORD(v76[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v76[3].Region)(v5, v76);
    }
    return (unsigned int)v72;
  }
  v77 = *((unsigned int *)&v5[5].Next + 2);
  if ( (v77 & 0x10000000) != 0 )
  {
    if ( !v70 )
    {
      v78 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v78 + 24) = 2061LL;
      goto LABEL_184;
    }
    if ( (*((_DWORD *)v70 + 77) & 0x100) == 0 )
    {
      v78 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v78 + 24) = 2067LL;
      goto LABEL_184;
    }
  }
  else if ( v70 )
  {
    if ( (*((_DWORD *)v70 + 77) & 0x100) != 0 && (v77 & 0x18000) == 0 )
    {
      v78 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v78 + 24) = 2077LL;
LABEL_184:
      WdLogEvent5_WdError(v78);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
      if ( v120 != v121 && v120 )
        ExFreePoolWithTag(v120, 0);
      v120 = 0LL;
      v122 = 0;
      if ( v116 != v117 && v116 )
        ExFreePoolWithTag(v116, 0);
      v116 = 0LL;
      v118 = 0;
      if ( v112[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
      if ( P != v114 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v115 = 0;
      if ( v140 != v141 && v140 )
        ExFreePoolWithTag(v140, 0);
      goto LABEL_198;
    }
  }
  else
  {
    v70 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v139, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v71 + 13), v70);
  v127 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) + 16LL);
  v128 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v135, *(_QWORD *)(v26 + 16), 2, v82, 0);
  v83 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v135);
  v119 = v83;
  if ( v83 < 0 )
    goto LABEL_215;
  if ( (*(_DWORD *)(&v5[5].Next + 1) & 0x200000) != 0 )
  {
    v83 = SubmitPresentHistoryToken(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v5[22].Next + 1),
            (struct COREDEVICEACCESS *)v135,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v126,
            (struct CWin32kLocks *)v139,
            0,
            0LL,
            0LL,
            0LL,
            (struct DXGCONTEXT *)v26,
            0LL);
LABEL_215:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v135);
    if ( v128 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v120 = 0LL;
    v122 = 0;
    if ( v116 != v117 && v116 )
      ExFreePoolWithTag(v116, 0);
    v116 = 0LL;
    v118 = 0;
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v109,
          v85,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v85,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v84, &EventProfilerExit, v85, v107);
    v86 = DXGGLOBAL::GetGlobal(v84);
    v87 = (union _SLIST_HEADER *)((char *)v86 + 800);
    ++*((_DWORD *)v86 + 207);
    if ( ExQueryDepthSList((PSLIST_HEADER)v86 + 50) < *((_WORD *)v86 + 408) )
    {
      ExpInterlockedPushEntrySList(v87, v5);
    }
    else
    {
      ++LODWORD(v87[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v87[3].Region)(v5, v87);
    }
    return (unsigned int)v83;
  }
  v130[0] = 0LL;
  v130[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*(_QWORD *)(v26 + 16) + 16LL);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v130);
  if ( !v130[0] )
  {
    v89 = WdLogNewEntry5_WdLowResource(v88);
    *(_QWORD *)(v89 + 24) = 2119LL;
    WdLogEvent5_WdLowResource(v89);
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v130);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v135);
    if ( v128 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
    if ( v120 != v121 && v120 )
      ExFreePoolWithTag(v120, 0);
    v120 = 0LL;
    v122 = 0;
    if ( v116 != v117 && v116 )
      ExFreePoolWithTag(v116, 0);
    v116 = 0LL;
    v118 = 0;
    if ( v112[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
    if ( P != v114 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v115 = 0;
    if ( v140 != v141 && v140 )
      ExFreePoolWithTag(v140, 0);
    v140 = 0LL;
    v142 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
    if ( v111 )
    {
      if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          (__int64)v109,
          v37,
          v109->Data1,
          *(_DWORD *)v109[3].Data4,
          *(_QWORD *)&v109[5].Data1,
          *(_QWORD *)v109[5].Data4,
          *(_DWORD *)v109[68].Data4,
          *v110);
    }
    else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v37,
        v109->Data1,
        *(_QWORD *)v109->Data4,
        v109[1].Data1,
        *(_DWORD *)v109[5].Data4,
        *v110,
        *(_DWORD *)&v109[1].Data2,
        *(_DWORD *)v109[1].Data4);
    }
    v38 = (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0;
    goto LABEL_272;
  }
  v119 = DXGCONTEXT::Present(
           (DXGCONTEXT *)v26,
           (const struct DXGK_PRESENT_PARAMS *)v5,
           (struct COREDEVICEACCESS *)v135,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v126,
           (struct CWin32kLocks *)v139,
           (struct DXGCONTEXT **)v120,
           v130[0]);
  if ( v119 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v136) )
    {
      v83 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v135);
      if ( v83 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v130);
        goto LABEL_215;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v26 + 16), (struct COREDEVICEACCESS *)v135);
  }
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v130);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v135);
  if ( v128 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v126);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v139);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v132);
  if ( v120 != v121 && v120 )
    ExFreePoolWithTag(v120, 0);
  v120 = 0LL;
  v122 = 0;
  if ( v116 != v117 && v116 )
    ExFreePoolWithTag(v116, 0);
  v116 = 0LL;
  v118 = 0;
  if ( v112[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v112);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v123);
  if ( P != v114 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v115 = 0;
  if ( v140 != v141 && v140 )
    ExFreePoolWithTag(v140, 0);
  v140 = 0LL;
  v142 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v107);
  if ( v111 )
  {
    if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        (__int64)v109,
        v94,
        v109->Data1,
        *(_DWORD *)v109[3].Data4,
        *(_QWORD *)&v109[5].Data1,
        *(_QWORD *)v109[5].Data4,
        *(_DWORD *)v109[68].Data4,
        *v110);
  }
  else if ( v109 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqpp(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      (__int64)v109,
      v94,
      v109->Data1,
      *(_QWORD *)v109->Data4,
      v109[1].Data1,
      *(_DWORD *)v109[5].Data4,
      *v110,
      *(_DWORD *)&v109[1].Data2,
      *(_DWORD *)v109[1].Data4);
  }
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v93, &EventProfilerExit, v94, v107);
  v95 = DXGGLOBAL::GetGlobal(v93);
  v96 = (union _SLIST_HEADER *)((char *)v95 + 800);
  ++*((_DWORD *)v95 + 207);
  if ( ExQueryDepthSList((PSLIST_HEADER)v95 + 50) < *((_WORD *)v95 + 408) )
  {
    ExpInterlockedPushEntrySList(v96, v5);
  }
  else
  {
    ++LODWORD(v96[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v96[3].Region)(v5, v96);
  }
  v97 = DXGPROCESS::GetCurrent();
  DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(*((_QWORD *)v97 + 9) + 88LL));
  return v119;
}
