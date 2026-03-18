/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C014B178
 * Callers:
 *     DxgkDesktopSwitch @ 0x1C014B0E0 (DxgkDesktopSwitch.c)
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

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_MGR *this, __int64 a2), _QWORD))
{
  struct DXGADAPTER *v6; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v14; // al
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct OUTPUTDUPL_MGR *v26; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v27; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v30; // [rsp+60h] [rbp-A0h]
  char v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v34[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v36[72]; // [rsp+C8h] [rbp-38h] BYREF

  v28 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v8 = a3;
  v27 = 0LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v28, &v33, &v27, &v32, &v26);
    v6 = (struct DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v24 + 24) = a1;
      *(_QWORD *)(v24 + 32) = v6;
      WdLogEvent5_WdWarning(v24);
      return (unsigned int)v6;
    }
    v6 = v27;
    RemoteOutputDuplMgr = v26;
    if ( v27 )
    {
      v14 = 1;
LABEL_5:
      v15 = 0;
      v30 = v6;
      v31 = 0;
      if ( v14 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
        v15 = v31;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v6, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v28),
            DXGADAPTER::ReleaseReferenceNoTracking(v6),
            LODWORD(v6) = COREADAPTERACCESS::AcquireShared((__int64)v34, 0xFFFFFFFFLL, 0LL),
            (int)v6 >= 0) )
      {
        if ( (unsigned int)v8 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v25 = WdLogNewEntry5_WdError(v17, v16, v18);
          *(_QWORD *)(v25 + 24) = v8;
          WdLogEvent5_WdError(v25);
          LODWORD(v6) = -1071774972;
        }
        else
        {
          LODWORD(v6) = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessDesktopSwitch, a5);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      return (unsigned int)v6;
    }
LABEL_16:
    v14 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL, a2);
  if ( RemoteOutputDuplMgr )
    goto LABEL_16;
  v23 = WdLogNewEntry5_WdError(v21, v20, v22);
  *(_QWORD *)(v23 + 24) = 90LL;
  WdLogEvent5_WdError(v23);
  return 3221226021LL;
}
