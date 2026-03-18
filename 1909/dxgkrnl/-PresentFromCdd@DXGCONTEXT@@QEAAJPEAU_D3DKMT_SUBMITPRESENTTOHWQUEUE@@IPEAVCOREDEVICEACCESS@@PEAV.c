/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013DBD8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00C4BD0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C020C6A0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000238C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000C6AC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C8EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017DA0 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017ECC (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017EF8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0017FAC (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0017FE0 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0018020 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001C38C (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C00440C4 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C0044334 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00ED9A4 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0124B10 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C013E41C (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C013E4CC (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C013E560 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C013E744 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C01525E0 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  DXGCONTEXT *v7; // rsi
  struct DXGGLOBAL *Global; // rax
  char *v9; // rbx
  PSLIST_ENTRY v10; // rdi
  D3DKMT_HANDLE v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  DXGADAPTER **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const RECT **v19; // r15
  unsigned int *v20; // r12
  unsigned int v21; // ebx
  __int64 v22; // r13
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // rcx
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int Next_high; // ebx
  __int64 v34; // r13
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // ecx
  __int64 v40; // rcx
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  struct VIDSCH_SUBMIT_DATA_BASE *v49; // rdx
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  int v54; // eax
  COREDEVICEACCESS *v55; // r14
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rcx
  struct DXGPRESENTMUTEX *v59; // r8
  __int64 v60; // r13
  unsigned __int8 v61; // r14
  int v62; // ebx
  unsigned int v63; // r13d
  int updated; // eax
  __int64 v65; // rcx
  __int64 v66; // rdx
  UINT v67; // eax
  DXGADAPTER **v68; // r12
  __int64 v69; // rcx
  int CurrentOrientation; // eax
  UINT Value; // eax
  UINT i; // r14d
  const RECT *v73; // rcx
  const RECT *v74; // rcx
  const GUID *v75; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v78; // r12
  UINT v79; // ebx
  __int64 v80; // rdx
  unsigned int v81; // r10d
  unsigned int v82; // r9d
  __int64 v83; // rcx
  COREDEVICEACCESS *v84; // r14
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct DXGGLOBAL *v89; // rax
  char *v90; // rsi
  DXGPRESENT *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 (__fastcall *v98)(__int64, __int64, __int64, char *); // rax
  __int64 v99; // r8
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  int v108; // r9d
  __int64 v109; // rax
  _QWORD *v110; // rax
  int v111; // r9d
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rdx
  _QWORD *v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rcx
  const RECT *DdiSubRectList; // r14
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  const struct tagRECT *ContentRect; // rbx
  __int64 v131; // rdx
  __int64 left; // rcx
  __int64 v133; // rax
  LONG top; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  const struct tagRECT *v137; // rbx
  __int64 v138; // rcx
  __int64 v139; // rax
  UINT v140; // r12d
  int v141; // r13d
  int v142; // esi
  __int64 v143; // rbx
  LONG v144; // r8d
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  LONG v148; // eax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  _QWORD *v159; // rax
  struct DXGCONTEXT **v160; // [rsp+20h] [rbp-100h]
  struct DXGALLOCATION *v161; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v163; // [rsp+A8h] [rbp-78h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v164[2]; // [rsp+B0h] [rbp-70h] BYREF
  ADAPTER_DISPLAY *v165; // [rsp+C0h] [rbp-60h]
  struct _EX_RUNDOWN_REF *v166; // [rsp+C8h] [rbp-58h] BYREF
  struct DXGCONTEXT **v167; // [rsp+D0h] [rbp-50h] BYREF
  COREDEVICEACCESS *v168; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v169; // [rsp+E0h] [rbp-40h]
  struct DXGHWQUEUE *v170; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v171; // [rsp+F0h] [rbp-30h]
  DXGCONTEXT *v172; // [rsp+F8h] [rbp-28h]
  _BYTE v173[24]; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v174[24]; // [rsp+118h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v175; // [rsp+130h] [rbp+10h] BYREF
  _BYTE v177[64]; // [rsp+1E0h] [rbp+C0h] BYREF
  _BYTE v178[64]; // [rsp+220h] [rbp+100h] BYREF
  _BYTE v179[64]; // [rsp+260h] [rbp+140h] BYREF
  _BYTE v180[64]; // [rsp+2A0h] [rbp+180h] BYREF

  v169 = a5;
  v7 = this;
  v167 = a6;
  v168 = a4;
  v172 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v9 = (char *)Global + 768;
  ++*((_DWORD *)Global + 197);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
  if ( !v10 )
  {
    v97 = *((unsigned int *)v9 + 11);
    v98 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v9 + 6);
    v99 = *((unsigned int *)v9 + 10);
    v100 = *((unsigned int *)v9 + 9);
    ++*((_DWORD *)v9 + 6);
    v10 = (PSLIST_ENTRY)v98(v100, v97, v99, v9);
    if ( !v10 )
    {
      v105 = WdLogNewEntry5_WdLowResource(v102, v101, v103, v104);
      *(_QWORD *)(v105 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v105);
      return 3221225495LL;
    }
  }
  memset(v10, 0, 0x5F8uLL);
  memmove(v10, &a2->PrivatePresentData, 0x5D8uLL);
  v10[94].Next = (struct _SLIST_ENTRY *)&v170;
  if ( a2->hHwQueues )
    v11 = *a2->hHwQueues;
  else
    v11 = 0;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v174,
    v11,
    *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 40LL),
    &v170,
    1);
  v12 = *((_QWORD *)v7 + 2);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 96LL);
  v14 = *(_QWORD *)(v12 + 1728);
  v171 = v13;
  v15 = *(DXGADAPTER ***)(v14 + 2552);
  v165 = (ADAPTER_DISPLAY *)v15;
  if ( !v15 || !DXGADAPTER::IsCoreResourceSharedOwner(v15[2]) )
  {
    v106 = WdLogNewEntry5_WdAssertion(v12, v13);
    *(_QWORD *)(v106 + 24) = 6383LL;
    WdLogEvent5_WdAssertion(v106);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
  {
    v107 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v107 + 24) = 6384LL;
    WdLogEvent5_WdAssertion(v107);
  }
  v19 = (const RECT **)(&v10[4].Next + 1);
  if ( !*((_QWORD *)&v10[4].Next + 1)
    || (v20 = (unsigned int *)&v10[4], !LODWORD(v10[4].Next))
    || (v17 = *((unsigned int *)&v10[5].Next + 2),
        (((unsigned __int8)v17 ^ (unsigned __int8)(*((_DWORD *)&v10[5].Next + 2) >> 1)) & 1) == 0)
    || (v17 & 0x63C) != 0 )
  {
    v159 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    LODWORD(v53) = -1073741811;
    v159[3] = -1073741811LL;
    v159[4] = v7;
    v159[5] = *v19;
    v159[6] = LODWORD(v10[4].Next);
    v159[7] = *((unsigned int *)&v10[5].Next + 2);
    WdLogEvent5_WdError(v159);
    goto LABEL_86;
  }
  memset(&v175, 0, sizeof(v175));
  v21 = *((_DWORD *)&v10[1].Next + 2);
  v22 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v22 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v108 = *(_DWORD *)(v22 + 200);
      if ( v108 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v23, &EventBlockThread, v24, v108);
    }
    ExAcquirePushLockSharedEx(v22 + 184, 0LL);
  }
  v25 = (v21 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v25 < *(_DWORD *)(v22 + 224) )
  {
    v26 = *(_QWORD *)(v22 + 208);
    v27 = *(_DWORD *)(v26 + 16 * v25 + 8);
    if ( ((v21 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
    {
      v28 = v27 & 0x1F;
      if ( (_BYTE)v28 == 5 )
      {
        v29 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * (unsigned int)v25);
        goto LABEL_19;
      }
      v109 = WdLogNewEntry5_WdError(v28, 2LL * (unsigned int)v25, v26);
      *(_QWORD *)(v109 + 24) = 267LL;
      WdLogEvent5_WdError(v109);
    }
  }
  v29 = 0LL;
LABEL_19:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v166, v29);
  ExReleasePushLockSharedEx(v22 + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v166 )
  {
    v110 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
    LODWORD(v53) = -1073741811;
    v110[3] = -1073741811LL;
    v110[4] = v7;
    v110[5] = *v19;
    v110[6] = *v20;
    v110[7] = *((unsigned int *)&v10[1].Next + 2);
    WdLogEvent5_WdError(v110);
    goto LABEL_85;
  }
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 1) != 0 )
  {
    Next_high = HIDWORD(v10[1].Next);
    v34 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v34 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v111 = *(_DWORD *)(v34 + 200);
        if ( v111 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v35, &EventBlockThread, v36, v111);
      }
      ExAcquirePushLockSharedEx(v34 + 184, 0LL);
    }
    v37 = (Next_high >> 6) & 0xFFFFFF;
    if ( (unsigned int)v37 < *(_DWORD *)(v34 + 224) )
    {
      v38 = *(_QWORD *)(v34 + 208);
      v39 = *(_DWORD *)(v38 + 16 * v37 + 8);
      if ( ((Next_high >> 25) & 0x60) == (*(_BYTE *)(v38 + 16 * v37 + 8) & 0x60)
        && (v39 & 0x2000) == 0
        && (v39 & 0x1F) != 0 )
      {
        v40 = v39 & 0x1F;
        if ( (_BYTE)v40 == 5 )
        {
          v41 = *(struct _EX_RUNDOWN_REF **)(v38 + 16LL * (unsigned int)v37);
LABEL_28:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v164, v41);
          ExReleasePushLockSharedEx(v34 + 184, 0LL);
          KeLeaveCriticalRegion();
          if ( !v164[0] )
          {
            v113 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44);
            LODWORD(v53) = -1073741811;
            v113[3] = -1073741811LL;
            v113[4] = v7;
            v113[5] = HIDWORD(v10[1].Next);
            WdLogEvent5_WdError(v113);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v164, v114);
            goto LABEL_85;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v164, v42);
          goto LABEL_30;
        }
        v112 = WdLogNewEntry5_WdError(v40, 2LL * (unsigned int)v37, v38);
        *(_QWORD *)(v112 + 24) = 267LL;
        WdLogEvent5_WdError(v112);
      }
    }
    v41 = 0LL;
    goto LABEL_28;
  }
LABEL_30:
  if ( !*((_QWORD *)v7 + 19) )
  {
    v92 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    if ( v92 )
      v92 = DXGPRESENT::DXGPRESENT(v92, 1u);
    *((_QWORD *)v7 + 19) = v92;
    if ( !v92 )
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdLowResource(v94, v93, v95, v96);
      v115[3] = -1073741801LL;
      v115[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
      v115[5] = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
      v115[6] = v7;
      WdLogEvent5_WdLowResource(v115);
      LODWORD(v53) = -1073741801;
      goto LABEL_85;
    }
  }
  v45 = *((_QWORD *)v7 + 2);
  v164[0] = 0LL;
  v164[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v45 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v164);
  v49 = v164[0];
  if ( !v164[0] )
  {
    v116 = WdLogNewEntry5_WdLowResource(v46, 0LL, v47, v48);
    *(_QWORD *)(v116 + 24) = 6448LL;
    WdLogEvent5_WdLowResource(v116);
    LODWORD(v53) = -1073741801;
    goto LABEL_84;
  }
  v50 = *(_DWORD *)v164[0] | 0x10000;
  *(_DWORD *)v164[0] = v50;
  if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
  {
    v50 |= 1u;
    *(_DWORD *)v49 = v50;
  }
  *(_DWORD *)v49 = v50 | 0x100;
  LOBYTE(v47) = 1;
  v163 = 0LL;
  LODWORD(v53) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 544LL) + 8LL)
                                                                                                 + 488LL))(
                   *((_QWORD *)v7 + 29),
                   0LL,
                   v47,
                   &v163);
  if ( (int)v53 < 0 )
    goto LABEL_84;
  if ( !v163 )
  {
    v117 = WdLogNewEntry5_WdAssertion(v52, v51);
    *(_QWORD *)(v117 + 24) = 6466LL;
    WdLogEvent5_WdAssertion(v117);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v173, *(struct _KTHREAD ***)(*((_QWORD *)v7 + 2) + 16LL));
  v54 = *((_DWORD *)&v10[5].Next + 2);
  if ( (v54 & 0x4000) == 0 )
  {
    v55 = v168;
    COREDEVICEACCESS::Release(v168);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v169);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v173, v56);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v169);
    v57 = COREDEVICEACCESS::AcquireShared((__int64)v55, 0xFFFFFFFF, 0LL);
    v53 = v57;
    if ( v57 < 0 )
    {
      v118 = WdLogNewEntry5_WdEvent(v58);
      *(_QWORD *)(v118 + 24) = v53;
      *(_QWORD *)(v118 + 32) = v7;
      WdLogEvent5_WdEvent(v118);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v55);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v163,
        0LL);
      goto LABEL_83;
    }
    v60 = v171;
    v61 = 0;
    if ( v171 )
    {
      v62 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
      if ( v62 != (*(unsigned int (**)(void))(v171 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = (*(__int64 (**)(void))(v60 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v7 + 2), 2u);
        v61 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v59, v61);
    v54 = *((_DWORD *)&v10[5].Next + 2);
  }
  if ( (v54 & 1) == 0
    || HIDWORD(v10[1].Next) == *((_DWORD *)&v10[1].Next + 2)
    || (*(_DWORD *)(v166[6].Count + 4) & 2) == 0 )
  {
    v63 = a3;
    goto LABEL_48;
  }
  v63 = a3;
  updated = DxgkCddUpdatePresentRects(v165, a3, (const struct tagRECT **)&v10[4].Next + 1, (unsigned int *)&v10[4]);
  v53 = updated;
  if ( updated < 0 )
  {
    v119 = (_QWORD *)WdLogNewEntry5_WdEvent(v65);
    v119[3] = v53;
    v119[4] = *((_QWORD *)v7 + 2);
    v119[5] = a3;
    goto LABEL_122;
  }
  if ( *v20 )
  {
LABEL_48:
    LODWORD(v53) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), *v20);
    if ( (int)v53 < 0 )
    {
LABEL_123:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v163,
        0LL);
      v163 = 0LL;
      goto LABEL_83;
    }
    v175.DstRect = (RECT)v10[2];
    v67 = *v20;
    v68 = (DXGADAPTER **)v165;
    v175.SubRectCnt = v67;
    v69 = *((unsigned int *)&v10[5].Next + 2);
    if ( (v69 & 0x4000) != 0 )
    {
      Value = v175.Flags.Value;
    }
    else
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v165, v63, 1LL);
      Value = (CurrentOrientation != 1 ? 0x80 : 0) | v175.Flags.Value & 0xFFFFFF7F;
      v175.Flags.Value = Value;
      v69 = *((unsigned int *)&v10[5].Next + 2);
    }
    if ( (v69 & 1) == 0 )
    {
      if ( (v69 & 2) == 0 )
      {
        v158 = WdLogNewEntry5_WdAssertion(v69, v66);
        *(_QWORD *)(v158 + 24) = 6669LL;
        WdLogEvent5_WdAssertion(v158);
        Value = v175.Flags.Value;
      }
      v175.Flags.Value = Value | 2;
      v175.Color = *((_DWORD *)&v10[1].Next + 3);
      v175.pDstSubRects = *v19;
      goto LABEL_69;
    }
    v175.Flags.Value = Value | 1;
    v175.SrcRect = (RECT)v10[3];
    if ( HIDWORD(v10[1].Next) != *((_DWORD *)&v10[1].Next + 2) )
    {
      v175.pDstSubRects = *v19;
LABEL_54:
      for ( i = 0; i < v175.SubRectCnt; ++i )
      {
        v73 = *v19;
        if ( (*v19)[i].left >= (*v19)[i].right )
        {
          v152 = WdLogNewEntry5_WdAssertion(v73, v66);
          *(_QWORD *)(v152 + 24) = 6653LL;
          WdLogEvent5_WdAssertion(v152);
          v73 = *v19;
        }
        if ( v73[i].top >= v73[i].bottom )
        {
          v153 = WdLogNewEntry5_WdAssertion(v73, v66);
          *(_QWORD *)(v153 + 24) = 6654LL;
          WdLogEvent5_WdAssertion(v153);
        }
        if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) == 0 )
        {
          v74 = *v19;
          if ( (*v19)[i].left < v175.SrcRect.left )
          {
            v154 = WdLogNewEntry5_WdAssertion(v74, v66);
            *(_QWORD *)(v154 + 24) = 6659LL;
            WdLogEvent5_WdAssertion(v154);
            v74 = *v19;
          }
          if ( v74[i].right > v175.SrcRect.right )
          {
            v155 = WdLogNewEntry5_WdAssertion(v74, v66);
            *(_QWORD *)(v155 + 24) = 6660LL;
            WdLogEvent5_WdAssertion(v155);
            v74 = *v19;
          }
          if ( v74[i].top < v175.SrcRect.top )
          {
            v156 = WdLogNewEntry5_WdAssertion(v74, v66);
            *(_QWORD *)(v156 + 24) = 6661LL;
            WdLogEvent5_WdAssertion(v156);
            v74 = *v19;
          }
          if ( v74[i].bottom > v175.SrcRect.bottom )
          {
            v157 = WdLogNewEntry5_WdAssertion(v74, v66);
            *(_QWORD *)(v157 + 24) = 6662LL;
            WdLogEvent5_WdAssertion(v157);
          }
        }
      }
LABEL_69:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 544LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 552LL),
          *((unsigned int *)&v10[1].Next + 2));
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 544LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 552LL),
          HIDWORD(v10[1].Next));
        pDstSubRects = v175.pDstSubRects;
        SubRectCnt = v175.SubRectCnt;
        v78 = v163;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v175.DstRect.left),
            HIDWORD(*(_QWORD *)&v175.DstRect.right),
            (const GUID *)HIDWORD(*(_QWORD *)&v175.SrcRect.left),
            0LL,
            v163);
        v79 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v80 = SubRectCnt - v79;
            if ( (unsigned int)v80 > 0x10 )
              break;
            v81 = SubRectCnt - v79;
            if ( (_DWORD)v80 )
              goto LABEL_75;
LABEL_77:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v161) = v81;
              LODWORD(v160) = SubRectCnt - v79 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2((__int64)v180, v80, v75, v78, v160, v161, v180, v179, v178, v177);
            }
            v79 += 16;
            if ( v79 >= SubRectCnt )
              goto LABEL_80;
          }
          v81 = 16;
LABEL_75:
          v75 = 0LL;
          v82 = 0;
          do
          {
            v83 = v82 + v79;
            ++v82;
            v83 *= 2LL;
            v75 = (const GUID *)((char *)v75 + 4);
            *(_DWORD *)&v179[(_QWORD)v75 + 60] = *(&pDstSubRects->left + 2 * v83);
            *(_DWORD *)&v178[(_QWORD)v75 + 60] = *(&pDstSubRects->right + 2 * v83);
            *(_DWORD *)&v177[(_QWORD)v75 + 60] = *(&pDstSubRects->top + 2 * v83);
            *(_DWORD *)&v177[(_QWORD)v75 - 4] = *(&pDstSubRects->bottom + 2 * v83);
          }
          while ( v82 < v81 );
          goto LABEL_77;
        }
      }
LABEL_80:
      v84 = v168;
      LODWORD(v53) = DXGCONTEXT::SubmitPresent(
                       v7,
                       (struct _D3DKMT_PRESENT *)v10,
                       (const struct DXGK_PRESENT_PARAMS *)v10,
                       *((_DWORD *)&v10[5].Next + 3),
                       v167,
                       0LL,
                       HIDWORD(v10[1].Next),
                       *((_DWORD *)&v10[1].Next + 2),
                       &v175,
                       0LL,
                       v163,
                       v164[0],
                       D3DDDIFMT_A8B8G8R8,
                       (struct _D3DKMT_PRESENT *)v168);
      if ( (int)v53 >= 0 && *((_DWORD *)&v10[22].Next + 2) == 1 )
      {
        v167 = (struct DXGCONTEXT **)-100000LL;
        LODWORD(v53) = SubmitPresentHistoryToken(
                         (_DWORD *)&v10[22].Next + 2,
                         (__int64)v84,
                         (__int64)v169,
                         0LL,
                         0,
                         (union _LARGE_INTEGER *)&v167,
                         (__int64)v10,
                         0LL,
                         (__int64)v7,
                         0LL,
                         0xFFFFFFFF,
                         0LL);
      }
      goto LABEL_83;
    }
    if ( (*(_DWORD *)(&v10[5].Next + 1) & 0x4000) != 0
      || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v68, v63) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
      v123 = (unsigned int)(v175.SrcRect.right - v175.SrcRect.left);
      v124 = (unsigned int)(v175.DstRect.right - v175.DstRect.left);
      v175.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v124 != (_DWORD)v123 )
      {
        v125 = WdLogNewEntry5_WdAssertion(v124, v123);
        *(_QWORD *)(v125 + 24) = 6614LL;
        WdLogEvent5_WdAssertion(v125);
      }
      v126 = (unsigned int)(v175.SrcRect.bottom - v175.SrcRect.top);
      if ( v175.DstRect.bottom - v175.DstRect.top != (_DWORD)v126 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v126, v123);
        *(_QWORD *)(v127 + 24) = 6617LL;
        WdLogEvent5_WdAssertion(v127);
      }
      if ( v175.SrcRect.left >= v175.SrcRect.right )
      {
        v128 = WdLogNewEntry5_WdAssertion(v126, v123);
        *(_QWORD *)(v128 + 24) = 6619LL;
        WdLogEvent5_WdAssertion(v128);
      }
      if ( v175.SrcRect.left < 0 )
      {
        v129 = WdLogNewEntry5_WdAssertion(v126, v123);
        *(_QWORD *)(v129 + 24) = 6620LL;
        WdLogEvent5_WdAssertion(v129);
      }
      ContentRect = ADAPTER_DISPLAY::GetContentRect(v68, v63);
      left = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v68, v63)->left;
      if ( v175.SrcRect.right > ContentRect->right - (int)left )
      {
        v133 = WdLogNewEntry5_WdAssertion(left, v131);
        *(_QWORD *)(v133 + 24) = 6621LL;
        WdLogEvent5_WdAssertion(v133);
      }
      top = v175.DstRect.top;
      if ( v175.DstRect.top >= v175.DstRect.bottom )
      {
        v135 = WdLogNewEntry5_WdAssertion(left, v131);
        *(_QWORD *)(v135 + 24) = 6623LL;
        WdLogEvent5_WdAssertion(v135);
        top = v175.DstRect.top;
      }
      if ( top < 0 )
      {
        v136 = WdLogNewEntry5_WdAssertion(left, v131);
        *(_QWORD *)(v136 + 24) = 6624LL;
        WdLogEvent5_WdAssertion(v136);
      }
      v137 = ADAPTER_DISPLAY::GetContentRect(v68, v63);
      v138 = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v68, v63)->top;
      if ( v175.SrcRect.bottom > v137->bottom - (int)v138 )
      {
        v139 = WdLogNewEntry5_WdAssertion(v138, v66);
        *(_QWORD *)(v139 + 24) = 6625LL;
        WdLogEvent5_WdAssertion(v139);
      }
      v140 = 0;
      v141 = v175.DstRect.left - v175.SrcRect.left;
      if ( v175.SubRectCnt )
      {
        v142 = v175.DstRect.top - v175.SrcRect.top;
        do
        {
          v143 = v140;
          v144 = v141 + (*v19)[v140].left;
          DdiSubRectList[v143].left = v144;
          v66 = (unsigned int)(v141 + (*v19)[v140].right);
          DdiSubRectList[v143].right = v66;
          DdiSubRectList[v143].top = v142 + (*v19)[v140].top;
          DdiSubRectList[v143].bottom = v142 + (*v19)[v140].bottom;
          if ( v144 >= (int)v66 )
          {
            v145 = WdLogNewEntry5_WdAssertion(v138, v66);
            *(_QWORD *)(v145 + 24) = 6637LL;
            WdLogEvent5_WdAssertion(v145);
            v144 = DdiSubRectList[v140].left;
          }
          if ( v144 < v175.DstRect.left )
          {
            v146 = WdLogNewEntry5_WdAssertion(v138, v66);
            *(_QWORD *)(v146 + 24) = 6638LL;
            WdLogEvent5_WdAssertion(v146);
          }
          if ( DdiSubRectList[v140].right > v175.DstRect.right )
          {
            v147 = WdLogNewEntry5_WdAssertion(v138, v66);
            *(_QWORD *)(v147 + 24) = 6639LL;
            WdLogEvent5_WdAssertion(v147);
          }
          v148 = DdiSubRectList[v140].top;
          if ( v148 >= DdiSubRectList[v140].bottom )
          {
            v149 = WdLogNewEntry5_WdAssertion(v138, v66);
            *(_QWORD *)(v149 + 24) = 6640LL;
            WdLogEvent5_WdAssertion(v149);
            v148 = DdiSubRectList[v140].top;
          }
          if ( v148 < v175.DstRect.top )
          {
            v150 = WdLogNewEntry5_WdAssertion(v138, v66);
            *(_QWORD *)(v150 + 24) = 6641LL;
            WdLogEvent5_WdAssertion(v150);
          }
          if ( DdiSubRectList[v140].bottom > v175.DstRect.bottom )
          {
            v151 = WdLogNewEntry5_WdAssertion(v138, v66);
            *(_QWORD *)(v151 + 24) = 6642LL;
            WdLogEvent5_WdAssertion(v151);
          }
          ++v140;
        }
        while ( v140 < v175.SubRectCnt );
        v7 = v172;
      }
      goto LABEL_54;
    }
    v119 = (_QWORD *)WdLogNewEntry5_WdEvent(v121);
    LODWORD(v53) = -1071774910;
    v119[3] = -1071774910LL;
    v119[4] = *((_QWORD *)v7 + 2);
    v119[5] = *((unsigned int *)&v10[1].Next + 2);
    v119[6] = v63;
LABEL_122:
    WdLogEvent5_WdEvent(v119);
    goto LABEL_123;
  }
  v120 = (_QWORD *)WdLogNewEntry5_WdEvent(v65);
  v120[3] = 0LL;
  v120[4] = *((_QWORD *)v7 + 2);
  v120[5] = *((unsigned int *)&v10[1].Next + 2);
  v120[6] = a3;
  WdLogEvent5_WdEvent(v120);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                         + 8LL)
                                                             + 496LL))(
    v163,
    0LL);
  v163 = 0LL;
  LODWORD(v53) = 0;
LABEL_83:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v173);
LABEL_84:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v164);
LABEL_85:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v166, v85);
LABEL_86:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v174, v86);
  v89 = DXGGLOBAL::GetGlobal(v88, v87);
  v90 = (char *)v89 + 768;
  ++*((_DWORD *)v89 + 199);
  if ( ExQueryDepthSList((PSLIST_HEADER)v89 + 48) >= *((_WORD *)v89 + 392) )
  {
    ++*((_DWORD *)v90 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v90 + 7))(v10, v90);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v90, v10);
  }
  return (unsigned int)v53;
}
