/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00E1980
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000E9A0 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v11; // rsi
  struct D3DKMDT_HVIDPN__ *v12; // rdi
  DMMVIDPNSOURCE *v13; // rbx
  __int64 v14; // rbp
  DXGK_VIDPN_INTERFACE_V1_IMPL *v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbp
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-28h] BYREF
  __int64 v30; // [rsp+28h] [rbp-20h]
  char v31; // [rsp+30h] [rbp-18h]

  v29 = -1;
  v30 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7044);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 7044);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = this;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
    v11 = this;
  else
    v11 = 0LL;
  if ( v11 )
  {
    if ( a2 && *((_DWORD *)a2 + 32) == 1833173004 )
      v12 = a2;
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = (DMMVIDPNSOURCE *)*((_QWORD *)v12 + 14);
      if ( !v13 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v22);
      }
      v14 = *((_QWORD *)v13 + 5);
      if ( !v14 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v23);
        v14 = *((_QWORD *)v13 + 5);
      }
      v15 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v14 + 72);
      if ( !v15 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v24);
        v15 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v14 + 72);
      }
      if ( v15 == v11 )
      {
        DMMVIDPNSOURCE::ReleaseModeSet(v13, (struct DMMVIDPNSOURCEMODESET *)v12);
        v16 = 0;
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v10);
        v26 = *((_QWORD *)v13 + 5);
        v27 = (_QWORD *)v25;
        if ( !v26 )
        {
          v28 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v28);
          v26 = *((_QWORD *)v13 + 5);
        }
        v27[3] = ContainedBy<DMMVIDPN>::GetContainer(v26 + 64);
        v27[4] = v12;
        v27[5] = v11;
        WdLogEvent5_WdError(v27);
        v16 = -1071774928;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v21 + 24) = a2;
      WdLogEvent5_WdError(v21);
      v16 = -1071774968;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v16 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v29);
  return v16;
}
