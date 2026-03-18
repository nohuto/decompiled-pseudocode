/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271A10
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C0275270 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D51B8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02713EC (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271504 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C02717E4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C0273F6C (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct _KTHREAD **v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 hAdapter; // rdx
  struct DXGADAPTER **v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  struct DXGADAPTER *v30; // r12
  struct DXGADAPTER *v31; // r13
  struct DXGADAPTER *v32; // rsi
  __int64 v33; // rax
  int OutputDuplManager; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  OUTPUTDUPL_MGR *v38; // rsi
  DXGSESSIONMGR *v39; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v42; // rax
  __int64 v43; // r15
  unsigned int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // rax
  UINT KeyedMutexCount; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  bool v56; // zf
  __int64 v57; // rax
  int OutputDuplication; // eax
  __int64 v59; // rcx
  struct DXGPROCESS *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rcx
  const GUID *v63; // r8
  int v65; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v66; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 Current; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v68[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+68h] [rbp-98h]
  struct DXGADAPTER *v71; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v72; // [rsp+78h] [rbp-88h] BYREF
  OUTPUTDUPL_MGR *v73; // [rsp+80h] [rbp-80h] BYREF
  int v74; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+90h] [rbp-70h]
  char v76; // [rsp+98h] [rbp-68h]
  DXGADAPTER *v77; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v78[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v79[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v80[72]; // [rsp+F8h] [rbp-8h] BYREF

  v74 = -1;
  v75 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v76 = 1;
    v74 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v76 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v74, 2061LL);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 3172LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v6, v5);
  v11 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = 3177LL;
    WdLogEvent5_WdError(v12);
    LODWORD(v14) = -1073741811;
    goto LABEL_62;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = 3184LL;
    WdLogEvent5_WdError(v18);
    LODWORD(v14) = -1073741790;
    goto LABEL_62;
  }
  v19 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ (32
                                        * (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(Current + 96)
                                                                                           + 224LL))(
                                            &v65,
                                            0LL,
                                            0LL))) & 0x20;
  *(_DWORD *)a2 = v19;
  if ( !v65 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = 3195LL;
    WdLogEvent5_WdError(v23);
    LODWORD(v14) = -2147483611;
    goto LABEL_62;
  }
  hAdapter = a1->hAdapter;
  v25 = &v66;
  v66 = 0LL;
  if ( (v19 & 0x20) != 0 )
    v25 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v77, hAdapter, v11, v25, 1);
  v29 = *(_DWORD *)a2;
  LODWORD(v14) = 0;
  v71 = 0LL;
  v30 = 0LL;
  v72 = 0LL;
  v31 = 0LL;
  v73 = 0LL;
  if ( (v29 & 0x20) == 0 )
  {
    v32 = v66;
    if ( !v66 )
    {
      v33 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      v14 = -1073741811LL;
      *(_QWORD *)(v33 + 24) = a1->hAdapter;
LABEL_20:
      *(_QWORD *)(v33 + 32) = v14;
      WdLogEvent5_WdWarning(v33);
      goto LABEL_60;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v66,
                          a1->VidPnSourceId,
                          &v71,
                          (unsigned __int64 *)&v66,
                          &v72,
                          &Current,
                          &v73);
    v14 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v33 + 24) = v32;
      goto LABEL_20;
    }
    v30 = v71;
    v31 = v72;
    v38 = v73;
    goto LABEL_35;
  }
  v39 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 74);
  if ( v39 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v36, v35);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v39, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v42 = WdLogNewEntry5_WdError(v36, v35, v37);
    *(_QWORD *)(v42 + 24) = 3242LL;
LABEL_29:
    WdLogEvent5_WdError(v42);
    LODWORD(v14) = -1073741801;
    goto LABEL_60;
  }
  v43 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v43 )
  {
    v42 = WdLogNewEntry5_WdError(v36, v35, v37);
    *(_QWORD *)(v42 + 24) = 3249LL;
    goto LABEL_29;
  }
  v38 = *(OUTPUTDUPL_MGR **)(v43 + 40);
  if ( !v38 )
  {
    v44 = (*(__int64 (**)(void))(*(_QWORD *)(Current + 96) + 328LL))();
    v45 = v44;
    LODWORD(v14) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v43, v44);
    if ( (int)v14 < 0 )
    {
      v46 = WdLogNewEntry5_WdError(v36, v35, v37);
      *(_QWORD *)(v46 + 24) = v45;
      WdLogEvent5_WdError(v46);
      goto LABEL_60;
    }
    v38 = *(OUTPUTDUPL_MGR **)(v43 + 40);
  }
  v11 = (struct _KTHREAD **)Current;
LABEL_35:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v48 = WdLogNewEntry5_WdError(v36, v35, v37);
      *(_QWORD *)(v48 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v48);
      LODWORD(v14) = -1073741811;
      goto LABEL_60;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v78, v30, v31);
  v51 = *(unsigned int *)a2;
  if ( (v51 & 0x20) != 0
    || (DXGADAPTER::ReleaseReferenceNoTracking(v30),
        DXGADAPTER::ReleaseReferenceNoTracking(v31),
        LODWORD(v14) = COREADAPTERACCESS::AcquireShared((__int64)v78, 0xFFFFFFFFLL, 0LL),
        (int)v14 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v38 + 13) )
    {
      v52 = WdLogNewEntry5_WdError(v50, v49, v51);
      *(_QWORD *)(v52 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v52);
      LODWORD(v14) = -1071774972;
      goto LABEL_46;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68, *((struct _KTHREAD ***)v38 + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v69);
    v56 = *((_DWORD *)v38 + 12) == 0;
    v70 = 2;
    if ( v56 )
    {
      v57 = WdLogNewEntry5_WdError(v54, v53, v55);
      *(_QWORD *)(v57 + 24) = 3317LL;
      WdLogEvent5_WdError(v57);
      LODWORD(v14) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v68);
      goto LABEL_46;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_53;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v38, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v38, a1, a2);
    }
    LODWORD(v14) = OutputDuplication;
LABEL_53:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v68);
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( (int)v14 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
    {
      v60 = DXGPROCESS::GetCurrent(v59, v13);
      v61 = v60 ? *((_QWORD *)v60 + 12) : 0LL;
      v69 = (DXGPUSHLOCK *)v11;
      LOBYTE(v70) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v68, 1u);
      (*(void (**)(void))(v61 + 192))();
      if ( (_BYTE)v70 )
      {
        LOBYTE(v70) = 0;
        (*(void (**)(void))(*((_QWORD *)v69 + 12) + 40LL))();
      }
    }
    goto LABEL_60;
  }
LABEL_46:
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  COREACCESS::~COREACCESS((COREACCESS *)v79);
LABEL_60:
  if ( v77 )
    DXGADAPTER::ReleaseReferenceNoTracking(v77);
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74, v13);
  if ( v76 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v62, &EventProfilerExit, v63, v74);
  return (unsigned int)v14;
}
