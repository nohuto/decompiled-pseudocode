/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00D4E90
 * Callers:
 *     <none>
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000611C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000FA5C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0019E44 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // r13
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DMMVIDPNPRESENTPATH *v16; // rdi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v17; // r12d
  int v18; // eax
  __int64 v19; // rcx
  __int64 Container; // rax
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  _DWORD v38[2]; // [rsp+30h] [rbp-20h] BYREF
  int v39; // [rsp+38h] [rbp-18h] BYREF
  __int64 v40; // [rsp+40h] [rbp-10h]
  char v41; // [rsp+48h] [rbp-8h]

  v39 = -1;
  v5 = (__int64)this;
  v40 = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6028);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v6 == 254 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v30[3] = 254LL;
      v30[4] = v8;
      v30[5] = v7;
      v30[6] = v5;
      WdLogEvent5_WdError(v30);
      LODWORD(v5) = -1071774907;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
      v16 = Path;
      if ( Path )
      {
        v17 = *((_DWORD *)Path + 29);
        v18 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
        v5 = v18;
        if ( v18 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v32[3] = v6;
          v32[4] = v8;
          v32[5] = v7;
          v32[6] = v5;
          WdLogEvent5_WdError(v32);
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
          LOBYTE(v21) = a5;
          v38[0] = v8;
          v38[1] = v7;
          v22 = VIDPN_MGR::FormalizeVidPnChange(
                  *(_QWORD *)(Container + 48),
                  Container & -(__int64)(Container != -88),
                  9LL,
                  v21,
                  v38);
          v5 = v22;
          if ( v22 < 0 )
          {
            if ( v22 == -1071774970 )
            {
              v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
              v33[3] = v8;
              v33[4] = v7;
              v33[5] = v6;
              WdLogEvent5_WdWarning(v33);
            }
            else
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdError(v24);
              v34[3] = v6;
              v34[4] = v8;
              v34[5] = v7;
              v34[6] = v5;
              WdLogEvent5_WdError(v34);
            }
            if ( v17 == D3DKMDT_VPPR_UNPINNED )
              v35 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v16);
            else
              v35 = DMMVIDPNPRESENTPATH::PinContentRotation(v16, v17);
            if ( v35 < 0 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v36);
              WdLogEvent5_WdAssertion(v37);
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
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
        v31[3] = v8;
        v31[4] = v7;
        v31[5] = v5;
        WdLogEvent5_WdWarning(v31);
        LODWORD(v5) = -1071774937;
      }
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v29 + 24) = v5;
    WdLogEvent5_WdError(v29);
    LODWORD(v5) = -1071774976;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v39);
  return (unsigned int)v5;
}
