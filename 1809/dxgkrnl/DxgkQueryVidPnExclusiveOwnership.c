/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C013DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002100C (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  _OWORD *v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  _DWORD *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // [rsp+20h] [rbp-108h] BYREF
  __int64 v30; // [rsp+28h] [rbp-100h]
  char v31; // [rsp+30h] [rbp-F8h]
  __int64 v32; // [rsp+38h] [rbp-F0h]
  _QWORD v33[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v34[24]; // [rsp+60h] [rbp-C8h] BYREF
  void *v35[2]; // [rsp+78h] [rbp-B0h]
  __int128 v36; // [rsp+88h] [rbp-A0h]
  _DWORD v37[6]; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v38[24]; // [rsp+B0h] [rbp-78h] BYREF
  int v39; // [rsp+C8h] [rbp-60h]
  char v40; // [rsp+CCh] [rbp-5Ch]

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2126);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2126);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v6 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v35 = *v6;
    v36 = v6[1];
    memset(v33, 0, sizeof(v33));
    LODWORD(v33[2]) = -1;
    v7 = v35[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38, v35[0], 4096);
    LODWORD(v9) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v38, 1);
    if ( (_DWORD)v9 == -1073741790 )
    {
      if ( v40 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v24 + 24) = 1621LL;
        WdLogEvent5_WdAssertion(v24);
      }
      v39 = 1024;
      LODWORD(v9) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v38, 1);
    }
    if ( (int)v9 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v25 + 24) = v7;
      WdLogEvent5_WdError(v25);
    }
    else
    {
      v33[0] = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v38);
      v10 = *((_QWORD *)Current + 13);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v34, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v34, 1u);
      if ( (*(unsigned int (__fastcall **)(void *, _DWORD *))(v10 + 368))(v35[1], v37) )
      {
        LODWORD(v32) = (v37[0] + v37[2]) / 2;
        HIDWORD(v32) = (v37[1] + v37[3]) / 2;
        v33[1] = v32;
        Global = DXGGLOBAL::GetGlobal(v11);
        v13 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)v33,
                4);
        v9 = v13;
        if ( v13 < 0 )
        {
          v27 = *((unsigned int *)DXGGLOBAL::GetGlobal(v14) + 328);
          if ( (v27 & 2) != 0 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27);
            v28[3] = 275LL;
            v28[4] = 33LL;
            v28[5] = v9;
            v28[6] = 0LL;
            v28[7] = 0LL;
            WdLogEvent5_WdCriticalError(v28);
          }
        }
        else
        {
          v15 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v15 = (_QWORD *)MmUserProbeAddress;
          *v15 = *(_QWORD *)((char *)&v33[2] + 4);
          v16 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = v33[2];
          v17 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v17 = (_DWORD *)MmUserProbeAddress;
          *v17 = HIDWORD(v33[3]);
        }
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v26 + 24) = 9030LL;
        WdLogEvent5_WdError(v26);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v34);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v19, v29);
    }
    return (unsigned int)v9;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v21 + 24) = 8986LL;
    WdLogEvent5_WdError(v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v29);
    return 3221225485LL;
  }
}
