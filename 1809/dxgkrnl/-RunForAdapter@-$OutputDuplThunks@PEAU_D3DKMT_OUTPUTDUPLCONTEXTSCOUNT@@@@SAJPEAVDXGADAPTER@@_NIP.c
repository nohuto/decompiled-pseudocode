/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01360A4
 * Callers:
 *     OutputDuplQueryActiveContextCount @ 0x1C013607C (OutputDuplQueryActiveContextCount.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00EDA28 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
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
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGADAPTER *v21; // [rsp+48h] [rbp-51h] BYREF
  DXGADAPTER *v22; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-39h] BYREF
  struct DXGADAPTER *v25; // [rsp+68h] [rbp-31h]
  char v26; // [rsp+70h] [rbp-29h]
  unsigned __int64 v27; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v28[8]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v29[32]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v30[40]; // [rsp+B0h] [rbp+17h] BYREF
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+F8h] [rbp+5Fh] BYREF

  v22 = 0LL;
  v5 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v23 = -1LL;
  v8 = a3;
  v21 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v22, &v27, &v21, &v23, &RemoteOutputDuplMgr);
    v13 = (struct OUTPUTDUPL_MGR *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v19 + 24) = a1;
      *(_QWORD *)(v19 + 32) = v13;
      WdLogEvent5_WdWarning(v19);
      return (unsigned int)v13;
    }
    v5 = v21;
    v13 = RemoteOutputDuplMgr;
    if ( v21 )
    {
      v14 = 1;
      goto LABEL_5;
    }
LABEL_18:
    v14 = 0;
LABEL_5:
    v25 = v5;
    v26 = 0;
    if ( v14 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v5, 0LL);
    if ( a1 )
    {
      DXGADAPTER::ReleaseReference(v22);
      DXGADAPTER::ReleaseReference(v5);
      if ( *((_DWORD *)v5 + 44) != 1 )
      {
        LODWORD(v13) = -1073741130;
LABEL_12:
        COREACCESS::~COREACCESS((COREACCESS *)v30);
        COREACCESS::~COREACCESS((COREACCESS *)v29);
        if ( v26 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        return (unsigned int)v13;
      }
      v13 = RemoteOutputDuplMgr;
    }
    if ( (unsigned int)v8 >= *((_DWORD *)v13 + 13) )
    {
      v20 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v20 + 24) = v8;
      WdLogEvent5_WdError(v20);
      LODWORD(v13) = -1071774972;
    }
    else
    {
      LODWORD(v13) = a5(v13, a4);
    }
    goto LABEL_12;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
  v13 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
    goto LABEL_18;
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = 90LL;
  WdLogEvent5_WdError(v18);
  return 3221226021LL;
}
