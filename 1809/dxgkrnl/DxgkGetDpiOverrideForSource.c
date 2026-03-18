/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1C013B910
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(struct _LUID *this, struct _LUID *a2, const GUID *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  char v12; // [rsp+40h] [rbp-10h]
  unsigned int v13; // [rsp+70h] [rbp+20h] BYREF

  v10 = -1;
  v3 = (unsigned int)a2;
  v11 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v12 = 1;
    v10 = 2193;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2193);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2193);
  v13 = 0;
  v5 = DpiPersistence::ReadDpiFromRegistry(this, (const struct _LUID *)v3, 0, 0, &v13);
  v6 = 0;
  if ( v5 >= 0 )
    v6 = v13;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v7, &EventProfilerExit, v8, v10);
  return v6;
}
