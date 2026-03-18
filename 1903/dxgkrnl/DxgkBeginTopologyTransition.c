/*
 * XREFs of DxgkBeginTopologyTransition @ 0x1C013E020
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkBeginTopologyTransition(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  v9 = -1;
  v10 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v11 = 1;
    v9 = 2188;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2188);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v9, 2188LL);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v4, v3) + 133);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9, v5);
  if ( v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  return 0LL;
}
