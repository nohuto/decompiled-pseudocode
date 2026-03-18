/*
 * XREFs of ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C00DA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v14; // rdi
  char *v15; // r8
  DXGK_VIDPN_INTERFACE_V1_IMPL *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  const GUID *v25; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+28h] [rbp-40h]
  char v34; // [rsp+30h] [rbp-38h]
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v35; // [rsp+70h] [rbp+8h]

  v32 = -1;
  v6 = (unsigned int)a2;
  v33 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7048);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7048);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = v6;
  v12[5] = a3;
  v12[6] = a4;
  if ( !a3 || !a4 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v27[3] = 0LL;
    v27[4] = v6;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    v23 = -1073741811;
    goto LABEL_17;
  }
  *(_QWORD *)&a3->Data1 = 0LL;
  *a4 = 0LL;
  if ( !this || (v14 = this, *((_DWORD *)this + 16) != 1833172997) )
    v14 = 0LL;
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v23 = -1071774973;
    goto LABEL_17;
  }
  v15 = 0LL;
  v16 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 15);
  if ( v16 != (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v14 + 120) )
    v15 = (char *)v16 - 8;
  if ( !v15 )
    goto LABEL_29;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v15 + 12) + 24LL) == (_DWORD)v6 )
      break;
    v16 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v15 + 1);
    v15 = (char *)v16 - 8;
    if ( v16 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)v14 + 120) )
      v15 = 0LL;
  }
  while ( v15 );
  if ( !v15 )
  {
LABEL_29:
    v29 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = v14;
    WdLogEvent5_WdError(v29);
  }
  v35 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*((_QWORD *)v14 + 6) + 392LL);
  v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*((_QWORD *)v14 + 39), v6);
  v19 = v17;
  if ( !v17 )
  {
    v30 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v30 + 24) = v6;
    WdLogEvent5_WdError(v30);
    v23 = -1071774971;
    goto LABEL_17;
  }
  v20 = *(_QWORD *)(v17 + 104);
  if ( !v20 )
  {
    v21 = 0LL;
    goto LABEL_31;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
  v21 = *(_QWORD *)(v19 + 104);
  if ( !v21 )
  {
LABEL_31:
    v31 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v31);
  }
  v22 = v21 & -(__int64)(v21 != -137);
  v23 = 0;
  *(_QWORD *)&a3->Data1 = v22;
  *a4 = v35;
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v32);
  return v23;
}
