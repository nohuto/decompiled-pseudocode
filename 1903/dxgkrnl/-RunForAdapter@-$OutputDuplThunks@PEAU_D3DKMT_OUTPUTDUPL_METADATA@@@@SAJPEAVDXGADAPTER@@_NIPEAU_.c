/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0274E38
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0275024 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D51B8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rdi
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rbx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // edi
  __int64 v27; // rax
  struct OUTPUTDUPL_MGR *v28; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v29; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v30; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v32; // [rsp+60h] [rbp-A0h]
  char v33; // [rsp+68h] [rbp-98h]
  unsigned __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v38[72]; // [rsp+C8h] [rbp-38h] BYREF

  v30 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v8 = a3;
  v29 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
    if ( !RemoteOutputDuplMgr )
    {
      v21 = WdLogNewEntry5_WdError(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = 90LL;
      WdLogEvent5_WdError(v21);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v30, &v35, &v29, &v34, &v28);
  v13 = OutputDuplManager;
  if ( OutputDuplManager < 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = a1;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)v13;
  }
  v5 = v29;
  RemoteOutputDuplMgr = v28;
  if ( !v29 )
  {
LABEL_8:
    v17 = 0;
    goto LABEL_9;
  }
  v17 = 1;
LABEL_9:
  v22 = 0;
  v32 = v5;
  v33 = 0;
  if ( v17 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    v22 = v33;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v5, 0LL);
  if ( !a1
    || (DXGADAPTER::ReleaseReferenceNoTracking(v30),
        DXGADAPTER::ReleaseReferenceNoTracking(v5),
        v26 = COREADAPTERACCESS::AcquireShared((__int64)v36, 0xFFFFFFFFLL, 0LL),
        v26 >= 0) )
  {
    if ( (unsigned int)v8 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v26 = a5(RemoteOutputDuplMgr, a4);
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v24, v23, v25);
      *(_QWORD *)(v27 + 24) = v8;
      WdLogEvent5_WdError(v27);
      v26 = -1071774972;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  if ( v22 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
  return (unsigned int)v26;
}
