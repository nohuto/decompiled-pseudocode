/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00E5E60
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  const GUID *v27; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-38h] BYREF
  __int64 v35; // [rsp+28h] [rbp-30h]
  char v36; // [rsp+30h] [rbp-28h]
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v37; // [rsp+60h] [rbp+8h]

  v34 = -1;
  v35 = 0LL;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7043);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7043LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = this;
  v10[4] = v7;
  v10[5] = a3;
  v10[6] = a4;
  if ( !a3 || !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v29[3] = 0LL;
    v29[4] = v7;
    v29[5] = this;
    WdLogEvent5_WdError(v29);
    v25 = -1073741811;
    goto LABEL_15;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  *a4 = 0LL;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
    v14 = this;
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v30 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    v25 = -1071774973;
    goto LABEL_15;
  }
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v14 + 96), v7) )
  {
    v31 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v31 + 24) = v7;
    *(_QWORD *)(v31 + 32) = v14;
    WdLogEvent5_WdError(v31);
  }
  v37 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*((_QWORD *)v14 + 6) + 384LL);
  v18 = IndexedSet<DMMVIDPNTARGET>::FindById(*((_QWORD *)v14 + 38), v7);
  v22 = v18;
  if ( !v18 )
  {
    v32 = WdLogNewEntry5_WdError(v20, v19, v21);
    *(_QWORD *)(v32 + 24) = v7;
    WdLogEvent5_WdError(v32);
    v25 = -1071774972;
    goto LABEL_15;
  }
  v23 = *(_QWORD *)(v18 + 104);
  if ( !v23 )
  {
    v24 = 0LL;
    goto LABEL_24;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
  v24 = *(_QWORD *)(v22 + 104);
  if ( !v24 )
  {
LABEL_24:
    v33 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v33);
  }
  *(_QWORD *)&a3->Data1 = v24 & -(__int64)(v24 != -137);
  v25 = 0;
  *a4 = v37;
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v19);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v34);
  return v25;
}
