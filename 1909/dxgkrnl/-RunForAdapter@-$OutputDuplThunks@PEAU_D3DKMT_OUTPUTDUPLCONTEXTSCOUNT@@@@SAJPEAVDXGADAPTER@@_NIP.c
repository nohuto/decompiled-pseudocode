/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0149E78
 * Callers:
 *     OutputDuplQueryActiveContextCount @ 0x1C0149E50 (OutputDuplQueryActiveContextCount.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D5A08 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rdi
  __int64 v8; // r14
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct OUTPUTDUPL_MGR *v13; // rbx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v26; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v27; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v29; // [rsp+60h] [rbp-A0h]
  char v30; // [rsp+68h] [rbp-98h]
  unsigned __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v33[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v35[72]; // [rsp+C8h] [rbp-38h] BYREF

  v27 = 0LL;
  v5 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v8 = a3;
  v26 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v27, &v32, &v26, &v31, &RemoteOutputDuplMgr);
    v13 = (struct OUTPUTDUPL_MGR *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v23 + 24) = a1;
      *(_QWORD *)(v23 + 32) = v13;
      WdLogEvent5_WdWarning(v23);
      return (unsigned int)v13;
    }
    v5 = v26;
    v13 = RemoteOutputDuplMgr;
    if ( v26 )
    {
      v14 = 1;
      goto LABEL_5;
    }
LABEL_18:
    v14 = 0;
LABEL_5:
    v29 = v5;
    v30 = 0;
    if ( v14 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v5, 0LL);
    if ( a1 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v27);
      DXGADAPTER::ReleaseReferenceNoTracking(v5);
      if ( *((_DWORD *)v5 + 44) != 1 )
      {
        LODWORD(v13) = -1073741130;
LABEL_12:
        COREACCESS::~COREACCESS((COREACCESS *)v35);
        COREACCESS::~COREACCESS((COREACCESS *)v34);
        if ( v30 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
        return (unsigned int)v13;
      }
      v13 = RemoteOutputDuplMgr;
    }
    if ( (unsigned int)v8 >= *((_DWORD *)v13 + 13) )
    {
      v24 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v24 + 24) = v8;
      WdLogEvent5_WdError(v24);
      LODWORD(v13) = -1071774972;
    }
    else
    {
      LODWORD(v13) = a5(v13, a4);
    }
    goto LABEL_12;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
  v13 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
    goto LABEL_18;
  v22 = WdLogNewEntry5_WdError(v20, v19, v21);
  *(_QWORD *)(v22 + 24) = 90LL;
  WdLogEvent5_WdError(v22);
  return 3221226021LL;
}
