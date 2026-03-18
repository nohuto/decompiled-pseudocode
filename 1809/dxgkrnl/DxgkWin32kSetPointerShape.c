/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C0223230
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00ECD5C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4)
{
  __int64 v8; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  unsigned int Value; // eax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  char v22; // [rsp+50h] [rbp-28h]
  unsigned __int64 v23; // [rsp+90h] [rbp+18h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2129);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2129);
  if ( !a3 )
    goto LABEL_14;
  Global = DXGGLOBAL::GetGlobal(v8);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v23);
  v12 = v10;
  if ( !v10 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
LABEL_13:
    WdLogEvent5_WdError(v13);
LABEL_14:
    v16 = -1073741811;
    goto LABEL_15;
  }
  v14 = *(unsigned int *)(*((_QWORD *)v10 + 315) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v14 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v13[3] = a1->HighPart;
    v13[4] = a1->LowPart;
    v13[5] = a2->VidPnSourceId;
    goto LABEL_13;
  }
  v16 = DxgkSetPointerShape(v12, a2, (GUID *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), a4, 1);
  DXGADAPTER::ReleaseReference(v12);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v20);
  return v16;
}
