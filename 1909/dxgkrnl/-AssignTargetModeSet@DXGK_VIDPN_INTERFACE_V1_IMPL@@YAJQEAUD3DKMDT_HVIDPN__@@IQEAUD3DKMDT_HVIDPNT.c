/*
 * XREFs of ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0141550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0006424 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0019610 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNTARGETMODESET **v15; // rdi
  __int64 v16; // r8
  DMMVIDPNTARGET *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  DMMVIDPNTARGET *v21; // rsi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  int v34; // [rsp+20h] [rbp-28h] BYREF
  __int64 v35; // [rsp+28h] [rbp-20h]
  char v36; // [rsp+30h] [rbp-18h]

  v34 = -1;
  v4 = (__int64)a3;
  v35 = 0LL;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 7051;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7051);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 7051LL);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v10 = v6;
  v9[3] = v4;
  v9[4] = v6;
  v9[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v15 = (struct DMMVIDPNTARGETMODESET **)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      v17 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v16 + 312), v6);
      v21 = v17;
      if ( v17 )
      {
        v22 = DMMVIDPNTARGET::SetCofuncModeSet(v17, v15, v20);
        v4 = v22;
        if ( v22 < 0 )
        {
          if ( v22 != -1071774958 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v24, v23);
            WdLogEvent5_WdAssertion(v32);
          }
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
          v33[3] = v15;
          v33[4] = *((unsigned int *)v21 + 6);
          v33[5] = v4;
          WdLogEvent5_WdError(v33);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v19, v18, v20);
        *(_QWORD *)(v31 + 24) = v10;
        WdLogEvent5_WdError(v31);
        LODWORD(v4) = -1071774971;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v14, v13, v16);
      *(_QWORD *)(v30 + 24) = v4;
      WdLogEvent5_WdError(v30);
      LODWORD(v4) = -1071774967;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v12, v11, 0LL);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v23);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v34);
  return (unsigned int)v4;
}
