/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BC430
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  const GUID *v21; // r8
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-38h] BYREF
  __int64 v30; // [rsp+28h] [rbp-30h]
  char v31; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v32; // [rsp+70h] [rbp+18h]

  v29 = -1;
  v30 = 0LL;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v31 = 1;
    v29 = 6034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6034);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 6034);
  if ( !a3 || !a4 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v23[3] = 0LL;
    v23[4] = v7;
    v23[5] = this;
    WdLogEvent5_WdError(v23);
    v19 = -1073741811;
    goto LABEL_12;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  *a4 = 0LL;
  v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v11 = v9;
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    v19 = -1071774973;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 48) + 88LL) == v9 )
  {
    v25 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v25 + 24) = v7;
    *(_QWORD *)(v25 + 32) = v11;
    WdLogEvent5_WdError(v25);
    v19 = -1071774909;
    goto LABEL_12;
  }
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), v7) )
  {
    v26 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v26 + 24) = v7;
    *(_QWORD *)(v26 + 32) = v11;
    WdLogEvent5_WdError(v26);
    v19 = -1071774919;
    goto LABEL_12;
  }
  v32 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v13 + 440);
  v14 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v11 + 304), v7);
  v16 = v14;
  if ( !v14 )
  {
    v27 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v27 + 24) = v7;
    *(_QWORD *)(v27 + 32) = v11;
    WdLogEvent5_WdError(v27);
    v19 = -1071774972;
    goto LABEL_12;
  }
  v17 = *(_QWORD *)(v14 + 104);
  if ( !v17 )
  {
    v18 = 0LL;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
  v18 = *(_QWORD *)(v16 + 104);
  if ( !v18 )
  {
LABEL_22:
    v28 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v28);
  }
  *(_QWORD *)&a3->Data1 = v18 & -(__int64)(v18 != -137);
  v19 = 0;
  *a4 = v32;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v29);
  return v19;
}
