/*
 * XREFs of DxgkPollDisplayChildrenInternal @ 0x1C0203DE0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0203DC0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C00 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0244658 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026DFFC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *Src, char a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // bl
  unsigned int v10; // edi
  DXGGLOBAL *Global; // rax
  int v12; // eax
  int v13; // edi
  __int64 v14; // rcx
  const GUID *v15; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v17; // [rsp+30h] [rbp-108h] BYREF
  int v18; // [rsp+38h] [rbp-100h] BYREF
  __int64 v19; // [rsp+40h] [rbp-F8h]
  char v20; // [rsp+48h] [rbp-F0h]
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-E8h]
  _QWORD v22[24]; // [rsp+60h] [rbp-D8h] BYREF

  memset(v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v22[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 43;
  LOBYTE(v22[6]) = -1;
  v18 = -1;
  v19 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v20 = 1;
    v18 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerEnter, v5, 2036);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2036LL);
  v17 = 0LL;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v17 = *Src;
  }
  else
  {
    memmove(&v17, Src, 8uLL);
  }
  v9 = *((_BYTE *)&v17 + 4);
  if ( (*((_DWORD *)&v17 + 1) & 0xFFFFFFE0) != 0 )
  {
    v9 = *((_BYTE *)&v17 + 4) & 1;
    *((_DWORD *)&v17 + 1) = *((_BYTE *)&v17 + 4) & 1;
  }
  v10 = ((v9 & 1) != 0 ? 1 : 4) | 2;
  if ( (v9 & 0x10) == 0 )
    v10 = (v9 & 1) != 0 ? 1 : 4;
  if ( (v9 & 8) == 0 )
  {
    v12 = PollDisplayChildrenForAdapter(&v17, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v22);
    v9 = *((_BYTE *)&v17 + 4);
    goto LABEL_19;
  }
  if ( !v17.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal((v9 & 1) != 0 ? 1 : 4, v8);
    v12 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v17, v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v22);
LABEL_19:
    v13 = v12;
    goto LABEL_20;
  }
  v13 = -1073741811;
LABEL_20:
  if ( v13 >= 0 && (v9 & 4) != 0 )
  {
    v17 = (_D3DKMT_POLLDISPLAYCHILDREN)-1LL;
    memset(&v22[10], 0, 0x68uLL);
    v13 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v13 == -1071774941 )
      v13 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18, v8);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, v18);
  return (unsigned int)v13;
}
