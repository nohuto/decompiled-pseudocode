/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C026B910
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0268F14 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0269654 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, const GUID *a3)
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
  _OWORD *v15; // rax
  DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  int v18; // r14d
  _DWORD *v19; // r8
  DXGKEYEDMUTEX *v20; // r9
  int v21; // r8d
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  const GUID *v30; // r8
  unsigned __int64 v31[2]; // [rsp+48h] [rbp-50h]
  int v32; // [rsp+58h] [rbp-40h] BYREF
  __int64 v33; // [rsp+60h] [rbp-38h]
  char v34; // [rsp+68h] [rbp-30h]
  unsigned int v35; // [rsp+A8h] [rbp+10h] BYREF
  int v36; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v37; // [rsp+B8h] [rbp+20h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2051);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2051LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    v15 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v31 = *v15;
    v35 = 0;
    v37 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
    v18 = DXGGLOBAL::CreateKeyedMutex(Global, v31[0], &v37, &v35, 0LL, 0, 0);
    if ( v18 >= 0 )
    {
      v19 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v35;
      v20 = v37;
      v21 = *((_DWORD *)v37 + 8);
      v36 = v21;
      v22 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v22 = (_DWORD *)MmUserProbeAddress;
      *v22 = v21;
      DXGKEYEDMUTEX::ReleaseReference(v20, (__int64)v22);
    }
    if ( v18 < 0 )
    {
      if ( v35 )
        DXGKEYEDMUTEX::DestroyHandle(v35, v17);
    }
    else
    {
      v23 = v35;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
      v24 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v24 < *((_DWORD *)Current + 56) )
      {
        v25 = *((_QWORD *)Current + 26);
        v26 = ((unsigned int)v23 >> 25) & 0x60;
        if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
          && (*(_DWORD *)(v25 + 16 * v24 + 8) & 0x1F) != 0 )
        {
          v27 = 2 * ((v23 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v25 + 8 * v27 + 8) & 0x2000) == 0 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v26, v25);
            *(_QWORD *)(v28 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v28);
            v25 = *((_QWORD *)Current + 26);
          }
          *(_DWORD *)(v25 + 8 * v27 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v17);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v32);
    return (unsigned int)v18;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v11);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v32);
    }
    return 3221225485LL;
  }
}
