/*
 * XREFs of ?DxgkSharedProtectedSessionObDeleteProcedure@@YAXPEAX@Z @ 0x1C021C930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C003C940 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

void __fastcall DxgkSharedProtectedSessionObDeleteProcedure(PVOID *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  const GUID *v7; // r8
  _BYTE v8[16]; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  char v11; // [rsp+40h] [rbp-10h]

  v9 = -1;
  v10 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v11 = 1;
    v9 = 16003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16003);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 16003);
  Global = DXGGLOBAL::GetGlobal(v4);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v8, Global);
  DXGPROTECTEDSESSION::DestroyProtectedSession(*a1, 0);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerExit, v7, v9);
  }
}
