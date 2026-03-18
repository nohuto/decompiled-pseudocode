/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C00C5374
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00C4C9C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E2378 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00EDA28 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *__hidden this, const struct _DXGKARG_SETPOINTERPOSITION *), __int64))
{
  struct DXGADAPTER *v6; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v14; // al
  char v15; // r14
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  DXGADAPTER *v22; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-49h] BYREF
  struct DXGADAPTER *v25; // [rsp+58h] [rbp-41h]
  char v26; // [rsp+60h] [rbp-39h]
  unsigned __int64 v27; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v29[32]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v30[72]; // [rsp+98h] [rbp-1h] BYREF
  struct DXGADAPTER *v31; // [rsp+F0h] [rbp+57h] BYREF
  struct OUTPUTDUPL_MGR *v32; // [rsp+108h] [rbp+6Fh] BYREF

  v22 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v23 = -1LL;
  v8 = a3;
  v31 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v22, &v27, &v31, &v23, &v32);
    v6 = (struct DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v18 + 24) = a1;
      *(_QWORD *)(v18 + 32) = v6;
      WdLogEvent5_WdWarning(v18);
      return (unsigned int)v6;
    }
    v6 = v31;
    RemoteOutputDuplMgr = v32;
    if ( v31 )
    {
      v14 = 1;
LABEL_5:
      v15 = 0;
      v25 = v6;
      v26 = 0;
      if ( v14 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        v15 = v26;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v6, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v22),
            DXGADAPTER::ReleaseReference(v6),
            LODWORD(v6) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28),
            (int)v6 >= 0) )
      {
        if ( (unsigned int)v8 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v21 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v21 + 24) = v8;
          WdLogEvent5_WdError(v21);
          LODWORD(v6) = -1071774972;
        }
        else
        {
          LODWORD(v6) = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerPositionChange, a5);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      return (unsigned int)v6;
    }
LABEL_17:
    v14 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    goto LABEL_17;
  v20 = WdLogNewEntry5_WdError(v19);
  *(_QWORD *)(v20 + 24) = 90LL;
  WdLogEvent5_WdError(v20);
  return 3221226021LL;
}
