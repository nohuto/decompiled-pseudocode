/*
 * XREFs of ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C013A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0019E44 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3,
        char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // r14
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 Container; // r14
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25[2]; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  char v28; // [rsp+48h] [rbp-8h]

  v26 = -1;
  v27 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 6029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6029);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6029);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v10 = v8;
  if ( v8 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v6);
    if ( Path )
    {
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(Path) < 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v23);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v10 + 160);
      v25[0] = v7;
      LOBYTE(v15) = a4;
      v25[1] = v6;
      v16 = VIDPN_MGR::FormalizeVidPnChange(
              *(_QWORD *)(Container + 48),
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              10LL,
              v15,
              v25);
      v5 = v16;
      if ( v16 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v24[3] = v7;
        v24[4] = v6;
        v24[5] = Container;
        v24[6] = v5;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        LODWORD(v5) = 0;
      }
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v22[3] = v7;
      v22[4] = v6;
      v22[5] = v5;
      WdLogEvent5_WdError(v22);
      LODWORD(v5) = -1071774937;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = v5;
    WdLogEvent5_WdError(v21);
    LODWORD(v5) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v26);
  return (unsigned int)v5;
}
