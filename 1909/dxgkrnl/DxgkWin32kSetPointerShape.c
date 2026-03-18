/*
 * XREFs of DxgkWin32kSetPointerShape @ 0x1C0257FD0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00FC1B0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerShape(
        struct _LUID *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int Value; // eax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // [rsp+40h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h]
  char v25; // [rsp+50h] [rbp-28h]
  unsigned __int64 v26; // [rsp+90h] [rbp+18h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 2129;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2129);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2129LL);
  if ( !a3 )
    goto LABEL_14;
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v26);
  v15 = v11;
  if ( !v11 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v16[3] = a1->HighPart;
    v16[4] = a1->LowPart;
LABEL_13:
    WdLogEvent5_WdError(v16);
LABEL_14:
    v19 = -1073741811;
    goto LABEL_15;
  }
  v17 = *(unsigned int *)(*((_QWORD *)v11 + 319) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v17 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v17, v12, v14);
    v16[3] = a1->HighPart;
    v16[4] = a1->LowPart;
    v16[5] = a2->VidPnSourceId;
    goto LABEL_13;
  }
  v19 = DxgkSetPointerShape(v15, a2, (GUID *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8), a4, 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v15);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v8);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v19;
}
