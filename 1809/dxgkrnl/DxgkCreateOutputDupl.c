/*
 * XREFs of DxgkCreateOutputDupl @ 0x1C023FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGUSERCRIT@@QEAAXXZ @ 0x1C001322C (-Release@DXGUSERCRIT@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00EDA28 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C023C794 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C023C8AC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C023CB8C (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C023EC74 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDupl(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        const GUID *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD **v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER **v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  struct DXGADAPTER *v22; // r12
  struct DXGADAPTER *v23; // r13
  struct DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  int OutputDuplManager; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  OUTPUTDUPL_MGR *v30; // rsi
  DXGSESSIONMGR *v31; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v34; // rax
  __int64 v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rax
  UINT KeyedMutexCount; // eax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  bool v44; // zf
  __int64 v45; // rax
  int OutputDuplication; // eax
  struct DXGPROCESS *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rcx
  const GUID *v50; // r8
  _BYTE v52[8]; // [rsp+40h] [rbp-89h] BYREF
  DXGPUSHLOCK *v53; // [rsp+48h] [rbp-81h]
  int v54; // [rsp+50h] [rbp-79h]
  struct DXGADAPTER *v55; // [rsp+58h] [rbp-71h] BYREF
  OUTPUTDUPL_MGR *v56; // [rsp+60h] [rbp-69h] BYREF
  struct DXGPROCESS *Current; // [rsp+68h] [rbp-61h]
  int v58; // [rsp+70h] [rbp-59h] BYREF
  __int64 v59; // [rsp+78h] [rbp-51h]
  char v60; // [rsp+80h] [rbp-49h]
  unsigned __int64 v61; // [rsp+88h] [rbp-41h] BYREF
  DXGADAPTER *v62; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v63[8]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v64[32]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v65[88]; // [rsp+C8h] [rbp-1h] BYREF
  int v66; // [rsp+130h] [rbp+67h] BYREF
  struct DXGADAPTER *v67; // [rsp+140h] [rbp+77h] BYREF
  struct DXGADAPTER *v68; // [rsp+148h] [rbp+7Fh] BYREF

  v58 = -1;
  v59 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v60 = 1;
    v58 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3140LL;
    WdLogEvent5_WdAssertion(v6);
  }
  Current = DXGPROCESS::GetCurrent();
  v8 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 3145LL;
    WdLogEvent5_WdError(v9);
    LODWORD(v10) = -1073741811;
    goto LABEL_63;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 3152LL;
    WdLogEvent5_WdError(v12);
    LODWORD(v10) = -1073741790;
    goto LABEL_63;
  }
  v13 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ (32
                                        * (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 13)
                                                                                           + 224LL))(
                                            &v66,
                                            0LL,
                                            0LL))) & 0x20;
  *(_DWORD *)a2 = v13;
  if ( !v66 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = 3163LL;
    WdLogEvent5_WdError(v15);
    LODWORD(v10) = -2147483611;
    goto LABEL_63;
  }
  hAdapter = a1->hAdapter;
  v17 = &v67;
  v67 = 0LL;
  if ( (v13 & 0x20) != 0 )
    v17 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v62, hAdapter, v8, v17, 1);
  v61 = -1LL;
  LODWORD(v10) = 0;
  v21 = *(_DWORD *)a2;
  v22 = 0LL;
  v68 = 0LL;
  v23 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( (v21 & 0x20) == 0 )
  {
    v24 = v67;
    if ( !v67 )
    {
      v25 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      v10 = -1073741811LL;
      *(_QWORD *)(v25 + 24) = a1->hAdapter;
LABEL_20:
      *(_QWORD *)(v25 + 32) = v10;
      WdLogEvent5_WdWarning(v25);
      goto LABEL_61;
    }
    OutputDuplManager = FindOutputDuplManager(v67, a1->VidPnSourceId, &v68, (unsigned __int64 *)&v67, &v55, &v61, &v56);
    v10 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v25 + 24) = v24;
      goto LABEL_20;
    }
    v22 = v68;
    v23 = v55;
    v30 = v56;
    goto LABEL_35;
  }
  v31 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v19) + 77);
  if ( v31 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v28);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v31, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v34 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v34 + 24) = 3210LL;
LABEL_29:
    WdLogEvent5_WdError(v34);
    LODWORD(v10) = -1073741801;
    goto LABEL_61;
  }
  v35 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v35 )
  {
    v34 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v34 + 24) = 3217LL;
    goto LABEL_29;
  }
  v30 = *(OUTPUTDUPL_MGR **)(v35 + 40);
  if ( !v30 )
  {
    v36 = (*(__int64 (**)(void))(*((_QWORD *)Current + 13) + 336LL))();
    v37 = v36;
    LODWORD(v10) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v35, v36);
    if ( (int)v10 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v38 + 24) = v37;
      WdLogEvent5_WdError(v38);
      goto LABEL_61;
    }
    v30 = *(OUTPUTDUPL_MGR **)(v35 + 40);
  }
  v8 = (struct _KTHREAD **)Current;
LABEL_35:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v40 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v40 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v40);
      LODWORD(v10) = -1073741811;
      goto LABEL_61;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v22, v23);
  if ( (*(_DWORD *)a2 & 0x20) != 0
    || (DXGADAPTER::ReleaseReference(v22),
        DXGADAPTER::ReleaseReference(v23),
        LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63),
        (int)v10 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v30 + 13) )
    {
      v42 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v42 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v42);
      LODWORD(v10) = -1071774972;
      goto LABEL_46;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52, *((struct _KTHREAD ***)v30 + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v53);
    v44 = *((_DWORD *)v30 + 12) == 0;
    v54 = 2;
    if ( v44 )
    {
      v45 = WdLogNewEntry5_WdError(v43);
      *(_QWORD *)(v45 + 24) = 3285LL;
      WdLogEvent5_WdError(v45);
      LODWORD(v10) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
      goto LABEL_46;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_53;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v30, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v30, a1, a2);
    }
    LODWORD(v10) = OutputDuplication;
LABEL_53:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
    COREACCESS::~COREACCESS((COREACCESS *)v65);
    COREACCESS::~COREACCESS((COREACCESS *)v64);
    if ( (int)v10 >= 0 && (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x10) == 0 )
    {
      v47 = DXGPROCESS::GetCurrent();
      v48 = v47 ? *((_QWORD *)v47 + 13) : 0LL;
      v53 = (DXGPUSHLOCK *)v8;
      LOBYTE(v54) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v52, 1u);
      (*(void (**)(void))(v48 + 192))();
      if ( (_BYTE)v54 )
        DXGUSERCRIT::Release((DXGUSERCRIT *)v52);
    }
    goto LABEL_61;
  }
LABEL_46:
  COREACCESS::~COREACCESS((COREACCESS *)v65);
  COREACCESS::~COREACCESS((COREACCESS *)v64);
LABEL_61:
  if ( v62 )
    DXGADAPTER::ReleaseReference(v62);
LABEL_63:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v49, &EventProfilerExit, v50, v58);
  return (unsigned int)v10;
}
