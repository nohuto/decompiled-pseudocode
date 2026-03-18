/*
 * XREFs of ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C017EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0022EF8 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DMMVIDPNTOPOLOGY *v12; // r14
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 Container; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  DXGK_ENUM_PIVOT v31; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+38h] [rbp-18h] BYREF
  __int64 v33; // [rsp+40h] [rbp-10h]
  char v34; // [rsp+48h] [rbp-8h]

  v32 = -1;
  v33 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v34 = 1;
    v32 = 6029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6029);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 6029LL);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v12 = v8;
  if ( v8 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v6);
    if ( Path )
    {
      if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v14) < 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v29);
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v12 + 160, v17);
      v31.VidPnSourceId = v7;
      v31.VidPnTargetId = v6;
      v20 = VIDPN_MGR::FormalizeVidPnChange(
              *(_QWORD *)(Container + 48),
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              10LL,
              a4,
              &v31);
      v5 = v20;
      if ( v20 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
        v30[3] = v7;
        v30[4] = v6;
        v30[5] = Container;
        v30[6] = v5;
        WdLogEvent5_WdError(v30);
      }
      else
      {
        LODWORD(v5) = 0;
      }
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
      v28[3] = v7;
      v28[4] = v6;
      v28[5] = v5;
      WdLogEvent5_WdError(v28);
      LODWORD(v5) = -1071774937;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v27 + 24) = v5;
    WdLogEvent5_WdError(v27);
    LODWORD(v5) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v21);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v24, &EventProfilerExit, v25, v32);
  return (unsigned int)v5;
}
