/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C0236CF0
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

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  _OWORD *v9; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF Value; // r14d
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  DXGGLOBAL *Global; // rax
  int v16; // r14d
  _DWORD *v17; // r8
  DXGKEYEDMUTEX *v18; // r9
  int v19; // r8d
  _DWORD *v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  int v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+50h] [rbp-58h]
  char v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32[2]; // [rsp+60h] [rbp-48h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v33[4]; // [rsp+70h] [rbp-38h]
  unsigned int v34; // [rsp+B8h] [rbp+10h] BYREF
  int v35; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v36; // [rsp+C8h] [rbp+20h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2066);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2066);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v29);
    }
    return 3221225485LL;
  }
  v9 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v32 = *v9;
  *(_OWORD *)&v33[0].0 = v9[1];
  Value = (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF)v33[3].Value;
  if ( (v33[3].Value & 0xFFFFFFFE) != 0 )
  {
    v11 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v7);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_11;
  }
  v34 = 0;
  v36 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  v16 = DXGGLOBAL::CreateKeyedMutex(
          Global,
          v32[0],
          &v36,
          &v34,
          *(char **)&v33[0].0,
          v33[2].Value,
          (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)Value);
  if ( v16 >= 0 )
  {
    v17 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = v34;
    v18 = v36;
    v19 = *((_DWORD *)v36 + 8);
    v35 = v19;
    v20 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v19;
    DXGKEYEDMUTEX::ReleaseReference(v18);
  }
  if ( v16 < 0 )
  {
    if ( v34 )
      DXGKEYEDMUTEX::DestroyHandle(v34);
  }
  else
  {
    v21 = v34;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *((_DWORD *)Current + 62) )
    {
      v23 = *((_QWORD *)Current + 29);
      v24 = ((unsigned int)v21 >> 25) & 0x60;
      if ( (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
        && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
      {
        v25 = 2 * ((v21 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v23 + 8 * v25 + 8) & 0x2000) == 0 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v26 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v26);
          v23 = *((_QWORD *)Current + 29);
        }
        *(_DWORD *)(v23 + 8 * v25 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 27) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v29);
  return (unsigned int)v16;
}
