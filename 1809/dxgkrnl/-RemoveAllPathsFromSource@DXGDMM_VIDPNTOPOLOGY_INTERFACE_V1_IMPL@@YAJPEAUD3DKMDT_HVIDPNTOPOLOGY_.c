/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C0281BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00BB0F4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E4B2C (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int8 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  ApplyPermissionWithinThisScope *v17; // rcx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  DXGADAPTER *v22; // rbx
  __int64 v23; // rcx
  unsigned __int8 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  ADAPTER_DISPLAY *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v34; // [rsp+28h] [rbp-29h]
  __int64 v35; // [rsp+28h] [rbp-29h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v36; // [rsp+48h] [rbp-9h] BYREF
  int v37; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+68h] [rbp+17h]
  char v39; // [rsp+70h] [rbp+1Fh]
  _BYTE v40[32]; // [rsp+78h] [rbp+27h] BYREF

  v37 = -1;
  v38 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v39 = 1;
    v37 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v8 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v6) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v36,
      v8 + 56,
      2u,
      v7,
      v34,
      *(_QWORD *)(v8 + 40));
    v11 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v8, v4);
    v3 = v11;
    if ( v11 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v17 = (ApplyPermissionWithinThisScope *)&v36;
      v16[3] = v8;
      v16[4] = v4;
      v16[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v17);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v36);
    if ( *(_QWORD *)(v8 + 24) != v8 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
      v19 = *((_QWORD *)Container + 6);
      v20 = *(_QWORD *)(v19 + 8);
      if ( !v20 )
      {
        v21 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v21);
        v20 = *(_QWORD *)(v19 + 8);
      }
      v22 = *(DXGADAPTER **)(v20 + 16);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v22) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
      }
      LOBYTE(v23) = *(_BYTE *)(v8 + 76);
      if ( ((unsigned __int16)((2 << v23) - 1) & *(_WORD *)(v8 + 78)) != 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v26);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v40,
        v8 + 56,
        3u,
        v24,
        v35,
        *(_QWORD *)(v8 + 40));
      memset(&v36, 0, sizeof(v36));
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v36.hConstrainingVidPn = 0LL;
      else
        v36.hConstrainingVidPn = Container;
      v27 = (ADAPTER_DISPLAY *)*((_QWORD *)v22 + 315);
      v36.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v36.EnumPivot.VidPnSourceId = -1;
      v36.EnumPivot.VidPnTargetId = -1;
      v28 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v27, &v36);
      v3 = v28;
      if ( v28 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v30[3] = Container;
        v30[4] = v4;
        v30[5] = v3;
        WdLogEvent5_WdError(v30);
        v17 = (ApplyPermissionWithinThisScope *)v40;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v40);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = v3;
  WdLogEvent5_WdError(v9);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v37);
  return (unsigned int)v3;
}
