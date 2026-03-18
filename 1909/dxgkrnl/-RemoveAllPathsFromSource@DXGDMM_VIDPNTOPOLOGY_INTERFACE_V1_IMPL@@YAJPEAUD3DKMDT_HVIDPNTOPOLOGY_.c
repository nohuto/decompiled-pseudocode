/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C02BA000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058A0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00E4414 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0131E20 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  ApplyPermissionWithinThisScope *v19; // rcx
  __int64 v20; // rdx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  DXGADAPTER *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  ADAPTER_DISPLAY *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v40; // [rsp+28h] [rbp-29h]
  __int64 v41; // [rsp+28h] [rbp-29h]
  int v42; // [rsp+48h] [rbp-9h] BYREF
  __int64 v43; // [rsp+50h] [rbp-1h]
  char v44; // [rsp+58h] [rbp+7h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v45; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v46[32]; // [rsp+78h] [rbp+27h] BYREF

  v42 = -1;
  v43 = 0LL;
  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6025);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 6025LL);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v10 = v5;
  if ( v5 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v13);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v45,
      v10 + 56,
      2u,
      v9,
      v40,
      *(_QWORD *)(v10 + 40));
    v14 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((char **)v10, v4);
    v3 = v14;
    if ( v14 < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
      v19 = (ApplyPermissionWithinThisScope *)&v45;
      v17[3] = v10;
      v17[4] = v4;
      v17[5] = v3;
LABEL_23:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v19, v18);
      goto LABEL_26;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v45, v15);
    if ( *(_QWORD *)(v10 + 24) != v10 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v10 + 160, v12);
      v22 = *((_QWORD *)Container + 6);
      v23 = *(_QWORD *)(v22 + 8);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdAssertion(0LL, v20);
        WdLogEvent5_WdAssertion(v24);
        v23 = *(_QWORD *)(v22 + 8);
      }
      v25 = *(DXGADAPTER **)(v23 + 16);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v25) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v29);
      }
      LOBYTE(v27) = *(_BYTE *)(v10 + 76);
      if ( ((unsigned __int16)((2 << v27) - 1) & *(_WORD *)(v10 + 78)) != 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v30);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v46,
        v10 + 56,
        3u,
        v28,
        v41,
        *(_QWORD *)(v10 + 40));
      *((_DWORD *)&v45.EnumPivot + 2) = 0;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v45.hConstrainingVidPn = 0LL;
      else
        v45.hConstrainingVidPn = Container;
      v31 = (ADAPTER_DISPLAY *)*((_QWORD *)v25 + 319);
      v45.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v45.EnumPivot.VidPnSourceId = -1;
      v45.EnumPivot.VidPnTargetId = -1;
      v32 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v31, &v45);
      v3 = v32;
      if ( v32 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
        v36[3] = Container;
        v36[4] = v4;
        v36[5] = v3;
        WdLogEvent5_WdError(v36);
        v19 = (ApplyPermissionWithinThisScope *)v46;
        goto LABEL_23;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v46, v33);
    }
    LODWORD(v3) = 0;
    goto LABEL_26;
  }
  v11 = WdLogNewEntry5_WdError(v7, v6, v8);
  *(_QWORD *)(v11 + 24) = v3;
  WdLogEvent5_WdError(v11);
  LODWORD(v3) = -1071774976;
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v12);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v42);
  return (unsigned int)v3;
}
