/*
 * XREFs of ?DxgkSharedKeyedMutexObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C021C890
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DxgkSharedKeyedMutexObjectObDeleteProcedure(DXGKEYEDMUTEX **a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v6 = -1;
  v7 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v8 = 1;
    v6 = 16001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16001);
  }
  else
  {
    v8 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v6, 16001);
  DXGKEYEDMUTEX::ReleaseReference(*a1);
  *a1 = 0LL;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v6);
  if ( v8 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v4, &EventProfilerExit, v5, v6);
  }
}
