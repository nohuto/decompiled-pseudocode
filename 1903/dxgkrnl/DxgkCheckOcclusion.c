/*
 * XREFs of DxgkCheckOcclusion @ 0x1C01435E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0002074 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0023AF8 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0023B0C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C01437A8 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  char v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  _BYTE v33[24]; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v34; // [rsp+58h] [rbp-20h] BYREF

  v3 = (__int64 *)a1;
  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2038);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 2038LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v32 = *v3;
    v10 = v32;
    if ( v32 )
    {
      v11 = *((_QWORD *)Current + 12);
      if ( (*(unsigned int (**)(void))(v11 + 208))() )
      {
        v14 = -1071775738;
        *(_QWORD *)&v34.left = 0LL;
        *(_QWORD *)&v34.right = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v33, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v33, 1u);
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v11 + 360))(v10, &v34) == 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v16, v15);
          if ( DXGGLOBAL::IsWindowVisible(Global, &v34) )
            v14 = 0;
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(v16, v15, v17);
          *(_QWORD *)(v28 + 24) = 305LL;
          WdLogEvent5_WdError(v28);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v33);
      }
      else
      {
        v14 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = -1071775738LL;
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v19);
      if ( v31 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v20, &EventProfilerExit, v21, v29);
      }
      return v14;
    }
    v25 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v24);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v29);
  return 3221225485LL;
}
