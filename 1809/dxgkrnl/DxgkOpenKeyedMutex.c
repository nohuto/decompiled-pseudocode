/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C02371B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C02347A4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C02350DC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 *v10; // rax
  DXGGLOBAL *v11; // rcx
  int v12; // r14d
  _DWORD *v13; // r8
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h]
  char v24; // [rsp+48h] [rbp-20h]
  unsigned int v25; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h]

  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2052);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2052);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v10 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v27 = *v10;
    v26 = 0LL;
    v25 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v12 = DXGGLOBAL::OpenKeyedMutex(v11, v27, &v26, &v25, 0LL, 0);
    if ( v12 >= 0 )
    {
      v13 = (_DWORD *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = v25;
    }
    if ( v12 < 0 )
    {
      if ( v25 )
        DXGKEYEDMUTEX::DestroyHandle(v25);
    }
    else
    {
      v14 = v25;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v15 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *((_DWORD *)Current + 62) )
      {
        v16 = *((_QWORD *)Current + 29);
        v17 = ((unsigned int)v14 >> 25) & 0x60;
        if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v18 = 2 * ((v14 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v16 + 8 * v18 + 8) & 0x2000) == 0 )
          {
            v19 = WdLogNewEntry5_WdAssertion(v17);
            *(_QWORD *)(v19 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v19);
            v16 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v16 + 8 * v18 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v22);
    return (unsigned int)v12;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v7, &EventProfilerExit, v8, v22);
    }
    return 3221225485LL;
  }
}
