/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C02377D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C003E00C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C02356C4 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGKEYEDMUTEX *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+38h] [rbp-30h]
  char v24; // [rsp+40h] [rbp-28h]
  unsigned int v25[4]; // [rsp+48h] [rbp-20h]
  unsigned __int64 v26; // [rsp+58h] [rbp-10h]
  DXGKEYEDMUTEX *v27; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v28; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2055);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2055);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v22);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v25 = *(_OWORD *)v3;
  v26 = *(_QWORD *)(v3 + 16);
  v7 = v25[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v27, v25[0], Current, &v28);
  v11 = v28;
  if ( !v28 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v7;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    if ( v27 )
      DXGKEYEDMUTEX::ReleaseReference(v27);
    goto LABEL_12;
  }
  v16 = DXGKEYEDMUTEX::ReleaseSync(v28, v7, *(__int64 *)&v25[2], (struct _LIST_ENTRY *)v26, 0LL, 0);
  v18 = v16;
  if ( v16 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v19[3] = v7;
    v19[4] = v11;
    v19[5] = v18;
    WdLogEvent5_WdError(v19);
  }
  if ( v27 )
    DXGKEYEDMUTEX::ReleaseReference(v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v22);
  return (unsigned int)v18;
}
