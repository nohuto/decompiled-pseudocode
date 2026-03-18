/*
 * XREFs of ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C02B9EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6134 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemovePath(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3,
        char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DMMVIDPNTOPOLOGY *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 Container; // rax
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  int v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h]
  char v24; // [rsp+40h] [rbp-18h]

  v22 = -1;
  v23 = 0LL;
  v5 = (__int64)this;
  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v24 = 1;
    v22 = 6024;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6024);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6024LL);
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v12 = (struct DMMVIDPNTOPOLOGY *)v8;
  if ( v8 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v8 + 160, v9);
    v16 = VIDPN_MGR::RemovePathFromVidPnTopology(*(VIDPN_MGR **)(Container + 48), v12, v7, v6, a4);
    v5 = v16;
    if ( v16 >= 0 )
    {
      LODWORD(v5) = 0;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v14);
      v18[3] = v7;
      v18[4] = v6;
      v18[5] = v12;
      v18[6] = v5;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v5;
    WdLogEvent5_WdError(v13);
    LODWORD(v5) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v14);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v22);
  return (unsigned int)v5;
}
