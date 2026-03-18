/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1C0139170
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, const GUID *a3)
{
  _BYTE *v3; // rsi
  signed __int16 v4; // bx
  unsigned int v5; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  const GUID *v9; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v15; // rax
  int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]

  v3 = (_BYTE *)a1;
  v16 = -1;
  v17 = 0LL;
  v4 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v18 = 1;
    v16 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2155);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2155);
  v5 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( !*((_BYTE *)Current + 288) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      if ( !*v3 )
        v4 = 2;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 210, v4, 0) )
      {
        v15 = WdLogNewEntry5_WdError(MmUserProbeAddress);
        v5 = -1073740528;
        *(_QWORD *)(v15 + 24) = -1073740528LL;
        WdLogEvent5_WdError(v15);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
      if ( v18 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v8, &EventProfilerExit, v9, v16);
      }
      return v5;
    }
    v11 = WdLogNewEntry5_WdError(v7);
    v12 = -1073741823LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7);
    v12 = -1073741811LL;
  }
  *(_QWORD *)(v11 + 24) = v12;
  WdLogEvent5_WdError(v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v16);
  return (unsigned int)v12;
}
