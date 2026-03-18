/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C014EA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023AF8 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0023B0C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013C150 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r14
  _OWORD *v10; // rax
  void *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  struct DXGGLOBAL *Global; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  _DWORD *v27; // rdx
  _DWORD *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  int v43; // [rsp+20h] [rbp-108h] BYREF
  __int64 v44; // [rsp+28h] [rbp-100h]
  char v45; // [rsp+30h] [rbp-F8h]
  __int64 v46; // [rsp+38h] [rbp-F0h]
  _QWORD v47[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v48[24]; // [rsp+60h] [rbp-C8h] BYREF
  void *v49[2]; // [rsp+78h] [rbp-B0h]
  __int128 v50; // [rsp+88h] [rbp-A0h]
  __int64 v51; // [rsp+98h] [rbp-90h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-88h]
  _BYTE v53[24]; // [rsp+B0h] [rbp-78h] BYREF
  int v54; // [rsp+C8h] [rbp-60h]
  char v55; // [rsp+CCh] [rbp-5Ch]

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2126);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2126LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v10 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v49 = *v10;
    v50 = v10[1];
    memset(v47, 0, sizeof(v47));
    LODWORD(v47[2]) = -1;
    v11 = v49[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53, v49[0], 4096);
    LOBYTE(v12) = 1;
    LODWORD(v15) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v53, v12);
    if ( (_DWORD)v15 == -1073741790 )
    {
      if ( v55 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v37 + 24) = 1491LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v54 = 1024;
      LOBYTE(v13) = 1;
      LODWORD(v15) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v53, v13);
    }
    if ( (int)v15 < 0 )
    {
      v38 = WdLogNewEntry5_WdError(v14, v13, v16);
      *(_QWORD *)(v38 + 24) = v11;
      WdLogEvent5_WdError(v38);
    }
    else
    {
      v47[0] = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v53, v13);
      v17 = *((_QWORD *)Current + 12);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v48, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v48, 1u);
      v51 = 0LL;
      v52 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int64 *))(v17 + 360))(v49[1], &v51) )
      {
        LODWORD(v46) = ((int)v51 + (int)v52) / 2;
        v21 = (unsigned int)((HIDWORD(v51) + HIDWORD(v52)) >> 31);
        LODWORD(v21) = (HIDWORD(v51) + HIDWORD(v52)) % 2;
        HIDWORD(v46) = (HIDWORD(v51) + HIDWORD(v52)) / 2;
        v47[1] = v46;
        Global = DXGGLOBAL::GetGlobal(v19, v21);
        v23 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64)QueryVidPnExclusiveOwnershipCallBack,
                (__int64)v47,
                4);
        v15 = v23;
        if ( v23 < 0 )
        {
          v41 = *((unsigned int *)DXGGLOBAL::GetGlobal(v25, v24) + 320);
          if ( (v41 & 2) != 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40);
            v42[3] = 275LL;
            v42[4] = 33LL;
            v42[5] = v15;
            v42[6] = 0LL;
            v42[7] = 0LL;
            WdLogEvent5_WdCriticalError(v42);
          }
        }
        else
        {
          v26 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v26 = (_QWORD *)MmUserProbeAddress;
          *v26 = *(_QWORD *)((char *)&v47[2] + 4);
          v27 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v27 = (_DWORD *)MmUserProbeAddress;
          *v27 = v47[2];
          v28 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v28 = (_DWORD *)MmUserProbeAddress;
          *v28 = HIDWORD(v47[3]);
        }
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v19, v18, v20);
        *(_QWORD *)(v39 + 24) = 9753LL;
        WdLogEvent5_WdError(v39);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v48);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v29);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v30, &EventProfilerExit, v31, v43);
    }
    return (unsigned int)v15;
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v33 + 24) = 9709LL;
    WdLogEvent5_WdError(v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v34);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v35, &EventProfilerExit, v36, v43);
    return 3221225485LL;
  }
}
