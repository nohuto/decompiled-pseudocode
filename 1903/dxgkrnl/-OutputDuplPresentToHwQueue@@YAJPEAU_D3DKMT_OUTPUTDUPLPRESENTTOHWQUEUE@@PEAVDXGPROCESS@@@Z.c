/*
 * XREFs of ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C024844C
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1C024E620 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00040EC (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017688 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00177B0 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D51B8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C020B2F0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C027400C (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02744A0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 */

__int64 __fastcall OutputDuplPresentToHwQueue(struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE *a1, struct _KTHREAD **a2)
{
  int v2; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int OutputDuplManager; // edi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct DXGDEVICE *v13; // rbx
  struct DXGADAPTER **v14; // rax
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGHWQUEUE *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct DXGDEVICE **v28; // r15
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // edi
  _BYTE *PoolWithTag; // rax
  __int64 v34; // r8
  unsigned int v35; // ebx
  __int64 v36; // rax
  struct _KTHREAD *v37; // r9
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  char *v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  struct DXGADAPTER *v58; // rdi
  struct DXGADAPTER **v59; // rbx
  struct DXGADAPTER **v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  struct DXGDEVICE *v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  DXGADAPTER **v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r8
  __int64 v75; // rax
  struct DXGGLOBAL *Global; // rax
  char *v77; // rbx
  PSLIST_ENTRY v78; // rdi
  __int64 v79; // rdx
  __int64 (__fastcall *v80)(__int64, __int64, __int64, char *); // rax
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  int v88; // esi
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct DXGGLOBAL *v91; // rax
  union _SLIST_HEADER *v92; // rbx
  __int64 v93; // rax
  struct DXGHWQUEUE *v95; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v96; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v97; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  _BYTE v99[32]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v100; // [rsp+90h] [rbp-70h]
  DXGADAPTER *v101; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v103[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v104[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-40h]
  char v106; // [rsp+C8h] [rbp-38h]
  PVOID v107; // [rsp+D0h] [rbp-30h] BYREF
  char v108; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v109; // [rsp+F8h] [rbp-8h]
  DXGADAPTER *v110; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v111; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v112[16]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v113[6]; // [rsp+120h] [rbp+20h] BYREF
  char v114; // [rsp+150h] [rbp+50h]
  char v115[8]; // [rsp+160h] [rbp+60h] BYREF
  char v116[64]; // [rsp+168h] [rbp+68h] BYREF
  char v117[88]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = *((_DWORD *)a1 + 14);
  v96 = 0LL;
  if ( (v2 & 8) != 0 )
  {
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103, *((_DWORD *)a1 + 15), a2, &v95, 0);
    if ( !v95 )
    {
      OutputDuplManager = -1073741811;
      v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7);
      v9[3] = -1073741811LL;
      v9[4] = PsGetCurrentProcess(v11, v10);
      v9[5] = *((unsigned int *)a1 + 15);
      WdLogEvent5_WdWarning(v9);
LABEL_6:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103, v12);
      goto LABEL_90;
    }
    v13 = *(struct DXGDEVICE **)(*((_QWORD *)v95 + 2) + 16LL);
    v14 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v96);
    v15 = OutputDuplPreIndirectPresent(v13, *((_DWORD *)a1 + 1), v14, &v97);
    if ( v15 < 0 )
    {
      OutputDuplManager = v15;
      goto LABEL_6;
    }
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v103, v12);
  }
  v16 = *((_DWORD *)a1 + 2);
  v107 = 0LL;
  v109 = 0;
  if ( !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&v107, v16) )
  {
    v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = 2215LL;
    WdLogEvent5_WdWarning(v20);
    OutputDuplManager = -1073741801;
    goto LABEL_86;
  }
  v21 = (unsigned int *)*((_QWORD *)a1 + 2);
  v95 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v112, *v21, a2, &v95, 0);
  v25 = v95;
  if ( !v95 )
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = **((unsigned int **)a1 + 2);
    WdLogEvent5_WdWarning(v26);
    OutputDuplManager = -1073741811;
    goto LABEL_85;
  }
  *(_QWORD *)v107 = v95;
  if ( !v96 )
    DXGADAPTER_REFERENCE::Assign(&v96, *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) + 1728LL));
  v28 = (struct DXGDEVICE **)*((_QWORD *)v25 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v103, v28[2]);
  v32 = *((_DWORD *)a1 + 2);
  P = 0LL;
  v100 = 0;
  if ( v32 <= 4 )
  {
    PoolWithTag = v99;
  }
  else
  {
    v29 = 0xFFFFFFFFFFFFFFFFuLL % v32;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v32 < 8 )
    {
LABEL_79:
      v93 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(_QWORD *)(v93 + 24) = 2244LL;
      WdLogEvent5_WdWarning(v93);
      OutputDuplManager = -1073741801;
      goto LABEL_80;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v32, 0x4B677844u);
  }
  P = PoolWithTag;
  v100 = v32;
  if ( !PoolWithTag )
    goto LABEL_79;
  memset(PoolWithTag, 0, 8LL * v32);
  if ( !P )
    goto LABEL_79;
  *(_QWORD *)P = v28;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v104, a2);
  v35 = 1;
  if ( *((_DWORD *)a1 + 2) <= 1u )
  {
LABEL_47:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v104);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v113,
      P,
      v100);
    if ( v114 )
    {
      if ( v113[0] )
      {
        v56 = WdLogNewEntry5_WdWarning(v50, v49, v51);
        *(_QWORD *)(v56 + 24) = 2310LL;
        WdLogEvent5_WdWarning(v56);
        OutputDuplManager = -1073741811;
      }
      else
      {
        v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
        *(_QWORD *)(v52 + 24) = 2305LL;
        WdLogEvent5_WdWarning(v52);
        OutputDuplManager = -1073741801;
      }
      goto LABEL_78;
    }
    v57 = *((_DWORD *)a1 + 14);
    v110 = 0LL;
    v101 = 0LL;
    if ( (v57 & 2) != 0 )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v50, v49);
    }
    else
    {
      v58 = v96;
      v59 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v101);
      v60 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v110);
      OutputDuplManager = FindOutputDuplManager(v58, *((_DWORD *)a1 + 1), v60, &v111, v59, &v102, &v95);
      if ( OutputDuplManager < 0 )
      {
LABEL_77:
        DXGADAPTER_REFERENCE::Assign(&v101, 0LL);
        DXGADAPTER_REFERENCE::Assign(&v110, 0LL);
LABEL_78:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v113);
        goto LABEL_80;
      }
      RemoteOutputDuplMgr = v95;
    }
    if ( !RemoteOutputDuplMgr )
    {
      v65 = WdLogNewEntry5_WdAssertion(v62, v61);
      *(_QWORD *)(v65 + 24) = 2334LL;
      WdLogEvent5_WdAssertion(v65);
      OutputDuplManager = -1073741275;
      goto LABEL_77;
    }
    if ( *((_DWORD *)a1 + 1) >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v66 = WdLogNewEntry5_WdError(v62, v61, v63);
      *(_QWORD *)(v66 + 24) = *((unsigned int *)a1 + 1);
      WdLogEvent5_WdError(v66);
      OutputDuplManager = -1073741811;
      goto LABEL_77;
    }
    v67 = v28[2];
    v106 = 0;
    v105 = *(_QWORD *)(*((_QWORD *)v67 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v115, (__int64)v28[2], 2, v68, 0);
    OutputDuplManager = COREDEVICEACCESS::AcquireShared((__int64)v115, 0xFFFFFFFF, 0LL);
    if ( OutputDuplManager >= 0 )
    {
      if ( (*((_DWORD *)a1 + 14) & 0xA) != 0 )
        goto LABEL_68;
      v72 = (DXGADAPTER **)*((_QWORD *)v101 + 319);
      if ( !v72 )
      {
        v73 = WdLogNewEntry5_WdError(0LL, v69, v71);
        *(_QWORD *)(v73 + 24) = v101 != 0LL;
        WdLogEvent5_WdError(v73);
        OutputDuplManager = -1073741811;
        goto LABEL_75;
      }
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v72, v28[2], *((_DWORD *)a1 + 1)) )
      {
LABEL_68:
        Global = DXGGLOBAL::GetGlobal(v70, v69);
        v77 = (char *)Global + 768;
        ++*((_DWORD *)Global + 197);
        v78 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
        if ( v78
          || (v79 = *((unsigned int *)v77 + 11),
              v80 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)v77 + 6),
              v81 = *((unsigned int *)v77 + 10),
              v82 = *((unsigned int *)v77 + 9),
              ++*((_DWORD *)v77 + 6),
              (v78 = (PSLIST_ENTRY)v80(v82, v79, v81, v77)) != 0LL) )
        {
          memset(v78, 0, 0x5F8uLL);
          v78[94].Next = (struct _SLIST_ENTRY *)v107;
          v88 = OUTPUTDUPL_MGR::ProcessPresent(
                  RemoteOutputDuplMgr,
                  (struct DXGCONTEXT *)v28,
                  *(struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)((char *)a1 + 56),
                  *(_DWORD *)a1,
                  *((_DWORD *)a1 + 2) - 1,
                  (struct _D3DKMT_PRESENT_RGNS *)((char *)a1 + 24),
                  (const struct DXGK_PRESENT_PARAMS *)v78,
                  *((_DWORD *)a1 + 1),
                  (struct DXGCONTEXT **)P,
                  (struct COREDEVICEACCESS *)v115);
          v91 = DXGGLOBAL::GetGlobal(v90, v89);
          v92 = (union _SLIST_HEADER *)((char *)v91 + 768);
          ++*((_DWORD *)v91 + 199);
          if ( ExQueryDepthSList((PSLIST_HEADER)v91 + 48) < *((_WORD *)v91 + 392) )
          {
            ExpInterlockedPushEntrySList(v92, v78);
          }
          else
          {
            ++LODWORD(v92[2].Alignment);
            ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v92[3].Region)(v78, v92);
          }
          OutputDuplManager = v88;
        }
        else
        {
          v87 = WdLogNewEntry5_WdLowResource(v84, v83, v85, v86);
          OutputDuplManager = -1073741801;
          *(_QWORD *)(v87 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v87);
        }
      }
      else
      {
        v75 = WdLogNewEntry5_WdWarning(v70, v69, v74);
        *(_QWORD *)(v75 + 24) = v28;
        *(_QWORD *)(v75 + 32) = *((unsigned int *)a1 + 1);
        WdLogEvent5_WdWarning(v75);
        OutputDuplManager = -1071775744;
      }
    }
LABEL_75:
    COREACCESS::~COREACCESS((COREACCESS *)v117);
    COREACCESS::~COREACCESS((COREACCESS *)v116);
    if ( v106 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
    goto LABEL_77;
  }
  while ( 1 )
  {
    v36 = (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v35) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v36 >= *((_DWORD *)a2 + 56) )
      goto LABEL_27;
    v37 = a2[26];
    v34 = (unsigned int)v36;
    v38 = *((_DWORD *)v37 + 4 * v36 + 2);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v35) >> 25) & 0x60) != (*((_BYTE *)v37 + 16 * v36 + 8) & 0x60)
      || (v38 & 0x2000) != 0
      || (v38 & 0x1F) == 0 )
    {
      goto LABEL_27;
    }
    v34 = 2LL * (unsigned int)v36;
    v39 = v38 & 0x1F;
    if ( (_BYTE)v39 != 15 )
    {
      v40 = WdLogNewEntry5_WdError(v39, (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * v35) >> 25) & 0x60, v34);
      *(_QWORD *)(v40 + 24) = 267LL;
      WdLogEvent5_WdError(v40);
LABEL_27:
      v41 = 0LL;
      goto LABEL_28;
    }
    v41 = *((_QWORD *)v37 + 2 * (unsigned int)v36);
LABEL_28:
    if ( v35 >= v109 )
      v42 = v107;
    else
      v42 = (char *)v107 + 8 * v35;
    *v42 = v41;
    v43 = (char *)v107;
    v44 = (char *)v107 + 8 * v35;
    if ( v35 >= v109 )
      v44 = v107;
    OutputDuplManager = -1073741811;
    if ( !*v44 )
      break;
    if ( v35 < v109 )
      v43 = (char *)v107 + 8 * v35;
    v45 = *(_QWORD *)(*(_QWORD *)v43 + 16LL);
    if ( v35 >= v100 )
      v46 = P;
    else
      v46 = (char *)P + 8 * v35;
    *v46 = v45;
    v47 = P;
    v48 = (char *)P + 8 * v35;
    if ( v35 >= v100 )
      v48 = P;
    if ( !*v48 )
      goto LABEL_50;
    if ( v35 < v100 )
      v47 = (char *)P + 8 * v35;
    v47 = (_QWORD *)*v47;
    if ( (struct DXGDEVICE *)v47[2] != v28[2] )
    {
LABEL_50:
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v47, v45, v34);
      v53[3] = v28;
      v54 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v35);
      v53[5] = v35;
      v53[4] = v54;
      v53[6] = -1073741811LL;
      goto LABEL_52;
    }
    if ( ++v35 >= *((_DWORD *)a1 + 2) )
      goto LABEL_47;
  }
  v53 = (_QWORD *)WdLogNewEntry5_WdError(v44, v42, v34);
  v55 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4LL * v35);
  v53[4] = v35;
  v53[3] = v55;
LABEL_52:
  WdLogEvent5_WdError(v53);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v104);
LABEL_80:
  if ( P != v99 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v100 = 0;
  if ( v103[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v103);
LABEL_85:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v112, v27);
LABEL_86:
  if ( v107 != &v108 && v107 )
    ExFreePoolWithTag(v107, 0);
  v107 = 0LL;
  v109 = 0;
LABEL_90:
  DXGADAPTER_REFERENCE::Assign(&v96, 0LL);
  return (unsigned int)OutputDuplManager;
}
