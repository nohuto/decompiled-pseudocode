/*
 * XREFs of ?DxgkSharedBundleObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C0250CC0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

void __fastcall DxgkSharedBundleObjectObDeleteProcedure(PVOID *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 i; // rdi
  __int64 v6; // rcx
  const GUID *v7; // r8
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+30h] [rbp-18h]

  v8 = -1;
  v9 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v10 = 1;
    v8 = 16004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16004);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 16004LL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 6); i = (unsigned int)(i + 1) )
  {
    ObfDereferenceObject(a1[i + 4]);
    a1[i + 4] = 0LL;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8, v4);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v6, &EventProfilerExit, v7, v8);
  }
}
