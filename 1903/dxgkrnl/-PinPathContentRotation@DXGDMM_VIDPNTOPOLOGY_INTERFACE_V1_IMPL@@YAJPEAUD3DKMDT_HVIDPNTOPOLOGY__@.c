/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0143AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003E38 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00058E0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0022EF8 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        const GUID *a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r14
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNTOPOLOGY *v13; // r13
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DMMVIDPNPRESENTPATH *v18; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v19; // r12d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 Container; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  DXGK_ENUM_PIVOT v42; // [rsp+30h] [rbp-20h] BYREF
  int v43; // [rsp+38h] [rbp-18h] BYREF
  __int64 v44; // [rsp+40h] [rbp-10h]
  char v45; // [rsp+48h] [rbp-8h]

  v43 = -1;
  v5 = (__int64)this;
  v44 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 6028LL);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v13 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v6 == 254 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
      v33[3] = 254LL;
      v33[4] = v8;
      v33[5] = v7;
      v33[6] = v5;
      WdLogEvent5_WdError(v33);
      LODWORD(v5) = -1071774907;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      v18 = Path;
      if ( Path )
      {
        v19 = *((_DWORD *)Path + 29);
        v20 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
        v5 = v20;
        if ( v20 < 0 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
          v35[3] = v6;
          v35[4] = v8;
          v35[5] = v7;
          v35[6] = v5;
          WdLogEvent5_WdError(v35);
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v13 + 160, v21);
          v42.VidPnSourceId = v8;
          v42.VidPnTargetId = v7;
          v25 = VIDPN_MGR::FormalizeVidPnChange(
                  *(_QWORD *)(Container + 48),
                  (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
                  9LL,
                  a5,
                  &v42);
          v5 = v25;
          if ( v25 < 0 )
          {
            if ( v25 == -1071774970 )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
              v36[3] = v8;
              v36[4] = v7;
              v36[5] = v6;
              WdLogEvent5_WdWarning(v36);
            }
            else
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
              v38[3] = v6;
              v38[4] = v8;
              v38[5] = v7;
              v38[6] = v5;
              WdLogEvent5_WdError(v38);
            }
            if ( v19 == D3DKMDT_VPPR_UNPINNED )
              v39 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v18, v37);
            else
              v39 = DMMVIDPNPRESENTPATH::PinContentRotation(v18, v19);
            if ( v39 < 0 )
            {
              v41 = WdLogNewEntry5_WdAssertion(v40, v26);
              WdLogEvent5_WdAssertion(v41);
            }
          }
          else
          {
            LODWORD(v5) = 0;
          }
        }
      }
      else
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
        v34[3] = v8;
        v34[4] = v7;
        v34[5] = v5;
        WdLogEvent5_WdWarning(v34);
        LODWORD(v5) = -1071774937;
      }
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v32 + 24) = v5;
    WdLogEvent5_WdError(v32);
    LODWORD(v5) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v26);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v43);
  return (unsigned int)v5;
}
