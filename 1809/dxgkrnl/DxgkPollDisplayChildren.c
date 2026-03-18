/*
 * XREFs of DxgkPollDisplayChildren @ 0x1C01D5F70
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D39B8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02105C0 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02398A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkPollDisplayChildren(_D3DKMT_POLLDISPLAYCHILDREN *Src, char a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  char v6; // bl
  unsigned int v7; // edi
  DXGGLOBAL *Global; // rax
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  const GUID *v12; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v14; // [rsp+30h] [rbp-108h] BYREF
  int v15; // [rsp+38h] [rbp-100h] BYREF
  __int64 v16; // [rsp+40h] [rbp-F8h]
  char v17; // [rsp+48h] [rbp-F0h]
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-E8h]
  _QWORD v19[24]; // [rsp+60h] [rbp-D8h] BYREF

  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 43;
  LOBYTE(v19[6]) = -1;
  v15 = -1;
  v16 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 2036);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2036);
  Current = DXGPROCESS::GetCurrent();
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v14 = *Src;
  }
  else
  {
    memmove(&v14, Src, 8uLL);
  }
  v6 = *((_BYTE *)&v14 + 4);
  if ( (*((_DWORD *)&v14 + 1) & 0xFFFFFFE0) != 0 )
  {
    v6 = *((_BYTE *)&v14 + 4) & 1;
    *((_DWORD *)&v14 + 1) = *((_BYTE *)&v14 + 4) & 1;
  }
  v7 = ((v6 & 1) != 0 ? 1 : 4) | 2;
  if ( (v6 & 0x10) == 0 )
    v7 = (v6 & 1) != 0 ? 1 : 4;
  if ( (v6 & 8) == 0 )
  {
    v9 = PollDisplayChildrenForAdapter(&v14, v7, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
    goto LABEL_19;
  }
  if ( !v14.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal((v6 & 1) != 0 ? 1 : 4);
    v9 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v14, v7, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
LABEL_19:
    v10 = v9;
    goto LABEL_20;
  }
  v10 = -1073741811;
LABEL_20:
  if ( v10 >= 0 && (v6 & 4) != 0 )
  {
    v14 = (_D3DKMT_POLLDISPLAYCHILDREN)-1LL;
    memset(&v19[10], 0, 0x68uLL);
    v10 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v10 == -1071774941 )
      v10 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v12, v15);
  return (unsigned int)v10;
}
