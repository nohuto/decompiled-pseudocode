/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1C02230D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00C4C9C (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int Value; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  char v20; // [rsp+30h] [rbp-18h]
  unsigned __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  v18 = -1;
  v3 = (unsigned int)a3;
  v19 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v20 = 1;
    v18 = 2128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2128);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2128);
  Global = DXGGLOBAL::GetGlobal(v6);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v21);
  v10 = v8;
  if ( !v8 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = a1->HighPart;
    v11[4] = a1->LowPart;
LABEL_12:
    WdLogEvent5_WdError(v11);
    v14 = -1073741811;
    goto LABEL_13;
  }
  v12 = *(unsigned int *)(*((_QWORD *)v8 + 315) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v12 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v11[3] = a1->HighPart;
    v11[4] = a1->LowPart;
    v11[5] = a2->VidPnSourceId;
    goto LABEL_12;
  }
  v14 = DxgkSetPointerPosition(v10, a2, (const GUID *)v3, 1);
  DXGADAPTER::ReleaseReference(v10);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v18);
  return v14;
}
