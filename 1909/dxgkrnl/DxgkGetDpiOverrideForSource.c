/*
 * XREFs of DxgkGetDpiOverrideForSource @ 0x1C014F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C012D610 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 */

__int64 __fastcall DxgkGetDpiOverrideForSource(struct _LUID *this, struct _LUID *a2, const GUID *a3)
{
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+30h] [rbp-10h]
  char v20; // [rsp+70h] [rbp+30h] BYREF
  int v21; // [rsp+78h] [rbp+38h] BYREF

  v17 = -1;
  v3 = (unsigned int)a2;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2193;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2193);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2193LL);
  v20 = 0;
  v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v20, 0);
  v9 = v5;
  if ( v5 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v16 + 24) = v9;
    WdLogEvent5_WdError(v16);
  }
  else
  {
    v21 = 0;
    if ( (int)DpiPersistence::ReadDpiFromRegistry(this, (const struct _LUID *)v3, 0, (struct _UNICODE_STRING *)&v21) >= 0 )
    {
      v12 = v21;
      goto LABEL_6;
    }
  }
  v12 = 0;
LABEL_6:
  if ( v20 )
    DxgkReleaseSessionModeChangeLock(v11, v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v10);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v17);
  return v12;
}
