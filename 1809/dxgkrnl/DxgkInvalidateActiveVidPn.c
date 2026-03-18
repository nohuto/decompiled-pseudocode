/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C0206760
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C027B850 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rcx
  DXGADAPTER *Current; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  DXGADAPTER *v10; // rsi
  _QWORD *v11; // rax
  DXGADAPTER *v12; // rcx
  int active; // ebx
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGADAPTER *v21; // r14
  size_t v22; // r12
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  bool v31; // [rsp+28h] [rbp-130h]
  int v32; // [rsp+30h] [rbp-128h] BYREF
  __int64 v33; // [rsp+38h] [rbp-120h]
  char v34; // [rsp+40h] [rbp-118h]
  DXGADAPTER *v35[3]; // [rsp+48h] [rbp-110h] BYREF
  DXGADAPTER *v36[2]; // [rsp+60h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-E8h]
  size_t Size; // [rsp+80h] [rbp-D8h]
  _BYTE v39[80]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v40[10]; // [rsp+E0h] [rbp-78h] BYREF

  memset(v40, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v40[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 44;
  LOBYTE(v40[6]) = -1;
  v32 = -1;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 2037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2037);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2037);
  Current = DXGPROCESS::GetCurrent();
  v35[2] = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v8, v7);
    WdLogEvent5_WdError(v6);
    goto LABEL_27;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a1;
  Size = *(_QWORD *)(a1 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)v35,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    v36,
    1);
  v10 = v36[0];
  if ( !v36[0] )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = -1073741811LL;
    v11[4] = Current;
    v11[5] = LODWORD(Src[0]);
    WdLogEvent5_WdError(v11);
    goto LABEL_12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v36[0], 0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
  if ( active >= 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v10) > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v10;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
LABEL_12:
      v12 = v35[0];
      if ( !v35[0] )
        goto LABEL_27;
      goto LABEL_26;
    }
    v21 = 0LL;
    v22 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v23 = (char *)Src[1];
      if ( !Src[1] )
      {
        v24 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v24 + 24) = 5951LL;
        WdLogEvent5_WdError(v24);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
        v12 = v35[0];
        if ( !v35[0] )
        {
LABEL_27:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
          if ( v34 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v25, &EventProfilerExit, v26, v32);
          }
          return 3221225485LL;
        }
LABEL_26:
        DXGADAPTER::ReleaseReference(v12);
        goto LABEL_27;
      }
      v21 = (DXGADAPTER *)operator new((unsigned int)Size, 0x4B677844u, PagedPool);
      v36[1] = v21;
      if ( !v21 )
      {
        v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        active = -1073741801;
        *(_QWORD *)(v30 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v30);
        goto LABEL_15;
      }
      if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, v23, v22);
    }
    active = DmmInvalidateActiveVidPn(
               v10,
               DXGK_AVIR_USERMODE,
               v21,
               v22,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v40,
               v31);
    operator delete[](v21);
  }
LABEL_15:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v39);
  if ( v35[0] )
    DXGADAPTER::ReleaseReference(v35[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v32);
  return (unsigned int)active;
}
