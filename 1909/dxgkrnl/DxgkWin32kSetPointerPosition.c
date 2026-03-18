/*
 * XREFs of DxgkWin32kSetPointerPosition @ 0x1C0257E70
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D7438 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkWin32kSetPointerPosition(
        struct _LUID *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const GUID *a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned int Value; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+28h] [rbp-20h]
  char v24; // [rsp+30h] [rbp-18h]
  unsigned __int64 v25; // [rsp+68h] [rbp+20h] BYREF

  v22 = -1;
  v3 = (unsigned int)a3;
  v23 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 2128;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2128);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2128LL);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
  v13 = v9;
  if ( !v9 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v14[3] = a1->HighPart;
    v14[4] = a1->LowPart;
LABEL_12:
    WdLogEvent5_WdError(v14);
    v17 = -1073741811;
    goto LABEL_13;
  }
  v15 = *(unsigned int *)(*((_QWORD *)v9 + 319) + 80LL);
  if ( a2->VidPnSourceId >= (unsigned int)v15 || (Value = a2->Flags.Value, Value >= 4) || (Value & 2) != 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v15, v10, v12);
    v14[3] = a1->HighPart;
    v14[4] = a1->LowPart;
    v14[5] = a2->VidPnSourceId;
    goto LABEL_12;
  }
  v17 = DxgkSetPointerPosition(v13, a2, (const GUID *)v3, 1);
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
LABEL_13:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v18);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return v17;
}
