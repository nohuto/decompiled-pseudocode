/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C014AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  const GUID *v29; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-38h] BYREF
  __int64 v38; // [rsp+28h] [rbp-30h]
  char v39; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v40; // [rsp+70h] [rbp+18h]

  v37 = -1;
  v38 = 0LL;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 6034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6034);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 6034LL);
  if ( !a3 || !a4 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v31[3] = 0LL;
    v31[4] = v7;
    v31[5] = this;
    WdLogEvent5_WdError(v31);
    v27 = -1073741811;
    goto LABEL_12;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  *a4 = 0LL;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v15 = v11;
  if ( !v11 )
  {
    v32 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdError(v32);
    v27 = -1071774973;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 48) + 88LL) == v11 )
  {
    v33 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v33 + 24) = v7;
    *(_QWORD *)(v33 + 32) = v15;
    WdLogEvent5_WdError(v33);
    v27 = -1071774909;
    goto LABEL_12;
  }
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v11 + 96), v7) )
  {
    v34 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v34 + 24) = v7;
    *(_QWORD *)(v34 + 32) = v15;
    WdLogEvent5_WdError(v34);
    v27 = -1071774919;
    goto LABEL_12;
  }
  v40 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v19 + 440);
  v20 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v15 + 304), v7);
  v24 = v20;
  if ( !v20 )
  {
    v35 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v35 + 24) = v7;
    *(_QWORD *)(v35 + 32) = v15;
    WdLogEvent5_WdError(v35);
    v27 = -1071774972;
    goto LABEL_12;
  }
  v25 = *(_QWORD *)(v20 + 104);
  if ( !v25 )
  {
    v26 = 0LL;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
  v26 = *(_QWORD *)(v24 + 104);
  if ( !v26 )
  {
LABEL_22:
    v36 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v36);
  }
  *(_QWORD *)&a3->Data1 = v26 & -(__int64)(v26 != -137);
  v27 = 0;
  *a4 = v40;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v21);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v37);
  return v27;
}
