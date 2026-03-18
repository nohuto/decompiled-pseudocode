/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C026B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043204 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0268884 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0268FC4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, const GUID *a3)
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
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF Value; // r14d
  __int64 v17; // rax
  DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  int v20; // r14d
  _DWORD *v21; // r8
  DXGKEYEDMUTEX *v22; // r9
  int v23; // r8d
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 v34; // [rsp+50h] [rbp-58h]
  char v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36[2]; // [rsp+60h] [rbp-48h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v37[4]; // [rsp+70h] [rbp-38h]
  unsigned int v38; // [rsp+B8h] [rbp+10h] BYREF
  int v39; // [rsp+C0h] [rbp+18h]
  DXGKEYEDMUTEX *v40; // [rsp+C8h] [rbp+20h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2066;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2066);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2066LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v11);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v33);
    }
    return 3221225485LL;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v36 = *v15;
  *(_OWORD *)&v37[0].0 = v15[1];
  Value = (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF)v37[3].Value;
  if ( (v37[3].Value & 0xFFFFFFFE) != 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v9);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_7;
  }
  v38 = 0;
  v40 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v6);
  v20 = DXGGLOBAL::CreateKeyedMutex(
          Global,
          v36[0],
          &v40,
          &v38,
          *(void **)&v37[0].0,
          v37[2].Value,
          (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)Value);
  if ( v20 >= 0 )
  {
    v21 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = v38;
    v22 = v40;
    v23 = *((_DWORD *)v40 + 8);
    v39 = v23;
    v24 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v23;
    DXGKEYEDMUTEX::ReleaseReference(v22, (__int64)v24);
  }
  if ( v20 < 0 )
  {
    if ( v38 )
      DXGKEYEDMUTEX::DestroyHandle(v38, v19);
  }
  else
  {
    v25 = v38;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
    v26 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v26 < *((_DWORD *)Current + 56) )
    {
      v27 = *((_QWORD *)Current + 26);
      v28 = ((unsigned int)v25 >> 25) & 0x60;
      if ( (((unsigned int)v25 >> 25) & 0x60) == (*(_BYTE *)(v27 + 16 * v26 + 8) & 0x60)
        && (*(_DWORD *)(v27 + 16 * v26 + 8) & 0x1F) != 0 )
      {
        v29 = 2 * ((v25 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v27 + 8 * v29 + 8) & 0x2000) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28, v27);
          *(_QWORD *)(v30 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v30);
          v27 = *((_QWORD *)Current + 26);
        }
        *(_DWORD *)(v27 + 8 * v29 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 24) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v19);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v33);
  return (unsigned int)v20;
}
