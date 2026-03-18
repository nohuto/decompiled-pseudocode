/*
 * XREFs of DxgkPresent @ 0x1C010F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0006B5C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C8EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001AAB8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00238D4 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0024860 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C002488C (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C0024994 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0qpqqqqpp @ 0x1C004304C (McTemplateK0qpqqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C0043124 (McTemplateK0qqxxqq.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0111E80 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C013E744 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259590 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C025AE2C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  const void *v1; // r14
  bool v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  const GUID *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  const void *v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGCONTEXT *v27; // rsi
  __int64 v28; // r13
  struct _KEVENT *v29; // r14
  struct _KEVENT *v30; // r14
  unsigned int v31; // r14d
  __int64 v32; // r14
  _QWORD *PoolWithTag; // rcx
  unsigned int v34; // r14d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGADAPTER *v38; // rcx
  int v39; // eax
  DXGPRESENT *v40; // rax
  int v41; // r14d
  __int64 v42; // rdx
  struct DXGADAPTER *v43; // rdi
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  const GUID *v48; // r8
  int v49; // edi
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  PSLIST_ENTRY v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  int v58; // eax
  int v59; // r8d
  char v60; // al
  unsigned int v61; // edx
  __int64 v62; // rcx
  int v63; // eax
  int v64; // r8d
  char v65; // al
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  unsigned int v69; // eax
  int v70; // r9d
  __int64 v71; // rdx
  __int64 Next_low; // rcx
  DXGGLOBAL **v73; // rdx
  _BYTE *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  const GUID *v77; // r8
  __int64 v78; // rdx
  struct DXGGLOBAL *v79; // rax
  char *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rbx
  PLIST_ENTRY i; // rdi
  DXGPRESENT *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v96; // r14
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  const GUID *v102; // r8
  __int64 v103; // rdx
  struct DXGGLOBAL *v104; // rax
  union _SLIST_HEADER *v105; // rdi
  __int64 v106; // rcx
  const GUID *v107; // r8
  __int64 v108; // rdx
  struct DXGGLOBAL *v109; // rax
  union _SLIST_HEADER *v110; // rdi
  __int64 v111; // rcx
  __int64 v112; // rax
  int Next; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rax
  _QWORD *v118; // rdi
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rcx
  const GUID *v124; // r8
  __int64 v125; // rdx
  struct DXGGLOBAL *v126; // rax
  union _SLIST_HEADER *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // rdx
  const GUID *v130; // r8
  __int64 v131; // rcx
  char v132; // r14
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  const GUID *v138; // r8
  __int64 v139; // rdx
  struct DXGGLOBAL *v140; // rax
  union _SLIST_HEADER *v141; // rdi
  struct DXGADAPTER *v142; // r8
  __int64 v143; // rax
  __int64 v144; // r10
  unsigned int v145; // ecx
  __int64 *v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // r9
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r10
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rax
  PVOID v158; // rcx
  _QWORD *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  const GUID *v167; // r8
  __int64 v168; // rdx
  struct DXGGLOBAL *v169; // rax
  union _SLIST_HEADER *v170; // rdi
  _QWORD *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  const GUID *v174; // r8
  __int64 v175; // rdx
  struct DXGGLOBAL *v176; // rax
  union _SLIST_HEADER *v177; // rsi
  unsigned int v178; // esi
  __int64 v179; // rdx
  __int64 v180; // rcx
  const GUID *v181; // r8
  __int64 v182; // rdx
  struct DXGGLOBAL *v183; // rax
  union _SLIST_HEADER *v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rdx
  __int64 v188; // rcx
  const GUID *v189; // r8
  __int64 v190; // rdx
  struct DXGGLOBAL *v191; // rax
  union _SLIST_HEADER *v192; // rdi
  __int64 *v193; // rax
  __int64 *v194; // rdi
  int v195; // [rsp+60h] [rbp-258h] BYREF
  __int64 v196; // [rsp+68h] [rbp-250h]
  __int64 v197; // [rsp+70h] [rbp-248h]
  int *v198; // [rsp+78h] [rbp-240h]
  char v199; // [rsp+80h] [rbp-238h]
  int AllocationInfo; // [rsp+88h] [rbp-230h] BYREF
  PVOID P; // [rsp+90h] [rbp-228h]
  _BYTE v202[32]; // [rsp+98h] [rbp-220h] BYREF
  unsigned int v203; // [rsp+B8h] [rbp-200h]
  DXGCONTEXT *v204; // [rsp+C0h] [rbp-1F8h] BYREF
  char v205; // [rsp+C8h] [rbp-1F0h]
  __int64 v206; // [rsp+D0h] [rbp-1E8h] BYREF
  int v207; // [rsp+D8h] [rbp-1E0h]
  struct DXGADAPTER *v208; // [rsp+E0h] [rbp-1D8h]
  __int64 v209; // [rsp+E8h] [rbp-1D0h] BYREF
  struct DXGADAPTER *v210; // [rsp+F0h] [rbp-1C8h]
  char v211; // [rsp+F8h] [rbp-1C0h]
  __int64 v212; // [rsp+100h] [rbp-1B8h]
  PSLIST_ENTRY ListEntry; // [rsp+108h] [rbp-1B0h]
  struct DXGCONTEXT *v214; // [rsp+110h] [rbp-1A8h] BYREF
  char *v215; // [rsp+118h] [rbp-1A0h]
  __int64 v216; // [rsp+120h] [rbp-198h]
  __int64 v217; // [rsp+128h] [rbp-190h]
  __int64 v218; // [rsp+130h] [rbp-188h]
  struct _SLIST_ENTRY *v219[2]; // [rsp+138h] [rbp-180h] BYREF
  _QWORD v220[6]; // [rsp+148h] [rbp-170h] BYREF
  char v221; // [rsp+178h] [rbp-140h]
  _BYTE v222[32]; // [rsp+180h] [rbp-138h] BYREF
  _BYTE v223[64]; // [rsp+1A0h] [rbp-118h] BYREF
  char v224[8]; // [rsp+1E0h] [rbp-D8h] BYREF
  _BYTE v225[16]; // [rsp+1E8h] [rbp-D0h] BYREF
  DXGADAPTER *v226; // [rsp+1F8h] [rbp-C0h]
  char v227; // [rsp+200h] [rbp-B8h]
  int v228; // [rsp+204h] [rbp-B4h]
  __int64 v229; // [rsp+208h] [rbp-B0h]
  _BYTE v230[16]; // [rsp+228h] [rbp-90h] BYREF
  __int64 v231; // [rsp+238h] [rbp-80h]
  __int64 v232; // [rsp+268h] [rbp-50h]
  char v233; // [rsp+270h] [rbp-48h]

  v1 = Src;
  v215 = Src;
  AllocationInfo = -1073741811;
  v2 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal(v4, v3);
  v6 = (char *)Global + 768;
  ++*((_DWORD *)Global + 197);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
  ListEntry = v9;
  if ( !v9 )
  {
    ++*((_DWORD *)v6 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v6 + 6))(
                         *((unsigned int *)v6 + 9),
                         *((unsigned int *)v6 + 11),
                         *((unsigned int *)v6 + 10),
                         v6);
    ListEntry = v9;
  }
  if ( !v9 )
  {
    v94 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
    *(_QWORD *)(v94 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v94);
    return 3221225495LL;
  }
  memset(v9, 0, 0x5F8uLL);
  if ( bTracingEnabled )
    v13 = (__int64)v9;
  else
    v13 = 0LL;
  v196 = 0LL;
  v195 = 2020;
  v198 = &AllocationInfo;
  v199 = 0;
  v197 = v13;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&AllocationInfo, &EventProfilerEnter, v12, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v195, 2020LL);
  CurrentProcess = PsGetCurrentProcess(v15, v14);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v21 = ProcessDxgProcess;
  v217 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v96 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v21 = *v96;
      v217 = *v96;
    }
    v1 = v215;
  }
  v216 = v21;
  if ( !v21 )
  {
    v97 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v97 + 24) = -1073741811LL;
    *(_QWORD *)(v97 + 32) = PsGetCurrentProcess(v99, v98);
    WdLogEvent5_WdError(v97);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v100);
    v103 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v102,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v102,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_133;
    goto LABEL_132;
  }
  v22 = v1;
  if ( v2 )
  {
    if ( (unsigned __int64)v1 >= MmUserProbeAddress )
      v22 = (const void *)MmUserProbeAddress;
    memmove(v9, v22, 0x5D8uLL);
  }
  else
  {
    memmove(v9, v1, 0x5D8uLL);
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v21 + 96) + 400LL))() && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v23);
    v108 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v107,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v107,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v106, &EventProfilerExit, v107, v195);
    v109 = DXGGLOBAL::GetGlobal(v106, v108);
    v110 = (union _SLIST_HEADER *)((char *)v109 + 768);
    ++*((_DWORD *)v109 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v109 + 48) < *((_WORD *)v109 + 392) )
    {
      ExpInterlockedPushEntrySList(v110, v9);
    }
    else
    {
      ++LODWORD(v110[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v110[3].Region)(v9, v110);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    v111 = *((unsigned int *)&v9[90].Next + 2);
    if ( !(_DWORD)v111 )
    {
      v112 = WdLogNewEntry5_WdAssertion(v111, v23);
      *(_QWORD *)(v112 + 24) = 1172LL;
      WdLogEvent5_WdAssertion(v112);
      LODWORD(v111) = *((_DWORD *)&v9[90].Next + 2);
    }
    Next = (int)v9->Next;
    LODWORD(v9->Next) = v111;
    *((_DWORD *)&v9[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       (struct DXGPROCESS *)v21,
                       (const struct _D3DKMT_PRESENT *)v9,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 12));
    if ( AllocationInfo < 0 )
    {
      v117 = WdLogNewEntry5_WdWarning(v115, v114, v116);
      *(_QWORD *)(v117 + 24) = HIDWORD(v9[1].Next);
      WdLogEvent5_WdWarning(v117);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v204,
    (unsigned int)v9->Next,
    (struct _KTHREAD **)v21,
    &v214,
    0);
  v27 = v214;
  if ( !v214 )
  {
    v118 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v118[3] = -1073741811LL;
    v118[4] = PsGetCurrentProcess(v120, v119);
    v118[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v118);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v121);
    v103 = v197;
    if ( v199 )
      goto LABEL_163;
    if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      goto LABEL_159;
LABEL_160:
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_133;
LABEL_132:
    McTemplateK0q(v101, &EventProfilerExit, v102, v195);
LABEL_133:
    v104 = DXGGLOBAL::GetGlobal(v101, v103);
    v105 = (union _SLIST_HEADER *)((char *)v104 + 768);
    ++*((_DWORD *)v104 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v104 + 48) < *((_WORD *)v104 + 392) )
    {
      ExpInterlockedPushEntrySList(v105, v9);
    }
    else
    {
      ++LODWORD(v105[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v105[3].Region)(v9, v105);
    }
    return 3221225485LL;
  }
  if ( *((_BYTE *)v214 + 449) && *((_DWORD *)&v9[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v122);
    v125 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v124,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v124,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v123, &EventProfilerExit, v124, v195);
    v126 = DXGGLOBAL::GetGlobal(v123, v125);
    v127 = (union _SLIST_HEADER *)((char *)v126 + 768);
    ++*((_DWORD *)v126 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v126 + 48) < *((_WORD *)v126 + 392) )
    {
      ExpInterlockedPushEntrySList(v127, v9);
    }
    else
    {
      ++LODWORD(v127[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v127[3].Region)(v9, v127);
    }
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v214 + 103) & 8) != 0 )
  {
    v128 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v128 + 24) = 1206LL;
    WdLogEvent5_WdWarning(v128);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v129);
    v103 = v197;
    if ( v199 )
      goto LABEL_163;
    goto LABEL_182;
  }
  v28 = *((_QWORD *)v214 + 2);
  v218 = v28;
  v206 = v28;
  v207 = 0;
  if ( v28 )
  {
    v29 = *(struct _KEVENT **)(v28 + 16);
    if ( *(_DWORD *)(v28 + 328) == 2 )
    {
      v30 = v29 + 4;
      if ( KeReadStateEvent(v30) )
        goto LABEL_23;
    }
    else
    {
      v30 = v29 + 3;
      if ( KeReadStateEvent(v30) )
      {
LABEL_23:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 104), 0) )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL));
          v131 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
          if ( *(_DWORD *)(v131 + 136) == 1 )
          {
            DXGADAPTER::WakeUpAdapter(v131, 0xFFFFFFFFLL);
            v132 = 1;
          }
          else
          {
            v132 = 0;
          }
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v131, &EventBlockThread, v130, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 104), 1u);
          if ( v132 )
            DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
          ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL, 0LL);
          KeLeaveCriticalRegion();
        }
        v207 = 1;
        goto LABEL_25;
      }
    }
    KeWaitForSingleObject(v30, Executive, 0, 0, 0LL);
    goto LABEL_23;
  }
LABEL_25:
  v31 = *((_DWORD *)&v9[5].Next + 3);
  if ( v31 > 0x40 )
  {
    v133 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v133 + 24) = v27;
    *(_QWORD *)(v133 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v133);
    if ( v28 )
      goto LABEL_198;
    goto LABEL_199;
  }
  v32 = v31 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v203 = 0;
  if ( (unsigned int)v32 > 4 )
  {
    v26 = (unsigned int)v32;
    v24 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v32;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 < 8 )
      goto LABEL_30;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v32, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v202;
    P = v202;
  }
  v203 = v32;
  if ( !PoolWithTag )
  {
LABEL_203:
    v135 = WdLogNewEntry5_WdWarning(PoolWithTag, v24, v26);
    *(_QWORD *)(v135 + 24) = 1232LL;
    WdLogEvent5_WdWarning(v135);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v136);
    v139 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v138,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v138,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_218;
LABEL_217:
    McTemplateK0q(v137, &EventProfilerExit, v138, v195);
LABEL_218:
    v140 = DXGGLOBAL::GetGlobal(v137, v139);
    v141 = (union _SLIST_HEADER *)((char *)v140 + 768);
    ++*((_DWORD *)v140 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v140 + 48) < *((_WORD *)v140 + 392) )
    {
      ExpInterlockedPushEntrySList(v141, v9);
    }
    else
    {
      ++LODWORD(v141[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v141[3].Region)(v9, v141);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v32);
  PoolWithTag = P;
LABEL_30:
  if ( !PoolWithTag )
    goto LABEL_203;
  *PoolWithTag = v27;
  v208 = (struct DXGADAPTER *)P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v222, (struct _KTHREAD **)v21);
  v34 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    v142 = v208;
    do
    {
      v143 = (*((_DWORD *)&v9[6].Next + v34) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v143 < *(_DWORD *)(v21 + 224) )
      {
        v144 = *(_QWORD *)(v21 + 208);
        v145 = *(_DWORD *)(v144 + 16 * v143 + 8);
        if ( *((_DWORD *)&v9[6].Next + v34) >> 30 == ((v145 >> 5) & 3) && (v145 & 0x2000) == 0 && (v145 & 0x1F) != 0 )
        {
          v146 = (__int64 *)(v144 + 16LL * (unsigned int)v143);
          v147 = v145 & 0x1F;
          if ( (_BYTE)v147 == 7 )
          {
            v149 = *v146;
            goto LABEL_229;
          }
          v148 = WdLogNewEntry5_WdError(v147, v146, v142);
          *(_QWORD *)(v148 + 24) = 267LL;
          WdLogEvent5_WdError(v148);
          v142 = v208;
        }
      }
      v149 = 0LL;
LABEL_229:
      v150 = v34 + 1;
      v151 = 8 * v150;
      *((_QWORD *)P + v150) = v149;
      v152 = *((_QWORD *)P + v150);
      if ( !v152 || (*(_DWORD *)(v152 + 412) & 8) != 0 || (v151 = *((_QWORD *)v27 + 2), *(_QWORD *)(v152 + 16) != v151) )
      {
        v159 = (_QWORD *)WdLogNewEntry5_WdError(v151, v152, v142);
        v159[3] = v27;
        v159[4] = *((unsigned int *)&v9[6].Next + v34);
        v159[5] = v34;
        v159[6] = -1073741811LL;
        WdLogEvent5_WdError(v159);
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v222);
        v158 = P;
        if ( P != v202 && P )
LABEL_246:
          ExFreePoolWithTag(v158, 0);
LABEL_247:
        P = 0LL;
        v203 = 0;
        if ( v28 )
LABEL_198:
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
LABEL_199:
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v134);
        v103 = v197;
        if ( v199 )
        {
LABEL_163:
          if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq(
              (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
              v103,
              v102,
              *(_DWORD *)v103,
              *(_DWORD *)(v103 + 56),
              *(_QWORD *)(v103 + 80),
              *(_QWORD *)(v103 + 88),
              *(_DWORD *)(v103 + 1096),
              *v198);
          goto LABEL_160;
        }
LABEL_182:
        if ( !v103 || (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_160;
LABEL_159:
        McTemplateK0qpqqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v103,
          v102,
          *(_DWORD *)v103,
          *(_QWORD *)(v103 + 8),
          *(_DWORD *)(v103 + 16),
          *(_DWORD *)(v103 + 84),
          *(_DWORD *)(v103 + 88),
          *v198,
          *(_DWORD *)(v103 + 20),
          *(_DWORD *)(v103 + 24));
        goto LABEL_160;
      }
      if ( v34 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v151 + 16) + 16LL)) )
        {
          v155 = *(unsigned int *)(*((_QWORD *)v142 + v154) + 408LL);
          if ( (unsigned int)v155 <= *(_DWORD *)(*((_QWORD *)v142 + v34 - 1) + 408LL) )
          {
            v156 = WdLogNewEntry5_WdError(v153, v155, v142);
            *(_QWORD *)(v156 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v156);
            DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v222);
            goto LABEL_241;
          }
        }
      }
      v34 = v150;
    }
    while ( (unsigned int)v150 < *((_DWORD *)&v9[5].Next + 3) );
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v222);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v220,
    P,
    v203);
  if ( v221 )
  {
    if ( v220[0] )
    {
      v162 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v162 + 24) = 1302LL;
      WdLogEvent5_WdWarning(v162);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
      goto LABEL_241;
    }
    v160 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v160 + 24) = 1297LL;
    WdLogEvent5_WdWarning(v160);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v161);
    v139 = v197;
    if ( !v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        goto LABEL_258;
      goto LABEL_259;
    }
LABEL_262:
    if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v139,
        v138,
        *(_DWORD *)v139,
        *(_DWORD *)(v139 + 56),
        *(_QWORD *)(v139 + 80),
        *(_QWORD *)(v139 + 88),
        *(_DWORD *)(v139 + 1096),
        *v198);
    goto LABEL_259;
  }
  *((_QWORD *)&v9[93].Next + 1) = P;
  *((_BYTE *)&v9[94].Next + 8) = 1;
  v38 = *(struct DXGADAPTER **)(*((_QWORD *)v27 + 2) + 1728LL);
  v208 = v38;
  v39 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v39 & 0x8000) == 0 )
  {
    v40 = (DXGPRESENT *)*((_QWORD *)v27 + 19);
    if ( v40
      || ((v89 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL)) == 0LL
        ? (v40 = 0LL)
        : (v40 = DXGPRESENT::DXGPRESENT(v89, *(_DWORD *)(*((_QWORD *)v27 + 2) + 1736LL))),
          (*((_QWORD *)v27 + 19) = v40) != 0LL) )
    {
      *((_BYTE *)v27 + 450) = 1;
      v41 = DXGPRESENT::CopyPresentArgs(v40, v27, (struct _D3DKMT_PRESENT *)v9);
    }
    else
    {
      v164 = (_QWORD *)WdLogNewEntry5_WdLowResource(v91, v90, v92, v93);
      v164[3] = -1073741801LL;
      v164[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 16LL);
      v164[5] = v21;
      v164[6] = v27;
      WdLogEvent5_WdLowResource(v164);
      v41 = -1073741801;
    }
    goto LABEL_36;
  }
  if ( (v39 & 0x400000) != 0 || v9[90].Next )
  {
    v163 = (_QWORD *)WdLogNewEntry5_WdError(v38, v35, v37);
    v163[3] = -1073741811LL;
    v163[4] = v27;
    v163[5] = *((unsigned int *)&v9[5].Next + 2);
    v163[6] = v9[90].Next;
    WdLogEvent5_WdError(v163);
    v41 = -1073741811;
LABEL_36:
    v38 = v208;
    goto LABEL_37;
  }
  v41 = 0;
LABEL_37:
  AllocationInfo = v41;
  if ( v41 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v165);
    v168 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v167,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v167,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v166, &EventProfilerExit, v167, v195);
    v169 = DXGGLOBAL::GetGlobal(v166, v168);
    v170 = (union _SLIST_HEADER *)((char *)v169 + 768);
    ++*((_DWORD *)v169 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v169 + 48) < *((_WORD *)v169 + 392) )
    {
      ExpInterlockedPushEntrySList(v170, v9);
    }
    else
    {
      ++LODWORD(v170[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v170[3].Region)(v9, v170);
    }
    return (unsigned int)v41;
  }
  v42 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v42 & 0x10000000) != 0 )
  {
    if ( v38 )
    {
      if ( (*((_DWORD *)v38 + 77) & 0x100) != 0 )
        goto LABEL_41;
      v157 = WdLogNewEntry5_WdError(v38, v42, v37);
      *(_QWORD *)(v157 + 24) = 1329LL;
    }
    else
    {
      v157 = WdLogNewEntry5_WdError(0LL, v42, v37);
      *(_QWORD *)(v157 + 24) = 1323LL;
    }
LABEL_240:
    WdLogEvent5_WdError(v157);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
LABEL_241:
    v158 = P;
    if ( P != v202 && P )
      goto LABEL_246;
    goto LABEL_247;
  }
  if ( v38 )
  {
    if ( (*((_DWORD *)v38 + 77) & 0x100) != 0 && (v42 & 0x18000) == 0 )
    {
      v157 = WdLogNewEntry5_WdError(v38, v42, v37);
      *(_QWORD *)(v157 + 24) = 1339LL;
      goto LABEL_240;
    }
  }
  else
  {
    v38 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 16LL);
  }
LABEL_41:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v223, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v21 + 96), v38);
  v210 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v210 + 3);
  v209 = -1LL;
  v43 = v210;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v43 + 120, 0LL);
  v211 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v224, *((_QWORD *)v27 + 2), 2, v44, 0);
  if ( v227 )
  {
    v171 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45);
    v171[3] = 275LL;
    v171[4] = 4LL;
    v171[5] = v225;
    v171[6] = 0LL;
    v171[7] = 0LL;
    WdLogEvent5_WdCriticalError(v171);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v226 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v226 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v47, &EventBlockThread, v48, 72);
      KeWaitForSingleObject((char *)v226 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared((__int64)v226, 0xFFFFFFFF, 0LL);
  }
  v228 = -1;
  v229 = 0LL;
  v227 = 1;
  if ( *(_DWORD *)(v232 + 464) == 1 )
  {
    if ( !v233 || (COREACCESS::AcquireShared((__int64)v230, 0xFFFFFFFF, 0LL), *(_DWORD *)(v231 + 176) == 1) )
    {
      v49 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v230);
      COREACCESS::Release((COREACCESS *)v225);
      v49 = -1073741130;
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v225);
    v49 = -1073741130;
  }
  AllocationInfo = v49;
  if ( v49 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v224);
    if ( v211 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v209);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v223);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v172);
    v175 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v174,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v174,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v173, &EventProfilerExit, v174, v195);
    v176 = DXGGLOBAL::GetGlobal(v173, v175);
    v177 = (union _SLIST_HEADER *)((char *)v176 + 768);
    ++*((_DWORD *)v176 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v176 + 48) < *((_WORD *)v176 + 392) )
    {
      ExpInterlockedPushEntrySList(v177, v9);
    }
    else
    {
      ++LODWORD(v177[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v177[3].Region)(v9, v177);
    }
    return (unsigned int)v49;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v178 = SubmitPresentHistoryToken(&v9[22].Next + 1, v224, &v209, v223, 0, 0LL, v9, 0LL, v214, 0LL, -1, 0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v224);
    if ( v211 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v209);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v223);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v179);
    v182 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v181,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v181,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v180, &EventProfilerExit, v181, v195);
    v183 = DXGGLOBAL::GetGlobal(v180, v182);
    v184 = (union _SLIST_HEADER *)((char *)v183 + 768);
    ++*((_DWORD *)v183 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v183 + 48) < *((_WORD *)v183 + 392) )
    {
      ExpInterlockedPushEntrySList(v184, v9);
    }
    else
    {
      ++LODWORD(v184[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v184[3].Region)(v9, v184);
    }
    return v178;
  }
  v50 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL);
  v212 = v50;
  v219[1] = (struct _SLIST_ENTRY *)v50;
  v51 = v50 + 1120;
  ++*(_DWORD *)(v50 + 1140);
  v54 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v50 + 1120));
  if ( !v54 )
  {
    ++*(_DWORD *)(v51 + 24);
    v54 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v51 + 48))(
                          *(unsigned int *)(v51 + 36),
                          *(unsigned int *)(v51 + 44),
                          *(unsigned int *)(v51 + 40),
                          v51);
  }
  v219[0] = v54;
  if ( !v54 )
  {
    v185 = WdLogNewEntry5_WdLowResource(v53, v52, v55, v56);
    *(_QWORD *)(v185 + 24) = 1381LL;
    WdLogEvent5_WdLowResource(v185);
    CVidSchSubmitData::~CVidSchSubmitData(v219);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v224);
    if ( v211 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v209);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v223);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v186);
    v139 = v197;
    if ( !v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
LABEL_258:
        McTemplateK0qpqqqqpp(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v139,
          v138,
          *(_DWORD *)v139,
          *(_QWORD *)(v139 + 8),
          *(_DWORD *)(v139 + 16),
          *(_DWORD *)(v139 + 84),
          *(_DWORD *)(v139 + 88),
          *v198,
          *(_DWORD *)(v139 + 20),
          *(_DWORD *)(v139 + 24));
LABEL_259:
      if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        goto LABEL_218;
      goto LABEL_217;
    }
    goto LABEL_262;
  }
  v57 = *(_QWORD *)(v212 + 16);
  v58 = *(_DWORD *)(v57 + 2184);
  if ( v58 < 0x2000 )
    v59 = 1;
  else
    v59 = *(_DWORD *)(v57 + 256);
  if ( v58 >= 0x2000 || (v60 = *(_BYTE *)(v57 + 2484)) != 0 )
    v60 = 1;
  if ( v60 )
    v61 = *(_DWORD *)(v57 + 2392) * ((v59 << 6) + ((8 * v59 + 191) & 0xFFFFFFF8)) + 8 * v59 + 568;
  else
    v61 = 1296;
  memset(v54, 0, v61);
  v62 = *(_QWORD *)(v212 + 16);
  v63 = *(_DWORD *)(v62 + 2184);
  if ( v63 < 0x2000 )
    v64 = 1;
  else
    v64 = *(_DWORD *)(v62 + 256);
  if ( v63 >= 0x2000 || (v65 = *(_BYTE *)(v62 + 2484)) != 0 )
    v65 = 1;
  v66 = *(_DWORD *)(v62 + 2392);
  BYTE4(v54[22].Next) = v65;
  if ( v65 )
  {
    *((_DWORD *)&v54[34].Next + 3) = v66;
    LODWORD(v54[35].Next) = v64;
    v67 = 8 * v64;
    v68 = v64 << 6;
    HIDWORD(v54[35].Next) = v66 * (v68 + ((v67 + 191) & 0xFFFFFFF8)) + 16;
    v69 = v66 * (v68 + ((v67 + 191) & 0xFFFFFFF8)) + 568;
    *((_DWORD *)&v54[33].Next + 2) = v69;
    *((_DWORD *)&v54[33].Next + 3) = v67 + v69;
  }
  v70 = DXGCONTEXT::Present(
          v214,
          (struct _D3DKMT_PRESENT *)v9,
          (struct COREDEVICEACCESS *)v224,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v209,
          (struct CWin32kLocks *)v223,
          (struct DXGCONTEXT **)P,
          (struct VIDSCH_SUBMIT_DATA_BASE *)v54);
  AllocationInfo = v70;
  if ( v70 != -1071775482 )
    goto LABEL_67;
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v226)
    || (LODWORD(v212) = COREDEVICEACCESS::AcquireShared((__int64)v224, 0xFFFFFFFF, 0LL), (int)v212 >= 0) )
  {
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v27 + 2), (struct COREDEVICEACCESS *)v224);
    v70 = AllocationInfo;
LABEL_67:
    if ( v208 )
    {
      v71 = *((_QWORD *)v208 + 319);
      if ( v71 )
      {
        if ( (*(_DWORD *)(&v9[5].Next + 1) & 4) != 0 )
        {
          Next_low = LODWORD(v9[1].Next);
          if ( (unsigned int)Next_low < *(_DWORD *)(v71 + 80) )
            DISPLAY_SOURCE::RecordPresentDiagHistory(
              (DISPLAY_SOURCE *)(*(_QWORD *)(v71 + 112) + 3968 * Next_low),
              v70,
              *(_BYTE *)(v217 + 298) != 0);
        }
      }
    }
    ++*(_DWORD *)(v51 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v51) >= *(_WORD *)(v51 + 16) )
    {
      ++*(_DWORD *)(v51 + 32);
      (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v51 + 56))(v54, v51);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v51, v54);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v224);
    if ( v211 )
    {
      v211 = 0;
      ExReleasePushLockSharedEx((char *)v210 + 120, 0LL);
      KeLeaveCriticalRegion();
      v73 = (DXGGLOBAL **)v210;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v210 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(v73[2], (struct DXGADAPTER *)v73);
    }
    if ( AllocationInfo >= 0 )
    {
      v74 = v215 + 1488;
      if ( (unsigned __int64)(v215 + 1488) >= MmUserProbeAddress )
        v74 = (_BYTE *)MmUserProbeAddress;
      *v74 = *((_BYTE *)&v9[94].Next + 8);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v223);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
    if ( P != v202 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v203 = 0;
    if ( v28 && v207 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v28 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v204 && !v205 )
      DXGCONTEXT::ReleaseReference(v204);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v75);
    v78 = v197;
    if ( v199 )
    {
      if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v197,
          v77,
          *(_DWORD *)v197,
          *(_DWORD *)(v197 + 56),
          *(_QWORD *)(v197 + 80),
          *(_QWORD *)(v197 + 88),
          *(_DWORD *)(v197 + 1096),
          *v198);
    }
    else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqqpp(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v77,
        *(_DWORD *)v197,
        *(_QWORD *)(v197 + 8),
        *(_DWORD *)(v197 + 16),
        *(_DWORD *)(v197 + 84),
        *(_DWORD *)(v197 + 88),
        *v198,
        *(_DWORD *)(v197 + 20),
        *(_DWORD *)(v197 + 24));
    }
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v76, &EventProfilerExit, v77, v195);
    v79 = DXGGLOBAL::GetGlobal(v76, v78);
    v80 = (char *)v79 + 768;
    ++*((_DWORD *)v79 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v79 + 48) >= *((_WORD *)v79 + 392) )
    {
      ++*((_DWORD *)v80 + 8);
      (*((void (__fastcall **)(PSLIST_ENTRY, char *))v80 + 7))(v9, v80);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v80, v9);
    }
    v83 = PsGetCurrentProcess(v82, v81);
    v84 = PsGetProcessDxgProcess(v83);
    v85 = v84;
    if ( !v84 || (*(_BYTE *)(v84 + 299) & 4) != 0 )
    {
      v193 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v194 = v193;
      if ( v193 )
      {
        ObfDereferenceObject(v193);
        v85 = *v194;
      }
    }
    v86 = *(_QWORD *)(v85 + 72);
    for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v86 + 88), (PKSPIN_LOCK)(v86 + 104));
          i;
          i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v86 + 88), (PKSPIN_LOCK)(v86 + 104)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
      operator delete(i);
    }
    return (unsigned int)AllocationInfo;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v219);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v224);
  if ( v211 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v209);
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v223);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v220);
  if ( P != v202 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v203 = 0;
  if ( v28 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v206);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v204);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v195, v187);
  v190 = v197;
  if ( v199 )
  {
    if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v197,
        v189,
        *(_DWORD *)v197,
        *(_DWORD *)(v197 + 56),
        *(_QWORD *)(v197 + 80),
        *(_QWORD *)(v197 + 88),
        *(_DWORD *)(v197 + 1096),
        *v198);
  }
  else if ( v197 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqqpp(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      v197,
      v189,
      *(_DWORD *)v197,
      *(_QWORD *)(v197 + 8),
      *(_DWORD *)(v197 + 16),
      *(_DWORD *)(v197 + 84),
      *(_DWORD *)(v197 + 88),
      *v198,
      *(_DWORD *)(v197 + 20),
      *(_DWORD *)(v197 + 24));
  }
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v188, &EventProfilerExit, v189, v195);
  v191 = DXGGLOBAL::GetGlobal(v188, v190);
  v192 = (union _SLIST_HEADER *)((char *)v191 + 768);
  ++*((_DWORD *)v191 + 199);
  if ( ExQueryDepthSList((PSLIST_HEADER)v191 + 48) < *((_WORD *)v191 + 392) )
  {
    ExpInterlockedPushEntrySList(v192, v9);
  }
  else
  {
    ++LODWORD(v192[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v192[3].Region)(v9, v192);
  }
  return (unsigned int)v212;
}
