/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C0275370
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0274BA0 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D5A08 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00E9A20 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_CONTEXT **this)))
{
  struct DXGADAPTER *v5; // rbx
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  char v19; // si
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  struct OUTPUTDUPL_MGR *v24; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGADAPTER *v25; // [rsp+50h] [rbp-B8h] BYREF
  DXGADAPTER *v26; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  char v28; // [rsp+70h] [rbp-98h]
  unsigned __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[8]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v32[64]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v33[72]; // [rsp+D0h] [rbp-38h] BYREF

  v26 = 0LL;
  v5 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
    if ( !RemoteOutputDuplMgr )
    {
      v17 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = 90LL;
      WdLogEvent5_WdError(v17);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, 0, &v26, &v30, &v25, &v29, &v24);
  v5 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v25;
    RemoteOutputDuplMgr = v24;
    if ( v25 )
    {
      v13 = 1;
LABEL_9:
      v19 = 0;
      v27[1] = v5;
      v28 = 0;
      if ( v13 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        v19 = v28;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v5, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v26),
            DXGADAPTER::ReleaseReferenceNoTracking(v5),
            LODWORD(v5) = COREADAPTERACCESS::AcquireShared((__int64)v31, 0xFFFFFFFFLL, 0LL),
            (int)v5 >= 0) )
      {
        if ( *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v5) = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v21, v20, v22);
          *(_QWORD *)(v23 + 24) = 0LL;
          WdLogEvent5_WdError(v23);
          LODWORD(v5) = -1071774972;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
      return (unsigned int)v5;
    }
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = v5;
  WdLogEvent5_WdWarning(v11);
  return (unsigned int)v5;
}
