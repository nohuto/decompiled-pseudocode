/*
 * XREFs of DxgkSetProcessDeviceRemovalSupport @ 0x1C014BC40
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, const GUID *a3)
{
  _BYTE *v3; // rsi
  signed __int16 v4; // bx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  v3 = (_BYTE *)a1;
  v21 = -1;
  v22 = 0LL;
  v4 = 1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v23 = 1;
    v21 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2155);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2155LL);
  v5 = 0;
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v11 = (__int64)Current;
  if ( Current )
  {
    if ( !*((_BYTE *)Current + 264) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      if ( !*v3 )
        v4 = 2;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 200, v4, 0) )
      {
        v20 = WdLogNewEntry5_WdError(MmUserProbeAddress, Current, v10);
        v5 = -1073740528;
        *(_QWORD *)(v20 + 24) = -1073740528LL;
        WdLogEvent5_WdError(v20);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v11);
      if ( v23 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v12, &EventProfilerExit, v13, v21);
      }
      return v5;
    }
    v15 = WdLogNewEntry5_WdError(v9, Current, v10);
    v16 = -1073741823LL;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9, 0LL, v10);
    v16 = -1073741811LL;
  }
  *(_QWORD *)(v15 + 24) = v16;
  WdLogEvent5_WdError(v15);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v17);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v21);
  return (unsigned int)v16;
}
