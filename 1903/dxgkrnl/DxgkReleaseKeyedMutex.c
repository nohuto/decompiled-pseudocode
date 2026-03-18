/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C026C0A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043204 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0044ACC (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C026A06C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGKEYEDMUTEX *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]
  char v30; // [rsp+40h] [rbp-28h]
  unsigned int v31[4]; // [rsp+48h] [rbp-20h]
  unsigned __int64 v32; // [rsp+58h] [rbp-10h]
  DXGKEYEDMUTEX *v33; // [rsp+78h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v34; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1;
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2055);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2055LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, 0LL);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v10);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v28);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v31 = *(_OWORD *)v3;
  v32 = *(_QWORD *)(v3 + 16);
  v14 = v31[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v33, v31[0], Current, &v34);
  v18 = v34;
  if ( !v34 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v14;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    if ( v33 )
      DXGKEYEDMUTEX::ReleaseReference(v33, v10);
    goto LABEL_7;
  }
  v20 = DXGKEYEDMUTEX::ReleaseSync(v34, v14, *(__int64 *)&v31[2], (struct _LIST_ENTRY *)v32, 0LL, 0);
  v24 = v20;
  if ( v20 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v25[3] = v14;
    v25[4] = v18;
    v25[5] = v24;
    WdLogEvent5_WdError(v25);
  }
  if ( v33 )
    DXGKEYEDMUTEX::ReleaseReference(v33, v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v21);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v28);
  return (unsigned int)v24;
}
