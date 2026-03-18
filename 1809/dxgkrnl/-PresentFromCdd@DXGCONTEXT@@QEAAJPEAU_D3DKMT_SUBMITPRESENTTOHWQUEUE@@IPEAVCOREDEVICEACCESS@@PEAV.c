/*
 * XREFs of ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00F7380
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@I@Z @ 0x1C01DD480 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@I@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00111A4 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C001124C (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C001128C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001130C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0011350 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0011984 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0013F44 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001B8C8 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0021FE0 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C0022250 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E544C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00F6CD0 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00F6EB4 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00F6F48 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01260FC (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C013DC30 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::PresentFromCdd(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a5,
        struct DXGCONTEXT **a6)
{
  unsigned int v6; // r12d
  DXGCONTEXT *v8; // rsi
  struct DXGGLOBAL *Global; // rax
  char *v10; // rbx
  struct _D3DKMT_PRESENT *v11; // rdi
  D3DKMT_HANDLE v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  DXGADAPTER **v15; // rcx
  __int64 Value; // rcx
  const RECT **p_pSrcSubRects; // r15
  unsigned int *p_SubRectCnt; // r14
  D3DKMT_HANDLE hDestination; // ebx
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // rcx
  struct DXGALLOCATION *v25; // rdx
  __int64 v26; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rcx
  struct DXGALLOCATION *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v38; // rdx
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v43; // eax
  COREDEVICEACCESS *v44; // r12
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct DXGPRESENTMUTEX *v48; // r8
  char v49; // r12
  __int64 v50; // r13
  int v51; // ebx
  DXGADAPTER **v52; // r13
  int updated; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int CurrentOrientation; // eax
  UINT v58; // eax
  UINT i; // r14d
  const RECT *v60; // rcx
  const RECT *v61; // rcx
  const GUID *v62; // r8
  const RECT *pDstSubRects; // r15
  UINT SubRectCnt; // r14d
  struct _VIDMM_DMA_BUFFER *v65; // r12
  UINT v66; // ebx
  __int64 v67; // rdx
  unsigned int v68; // r10d
  unsigned int v69; // r9d
  __int64 v70; // rcx
  struct COREDEVICEACCESS *v71; // r14
  __int64 v72; // rcx
  struct DXGGLOBAL *v73; // rax
  char *v74; // rsi
  DXGPRESENT *v76; // rax
  __int64 v77; // rcx
  DXGPRESENT *v78; // rax
  __int64 v79; // rdx
  __int64 (__fastcall *v80)(__int64, __int64, __int64, char *); // rax
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  const RECT *DdiSubRectList; // r14
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  const struct tagRECT *ContentRect; // rbx
  __int64 left; // rcx
  __int64 v108; // rax
  LONG top; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  const struct tagRECT *v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rax
  UINT v115; // r12d
  int v116; // r13d
  int v117; // esi
  __int64 v118; // rbx
  LONG v119; // r8d
  LONG v120; // edx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  LONG v124; // eax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  _QWORD *v135; // rax
  struct DXGCONTEXT **v136; // [rsp+20h] [rbp-100h]
  union _LARGE_INTEGER *v137; // [rsp+28h] [rbp-F8h]
  struct _VIDMM_DMA_BUFFER *v138; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v139; // [rsp+A8h] [rbp-78h]
  ADAPTER_DISPLAY *v140; // [rsp+B0h] [rbp-70h]
  struct VIDSCH_SUBMIT_DATA_BASE *v141[2]; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v142; // [rsp+C8h] [rbp-58h] BYREF
  union _LARGE_INTEGER v143; // [rsp+D0h] [rbp-50h] BYREF
  COREDEVICEACCESS *v144; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v145; // [rsp+E0h] [rbp-40h]
  struct DXGHWQUEUE *v146; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v147; // [rsp+F0h] [rbp-30h]
  DXGCONTEXT *v148; // [rsp+F8h] [rbp-28h]
  _BYTE v149[24]; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v150[24]; // [rsp+118h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v151; // [rsp+130h] [rbp+10h] BYREF
  _BYTE v153[64]; // [rsp+1E0h] [rbp+C0h] BYREF
  _BYTE v154[64]; // [rsp+220h] [rbp+100h] BYREF
  _BYTE v155[64]; // [rsp+260h] [rbp+140h] BYREF
  _BYTE v156[64]; // [rsp+2A0h] [rbp+180h] BYREF

  v6 = a3;
  v145 = a5;
  v8 = this;
  v143.QuadPart = (LONGLONG)a6;
  v144 = a4;
  v139 = a3;
  v148 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v10 = (char *)Global + 800;
  ++*((_DWORD *)Global + 205);
  v11 = (struct _D3DKMT_PRESENT *)ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 50);
  if ( !v11 )
  {
    v79 = *((unsigned int *)v10 + 11);
    v80 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v10 + 6);
    v81 = *((unsigned int *)v10 + 10);
    v82 = *((unsigned int *)v10 + 9);
    ++*((_DWORD *)v10 + 6);
    v11 = (struct _D3DKMT_PRESENT *)v80(v82, v79, v81, v10);
    if ( !v11 )
    {
      v84 = WdLogNewEntry5_WdLowResource(v83);
      *(_QWORD *)(v84 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v84);
      return 3221225495LL;
    }
  }
  memset(v11, 0, 0x5F8uLL);
  memmove(v11, &a2->PrivatePresentData, 0x5D8uLL);
  v11[1].hWindow = (HWND)&v146;
  if ( a2->hHwQueues )
    v12 = *a2->hHwQueues;
  else
    v12 = 0;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v150,
    v12,
    *(struct DXGPROCESS **)(*((_QWORD *)v8 + 2) + 40LL),
    &v146,
    1);
  v13 = *((_QWORD *)v8 + 2);
  v14 = *(_QWORD *)(v13 + 1728);
  v147 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 104LL);
  v15 = *(DXGADAPTER ***)(v14 + 2520);
  v140 = (ADAPTER_DISPLAY *)v15;
  if ( !v15 || !DXGADAPTER::IsCoreResourceSharedOwner(v15[2]) )
  {
    v85 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v85 + 24) = 6219LL;
    WdLogEvent5_WdAssertion(v85);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL)) )
  {
    v86 = WdLogNewEntry5_WdAssertion(Value);
    *(_QWORD *)(v86 + 24) = 6220LL;
    WdLogEvent5_WdAssertion(v86);
  }
  p_pSrcSubRects = &v11->pSrcSubRects;
  if ( !v11->pSrcSubRects
    || (p_SubRectCnt = &v11->SubRectCnt, !v11->SubRectCnt)
    || (Value = v11->Flags.Value, (((unsigned __int8)Value ^ (unsigned __int8)(v11->Flags.Value >> 1)) & 1) == 0)
    || (Value & 0x63C) != 0 )
  {
    v135 = (_QWORD *)WdLogNewEntry5_WdError(Value);
    LODWORD(v42) = -1073741811;
    v135[3] = -1073741811LL;
    v135[4] = v8;
    v135[5] = *p_pSrcSubRects;
    v135[6] = v11->SubRectCnt;
    v135[7] = v11->Flags.Value;
    WdLogEvent5_WdError(v135);
    goto LABEL_84;
  }
  memset(&v151, 0, sizeof(v151));
  hDestination = v11->hDestination;
  v20 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 208));
  v21 = (hDestination >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 < *(_DWORD *)(v20 + 248) )
  {
    v22 = *(_QWORD *)(v20 + 232);
    v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
    if ( ((hDestination >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
      && (v23 & 0x2000) == 0
      && (v23 & 0x1F) != 0 )
    {
      v24 = v23 & 0x1F;
      if ( (_BYTE)v24 == 5 )
      {
        v25 = *(struct DXGALLOCATION **)(v22 + 16LL * (unsigned int)v21);
        goto LABEL_18;
      }
      v87 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v87 + 24) = 316LL;
      WdLogEvent5_WdError(v87);
    }
  }
  v25 = 0LL;
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v142, v25);
  ExReleasePushLockSharedEx(v20 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v142 )
  {
    v88 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    LODWORD(v42) = -1073741811;
    v88[3] = -1073741811LL;
    v88[4] = v8;
    v88[5] = *p_pSrcSubRects;
    v88[6] = *p_SubRectCnt;
    v88[7] = v11->hDestination;
    WdLogEvent5_WdError(v88);
    goto LABEL_83;
  }
  if ( (v11->Flags.Value & 1) != 0 )
  {
    hSource = v11->hSource;
    v28 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 40LL);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v28 + 208));
    v29 = (hSource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v28 + 248) )
    {
      v30 = *(_QWORD *)(v28 + 232);
      v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
      if ( ((hSource >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        v32 = v31 & 0x1F;
        if ( (_BYTE)v32 == 5 )
        {
          v33 = *(struct DXGALLOCATION **)(v30 + 16LL * (unsigned int)v29);
LABEL_26:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v141, v33);
          ExReleasePushLockSharedEx(v28 + 208, 0LL);
          KeLeaveCriticalRegion();
          if ( !v141[0] )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdError(v34);
            LODWORD(v42) = -1073741811;
            v90[3] = -1073741811LL;
            v90[4] = v8;
            v90[5] = v11->hSource;
            WdLogEvent5_WdError(v90);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v141);
            goto LABEL_83;
          }
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v141);
          goto LABEL_28;
        }
        v89 = WdLogNewEntry5_WdError(v32);
        *(_QWORD *)(v89 + 24) = 316LL;
        WdLogEvent5_WdError(v89);
      }
    }
    v33 = 0LL;
    goto LABEL_26;
  }
LABEL_28:
  if ( !*((_QWORD *)v8 + 19) )
  {
    v76 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    v78 = v76 ? DXGPRESENT::DXGPRESENT(v76, 1u) : 0LL;
    *((_QWORD *)v8 + 19) = v78;
    if ( !v78 )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdLowResource(v77);
      v91[3] = -1073741801LL;
      v91[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 16LL);
      v91[5] = *(_QWORD *)(*((_QWORD *)v8 + 2) + 40LL);
      v91[6] = v8;
      WdLogEvent5_WdLowResource(v91);
      LODWORD(v42) = -1073741801;
      goto LABEL_83;
    }
  }
  v35 = *((_QWORD *)v8 + 2);
  v141[0] = 0LL;
  v141[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(v35 + 16);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v141);
  v38 = v141[0];
  if ( !v141[0] )
  {
    v92 = WdLogNewEntry5_WdLowResource(v36);
    *(_QWORD *)(v92 + 24) = 6284LL;
    WdLogEvent5_WdLowResource(v92);
    LODWORD(v42) = -1073741801;
    goto LABEL_82;
  }
  v39 = *(_DWORD *)v141[0] | 0x10000;
  *(_DWORD *)v141[0] = v39;
  if ( (v11->Flags.Value & 0x4000) == 0 )
  {
    v39 |= 1u;
    *(_DWORD *)v38 = v39;
  }
  *(_DWORD *)v38 = v39 | 0x100;
  LOBYTE(v37) = 1;
  v40 = *((_QWORD *)v8 + 2);
  v138 = 0LL;
  LODWORD(v42) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct _VIDMM_DMA_BUFFER **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 16) + 544LL) + 8LL)
                                                                                                 + 488LL))(
                   *((_QWORD *)v8 + 29),
                   0LL,
                   v37,
                   &v138);
  if ( (int)v42 < 0 )
    goto LABEL_82;
  if ( !v138 )
  {
    v93 = WdLogNewEntry5_WdAssertion(v41);
    *(_QWORD *)(v93 + 24) = 6302LL;
    WdLogEvent5_WdAssertion(v93);
  }
  DXGPRESENTMUTEX::DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v149, *(struct _KTHREAD ***)(*((_QWORD *)v8 + 2) + 16LL));
  v43 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v11->Flags.Value;
  if ( (*(_WORD *)&v43 & 0x4000) == 0 )
  {
    v44 = v144;
    COREDEVICEACCESS::Release(v144);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v145);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v149);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v145);
    v45 = COREDEVICEACCESS::AcquireShared(v44);
    v42 = v45;
    if ( v45 < 0 )
    {
      v94 = WdLogNewEntry5_WdEvent(v47, v46);
      *(_QWORD *)(v94 + 24) = v42;
      *(_QWORD *)(v94 + 32) = v8;
      WdLogEvent5_WdEvent(v94);
      COREDEVICEACCESS::AcquireSharedUncheck(v44);
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v138,
        0LL);
      goto LABEL_81;
    }
    v49 = 0;
    v50 = v147;
    if ( v147 )
    {
      v51 = *(_DWORD *)(*((_QWORD *)v8 + 19) + 8LL);
      if ( v51 != (*(unsigned int (**)(void))(v147 + 8))() )
      {
        *(_DWORD *)(*((_QWORD *)v8 + 19) + 8LL) = (*(__int64 (**)(void))(v50 + 8))();
        DXGDEVICE::FlushScheduler(*((_QWORD **)v8 + 2), 2u);
        v49 = 1;
      }
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v8 + 2), v8, v48, v49);
    v43 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v11->Flags.Value;
    v6 = v139;
  }
  if ( (*(_BYTE *)&v43 & 1) == 0 || v11->hSource == v11->hDestination )
  {
    v52 = (DXGADAPTER **)v140;
    goto LABEL_46;
  }
  v52 = (DXGADAPTER **)v140;
  if ( (*(_DWORD *)(*(_QWORD *)(v142 + 48) + 4LL) & 2) == 0 )
    goto LABEL_46;
  updated = DxgkCddUpdatePresentRects((DXGADAPTER **)v140, v6, (struct tagRECT **)&v11->pSrcSubRects, &v11->SubRectCnt);
  v42 = updated;
  if ( updated < 0 )
  {
    v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54);
    v95[3] = v42;
    v95[4] = *((_QWORD *)v8 + 2);
    v95[5] = v6;
    goto LABEL_111;
  }
  LODWORD(v42) = 0;
  if ( *p_SubRectCnt )
  {
LABEL_46:
    LODWORD(v42) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v8 + 19), *p_SubRectCnt);
    if ( (int)v42 < 0 )
    {
LABEL_112:
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL)
                                                                                         + 544LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        v138,
        0LL);
      v138 = 0LL;
      goto LABEL_81;
    }
    v151.DstRect = v11->DstRect;
    v151.SubRectCnt = *p_SubRectCnt;
    v56 = v11->Flags.Value;
    if ( (v56 & 0x4000) != 0 )
    {
      v58 = v151.Flags.Value;
    }
    else
    {
      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v52, v6, 1);
      v58 = (CurrentOrientation != 1 ? 0x80 : 0) | v151.Flags.Value & 0xFFFFFF7F;
      v151.Flags.Value = v58;
      v56 = v11->Flags.Value;
    }
    if ( (v56 & 1) == 0 )
    {
      if ( (v56 & 2) == 0 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v56);
        *(_QWORD *)(v134 + 24) = 6505LL;
        WdLogEvent5_WdAssertion(v134);
        v58 = v151.Flags.Value;
      }
      v151.Flags.Value = v58 | 2;
      v151.Color = v11->Color;
      v151.pDstSubRects = *p_pSrcSubRects;
      goto LABEL_67;
    }
    v151.Flags.Value = v58 | 1;
    v151.SrcRect = v11->SrcRect;
    if ( v11->hSource != v11->hDestination )
    {
      v151.pDstSubRects = *p_pSrcSubRects;
LABEL_52:
      for ( i = 0; i < v151.SubRectCnt; ++i )
      {
        v60 = *p_pSrcSubRects;
        if ( (*p_pSrcSubRects)[i].left >= (*p_pSrcSubRects)[i].right )
        {
          v128 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v128 + 24) = 6489LL;
          WdLogEvent5_WdAssertion(v128);
          v60 = *p_pSrcSubRects;
        }
        if ( v60[i].top >= v60[i].bottom )
        {
          v129 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v129 + 24) = 6490LL;
          WdLogEvent5_WdAssertion(v129);
        }
        if ( (v11->Flags.Value & 0x4000) == 0 )
        {
          v61 = *p_pSrcSubRects;
          if ( (*p_pSrcSubRects)[i].left < v151.SrcRect.left )
          {
            v130 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v130 + 24) = 6495LL;
            WdLogEvent5_WdAssertion(v130);
            v61 = *p_pSrcSubRects;
          }
          if ( v61[i].right > v151.SrcRect.right )
          {
            v131 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v131 + 24) = 6496LL;
            WdLogEvent5_WdAssertion(v131);
            v61 = *p_pSrcSubRects;
          }
          if ( v61[i].top < v151.SrcRect.top )
          {
            v132 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v132 + 24) = 6497LL;
            WdLogEvent5_WdAssertion(v132);
            v61 = *p_pSrcSubRects;
          }
          if ( v61[i].bottom > v151.SrcRect.bottom )
          {
            v133 = WdLogNewEntry5_WdAssertion(v61);
            *(_QWORD *)(v133 + 24) = 6498LL;
            WdLogEvent5_WdAssertion(v133);
          }
        }
      }
LABEL_67:
      if ( bTracingEnabled )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 544LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 552LL),
          v11->hDestination);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 544LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) + 552LL),
          v11->hSource);
        pDstSubRects = v151.pDstSubRects;
        SubRectCnt = v151.SubRectCnt;
        v65 = v138;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          McTemplateK0ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v151.DstRect.left),
            HIDWORD(*(_QWORD *)&v151.DstRect.right),
            (const GUID *)HIDWORD(*(_QWORD *)&v151.SrcRect.left),
            0LL,
            v138);
        v66 = 0;
        if ( SubRectCnt )
        {
          while ( 1 )
          {
            v67 = SubRectCnt - v66;
            if ( (unsigned int)v67 > 0x10 )
              break;
            v68 = SubRectCnt - v66;
            if ( (_DWORD)v67 )
              goto LABEL_73;
LABEL_75:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v137) = v68;
              LODWORD(v136) = SubRectCnt - v66 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2((__int64)v156, v67, v62, v65, v136, v137, v156, v155, v154, v153);
            }
            v66 += 16;
            if ( v66 >= SubRectCnt )
              goto LABEL_78;
          }
          v68 = 16;
LABEL_73:
          v62 = 0LL;
          v69 = 0;
          do
          {
            v70 = v69 + v66;
            ++v69;
            v70 *= 2LL;
            v62 = (const GUID *)((char *)v62 + 4);
            *(_DWORD *)&v155[(_QWORD)v62 + 60] = *(&pDstSubRects->left + 2 * v70);
            *(_DWORD *)&v154[(_QWORD)v62 + 60] = *(&pDstSubRects->right + 2 * v70);
            *(_DWORD *)&v153[(_QWORD)v62 + 60] = *(&pDstSubRects->top + 2 * v70);
            *(_DWORD *)&v153[(_QWORD)v62 - 4] = *(&pDstSubRects->bottom + 2 * v70);
          }
          while ( v69 < v68 );
          goto LABEL_75;
        }
      }
LABEL_78:
      v71 = v144;
      LODWORD(v42) = DXGCONTEXT::SubmitPresent(
                       v8,
                       v11,
                       (const struct DXGK_PRESENT_PARAMS *)v11,
                       v11->BroadcastContextCount,
                       (struct DXGCONTEXT **)v143.QuadPart,
                       0LL,
                       v11->hSource,
                       v11->hDestination,
                       &v151,
                       0LL,
                       v138,
                       v141[0],
                       D3DDDIFMT_A8B8G8R8,
                       v144);
      if ( (int)v42 >= 0 && v11->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_GDI )
      {
        v143.QuadPart = -100000LL;
        LODWORD(v42) = SubmitPresentHistoryToken(&v11->PresentHistoryToken, v71, v145, 0LL, 0, &v143, 0LL, 0LL, v8, 0LL);
      }
      goto LABEL_81;
    }
    if ( (v11->Flags.Value & 0x4000) != 0 || !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v52, v6) )
    {
      DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v8 + 19), 0);
      v100 = (unsigned int)(v151.DstRect.right - v151.DstRect.left);
      v151.pDstSubRects = DdiSubRectList;
      if ( (_DWORD)v100 != v151.SrcRect.right - v151.SrcRect.left )
      {
        v101 = WdLogNewEntry5_WdAssertion(v100);
        *(_QWORD *)(v101 + 24) = 6450LL;
        WdLogEvent5_WdAssertion(v101);
      }
      v102 = (unsigned int)(v151.SrcRect.bottom - v151.SrcRect.top);
      if ( v151.DstRect.bottom - v151.DstRect.top != (_DWORD)v102 )
      {
        v103 = WdLogNewEntry5_WdAssertion(v102);
        *(_QWORD *)(v103 + 24) = 6453LL;
        WdLogEvent5_WdAssertion(v103);
      }
      if ( v151.SrcRect.left >= v151.SrcRect.right )
      {
        v104 = WdLogNewEntry5_WdAssertion(v102);
        *(_QWORD *)(v104 + 24) = 6455LL;
        WdLogEvent5_WdAssertion(v104);
      }
      if ( v151.SrcRect.left < 0 )
      {
        v105 = WdLogNewEntry5_WdAssertion(v102);
        *(_QWORD *)(v105 + 24) = 6456LL;
        WdLogEvent5_WdAssertion(v105);
      }
      ContentRect = ADAPTER_DISPLAY::GetContentRect(v52, v6);
      left = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v52, v6)->left;
      if ( v151.SrcRect.right > ContentRect->right - (int)left )
      {
        v108 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v108 + 24) = 6457LL;
        WdLogEvent5_WdAssertion(v108);
      }
      top = v151.DstRect.top;
      if ( v151.DstRect.top >= v151.DstRect.bottom )
      {
        v110 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v110 + 24) = 6459LL;
        WdLogEvent5_WdAssertion(v110);
        top = v151.DstRect.top;
      }
      if ( top < 0 )
      {
        v111 = WdLogNewEntry5_WdAssertion(left);
        *(_QWORD *)(v111 + 24) = 6460LL;
        WdLogEvent5_WdAssertion(v111);
      }
      v112 = ADAPTER_DISPLAY::GetContentRect(v52, v6);
      v113 = (unsigned int)ADAPTER_DISPLAY::GetContentRect(v52, v6)->top;
      if ( v151.SrcRect.bottom > v112->bottom - (int)v113 )
      {
        v114 = WdLogNewEntry5_WdAssertion(v113);
        *(_QWORD *)(v114 + 24) = 6461LL;
        WdLogEvent5_WdAssertion(v114);
      }
      v115 = 0;
      v116 = v151.DstRect.left - v151.SrcRect.left;
      if ( v151.SubRectCnt )
      {
        v117 = v151.DstRect.top - v151.SrcRect.top;
        do
        {
          v118 = v115;
          v119 = v116 + (*p_pSrcSubRects)[v115].left;
          DdiSubRectList[v118].left = v119;
          v120 = v116 + (*p_pSrcSubRects)[v115].right;
          DdiSubRectList[v118].right = v120;
          DdiSubRectList[v118].top = v117 + (*p_pSrcSubRects)[v115].top;
          DdiSubRectList[v118].bottom = v117 + (*p_pSrcSubRects)[v115].bottom;
          if ( v119 >= v120 )
          {
            v121 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v121 + 24) = 6473LL;
            WdLogEvent5_WdAssertion(v121);
            v119 = DdiSubRectList[v115].left;
          }
          if ( v119 < v151.DstRect.left )
          {
            v122 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v122 + 24) = 6474LL;
            WdLogEvent5_WdAssertion(v122);
          }
          if ( DdiSubRectList[v115].right > v151.DstRect.right )
          {
            v123 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v123 + 24) = 6475LL;
            WdLogEvent5_WdAssertion(v123);
          }
          v124 = DdiSubRectList[v115].top;
          if ( v124 >= DdiSubRectList[v115].bottom )
          {
            v125 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v125 + 24) = 6476LL;
            WdLogEvent5_WdAssertion(v125);
            v124 = DdiSubRectList[v115].top;
          }
          if ( v124 < v151.DstRect.top )
          {
            v126 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v126 + 24) = 6477LL;
            WdLogEvent5_WdAssertion(v126);
          }
          if ( DdiSubRectList[v115].bottom > v151.DstRect.bottom )
          {
            v127 = WdLogNewEntry5_WdAssertion(v113);
            *(_QWORD *)(v127 + 24) = 6478LL;
            WdLogEvent5_WdAssertion(v127);
          }
          ++v115;
        }
        while ( v115 < v151.SubRectCnt );
        v8 = v148;
      }
      goto LABEL_52;
    }
    v95 = (_QWORD *)WdLogNewEntry5_WdEvent(v98, v97);
    LODWORD(v42) = -1071774910;
    v95[3] = -1071774910LL;
    v95[4] = *((_QWORD *)v8 + 2);
    v95[5] = v11->hDestination;
    v95[6] = v6;
LABEL_111:
    WdLogEvent5_WdEvent(v95);
    goto LABEL_112;
  }
  v96 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54);
  v96[3] = 0LL;
  v96[4] = *((_QWORD *)v8 + 2);
  v96[5] = v11->hDestination;
  v96[6] = v6;
  WdLogEvent5_WdEvent(v96);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                         + 8LL)
                                                             + 496LL))(
    v138,
    0LL);
  v138 = 0LL;
LABEL_81:
  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v149);
LABEL_82:
  CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v141);
LABEL_83:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v142);
LABEL_84:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v150);
  v73 = DXGGLOBAL::GetGlobal(v72);
  v74 = (char *)v73 + 800;
  ++*((_DWORD *)v73 + 207);
  if ( ExQueryDepthSList((PSLIST_HEADER)v73 + 50) >= *((_WORD *)v73 + 408) )
  {
    ++*((_DWORD *)v74 + 8);
    (*((void (__fastcall **)(struct _D3DKMT_PRESENT *, char *))v74 + 7))(v11, v74);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v74, (PSLIST_ENTRY)v11);
  }
  return (unsigned int)v42;
}
