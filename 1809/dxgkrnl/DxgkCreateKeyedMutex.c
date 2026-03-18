/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C02369B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0234368 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C02347A4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  const GUID *v8; // r8
  _OWORD *v10; // rax
  DXGGLOBAL *Global; // rax
  int v12; // r14d
  _DWORD *v13; // r8
  DXGKEYEDMUTEX *v14; // r9
  int v15; // r8d
  _DWORD *v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  unsigned __int64 v25[2]; // [rsp+48h] [rbp-50h]
  int v26; // [rsp+58h] [rbp-40h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]
  char v28; // [rsp+68h] [rbp-30h]
  unsigned int v29; // [rsp+A8h] [rbp+10h] BYREF
  int v30; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v31; // [rsp+B8h] [rbp+20h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2051);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2051);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v10 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v25 = *v10;
    v29 = 0;
    v31 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v12 = DXGGLOBAL::CreateKeyedMutex(Global, v25[0], &v31, &v29, 0LL, 0, 0);
    if ( v12 >= 0 )
    {
      v13 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = v29;
      v14 = v31;
      v15 = *((_DWORD *)v31 + 8);
      v30 = v15;
      v16 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = v15;
      DXGKEYEDMUTEX::ReleaseReference(v14);
    }
    if ( v12 < 0 )
    {
      if ( v29 )
        DXGKEYEDMUTEX::DestroyHandle(v29);
    }
    else
    {
      v17 = v29;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v18 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v18 < *((_DWORD *)Current + 62) )
      {
        v19 = *((_QWORD *)Current + 29);
        v20 = ((unsigned int)v17 >> 25) & 0x60;
        if ( (((unsigned int)v17 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
          && (*(_DWORD *)(v19 + 16 * v18 + 8) & 0x1F) != 0 )
        {
          v21 = 2 * ((v17 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v19 + 8 * v21 + 8) & 0x2000) == 0 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v22);
            v19 = *((_QWORD *)Current + 29);
          }
          *(_DWORD *)(v19 + 8 * v21 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v26);
    return (unsigned int)v12;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v7, &EventProfilerExit, v8, v26);
    }
    return 3221225485LL;
  }
}
