/*
 * XREFs of ?AcquireTargetSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C02B7FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireTargetSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  char v25; // [rsp+30h] [rbp-18h]
  struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *v26; // [rsp+58h] [rbp+10h]

  v23 = -1;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 6050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6050);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6050LL);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15, v14);
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = *((_QWORD *)this + 319);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 88);
        v26 = *(struct D3DKMDT_HVIDEOPRESENTTARGETSET__ **)(v19 + 416);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 80) + 72LL));
        v11 = *(_QWORD *)(v19 + 80);
        *a2 = v11 & -(__int64)(v11 != -112);
        v12 = 0;
        *a3 = v26;
        goto LABEL_16;
      }
      v13 = WdLogNewEntry5_WdError(v15, 0LL, v16);
      *(_QWORD *)(v13 + 24) = this;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v13);
    v12 = -1071775742;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdError(v10);
    v12 = -1073741811;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v11);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v23);
  return v12;
}
