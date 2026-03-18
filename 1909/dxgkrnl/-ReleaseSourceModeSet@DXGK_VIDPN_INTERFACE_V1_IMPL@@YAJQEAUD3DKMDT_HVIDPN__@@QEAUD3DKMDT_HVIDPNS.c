/*
 * XREFs of ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0102120
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0009E30 (-ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v11; // rsi
  struct D3DKMDT_HVIDPN__ *v12; // rdi
  DMMVIDPNSOURCE *v13; // rbx
  __int64 v14; // rbp
  DXGK_VIDPN_INTERFACE_V1_IMPL *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rbp
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-28h] BYREF
  __int64 v32; // [rsp+28h] [rbp-20h]
  char v33; // [rsp+30h] [rbp-18h]

  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 7044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7044);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 7044LL);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
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
        v23 = WdLogNewEntry5_WdAssertion(v9, v8);
        WdLogEvent5_WdAssertion(v23);
      }
      v14 = *((_QWORD *)v13 + 5);
      if ( !v14 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v9, v8);
        WdLogEvent5_WdAssertion(v24);
        v14 = *((_QWORD *)v13 + 5);
      }
      v15 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v14 + 72);
      if ( !v15 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v9, v8);
        WdLogEvent5_WdAssertion(v25);
        v15 = *(DXGK_VIDPN_INTERFACE_V1_IMPL **)(v14 + 72);
      }
      if ( v15 == v11 )
      {
        DMMVIDPNSOURCE::ReleaseModeSet(v13, (struct DMMVIDPNSOURCEMODESET *)v12, v10);
        v17 = 0;
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v9, v8, v10);
        v28 = *((_QWORD *)v13 + 5);
        v29 = (_QWORD *)v26;
        if ( !v28 )
        {
          v30 = WdLogNewEntry5_WdAssertion(0LL, v27);
          WdLogEvent5_WdAssertion(v30);
          v28 = *((_QWORD *)v13 + 5);
        }
        v29[3] = ContainedBy<DMMVIDPN>::GetContainer(v28 + 64, v27);
        v29[4] = v12;
        v29[5] = v11;
        WdLogEvent5_WdError(v29);
        v17 = -1071774928;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v22 + 24) = a2;
      WdLogEvent5_WdError(v22);
      v17 = -1071774968;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    v17 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v16);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v31);
  return v17;
}
