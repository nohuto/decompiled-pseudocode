/*
 * XREFs of DxgkCheckOcclusion @ 0x1C011F760
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013264 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002100C (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0021020 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C011F928 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  char v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  _BYTE v29[24]; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-20h] BYREF

  v3 = (__int64 *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2038);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2038);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v28 = *v3;
    v8 = v28;
    if ( v28 )
    {
      v9 = *((_QWORD *)Current + 13);
      if ( (*(unsigned int (**)(void))(v9 + 208))() )
      {
        v14 = -1071775738;
        *(_QWORD *)&v30.left = 0LL;
        *(_QWORD *)&v30.right = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v29, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v29, 1u);
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v9 + 368))(v8, &v30) == 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v15);
          if ( DXGGLOBAL::IsWindowVisible(Global, &v30) )
            v14 = 0;
        }
        else
        {
          v24 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v24 + 24) = 301LL;
          WdLogEvent5_WdError(v24);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v29);
      }
      else
      {
        v14 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = -1071775738LL;
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v17, &EventProfilerExit, v18, v25);
      }
      return v14;
    }
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v6);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v25);
  return 3221225485LL;
}
