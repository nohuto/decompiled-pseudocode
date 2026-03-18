/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C026BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0268FC4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0269CF4 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  ULONG64 v15; // rax
  DXGGLOBAL *v16; // rcx
  ULONG64 v17; // rdx
  int v18; // r14d
  _DWORD *v19; // r8
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-40h]
  char v30; // [rsp+40h] [rbp-38h]
  void *v31[2]; // [rsp+48h] [rbp-30h]
  unsigned int v32[8]; // [rsp+58h] [rbp-20h]
  unsigned int v33; // [rsp+88h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v34; // [rsp+90h] [rbp+18h] BYREF
  struct DXGPROCESS *v35; // [rsp+98h] [rbp+20h]

  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2067;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2067);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2067LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v35 = Current;
  if ( Current )
  {
    v15 = a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    *(_OWORD *)v31 = *(_OWORD *)v15;
    *(_QWORD *)v32 = *(_QWORD *)(v15 + 16);
    v34 = 0LL;
    v33 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
    v18 = DXGGLOBAL::OpenKeyedMutex(v16, LODWORD(v31[0]), &v34, &v33, (char *)v31[1], v32[0]);
    if ( v18 >= 0 )
    {
      v19 = (_DWORD *)(a1 + 4);
      v17 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v33;
    }
    if ( v18 < 0 )
    {
      if ( v33 )
        DXGKEYEDMUTEX::DestroyHandle(v33, v17);
    }
    else
    {
      v20 = v33;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
      v21 = ((unsigned int)v20 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 < *((_DWORD *)Current + 56) )
      {
        v22 = *((_QWORD *)Current + 26);
        v23 = ((unsigned int)v20 >> 25) & 0x60;
        if ( (((unsigned int)v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
          && (*(_DWORD *)(v22 + 16 * v21 + 8) & 0x1F) != 0 )
        {
          v24 = 2 * ((v20 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v22 + 8 * v24 + 8) & 0x2000) == 0 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v23, v22);
            *(_QWORD *)(v25 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v25);
            v22 = *((_QWORD *)Current + 26);
          }
          *(_DWORD *)(v22 + 8 * v24 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v17);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v28);
    return (unsigned int)v18;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v11);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v28);
    }
    return 3221225485LL;
  }
}
