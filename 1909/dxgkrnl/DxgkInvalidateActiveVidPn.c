/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C0238790
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02B4048 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGADAPTER *Current; // rbx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int *v20; // r14
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int active; // ebx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  struct DXGADAPTER *v30; // rsi
  size_t v31; // r12
  char *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  bool v38; // [rsp+28h] [rbp-170h]
  int v39; // [rsp+30h] [rbp-168h] BYREF
  __int64 v40; // [rsp+38h] [rbp-160h]
  char v41; // [rsp+40h] [rbp-158h]
  DXGADAPTER *v42[4]; // [rsp+48h] [rbp-150h] BYREF
  struct DXGADAPTER *v43[2]; // [rsp+68h] [rbp-130h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-120h]
  size_t Size; // [rsp+88h] [rbp-110h]
  _QWORD v46[10]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v47[144]; // [rsp+E0h] [rbp-B8h] BYREF

  memset(v46, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v46[1]);
  v42[3] = (DXGADAPTER *)MEMORY[0xFFFFF78000000014];
  v46[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v46[3]) = 44;
  LOBYTE(v46[6]) = -1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2037);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2037LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v42[2] = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v13);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v39);
    }
    return 3221225485LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v42,
    LODWORD(Src[0]),
    (struct _KTHREAD **)Current,
    v43,
    1);
  v20 = (int *)v43[0];
  if ( !v43[0] )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v21[3] = -1073741811LL;
    v21[4] = Current;
    v21[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v21);
    goto LABEL_15;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v43[0], 0LL);
  active = COREADAPTERACCESS::AcquireShared((__int64)v47, 0xFFFFFFFFLL, v22);
  if ( active >= 0 )
  {
    if ( v20[613] > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v24, v23) + 24) = v20;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
LABEL_15:
      if ( v42[0] )
        DXGADAPTER::ReleaseReferenceNoTracking(v42[0]);
      goto LABEL_7;
    }
    v30 = 0LL;
    v31 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v32 = (char *)Src[1];
      if ( !Src[1] )
      {
        v33 = WdLogNewEntry5_WdError(v24, v23, v26);
        *(_QWORD *)(v33 + 24) = 6441LL;
        WdLogEvent5_WdError(v33);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
        if ( v42[0] )
          DXGADAPTER::ReleaseReferenceNoTracking(v42[0]);
        goto LABEL_7;
      }
      v30 = (struct DXGADAPTER *)operator new[]((unsigned int)Size, 0x4B677844u, PagedPool);
      v43[1] = v30;
      if ( !v30 )
      {
        v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
        active = -1073741801;
        *(_QWORD *)(v37 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v37);
        goto LABEL_18;
      }
      if ( &v32[v31] < v32 || (unsigned __int64)&v32[v31] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v30, v32, v31);
    }
    active = DmmInvalidateActiveVidPn(
               (DXGADAPTER *)v20,
               DXGK_AVIR_USERMODE,
               v30,
               v31,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v46,
               v38);
    operator delete[](v30);
  }
LABEL_18:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  if ( v42[0] )
    DXGADAPTER::ReleaseReferenceNoTracking(v42[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v27);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v39);
  return (unsigned int)active;
}
