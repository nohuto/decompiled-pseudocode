/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00DF320
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003FEC (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C00054F0 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        GUID *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // r12
  DMMVIDPNSOURCE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  DMMVIDPNSOURCE *v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-20h] BYREF
  __int64 v37; // [rsp+28h] [rbp-18h]
  char v38; // [rsp+30h] [rbp-10h]
  __int64 v39; // [rsp+70h] [rbp+30h] BYREF
  struct DMMVIDPNSOURCEMODESET *v40; // [rsp+80h] [rbp+40h] BYREF

  v36 = -1;
  v37 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 7045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7045);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 7045LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = v6;
  v10[4] = a3;
  v10[5] = a4;
  if ( a3 && a4 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    *a4 = 0LL;
    v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v6);
    if ( v14 )
    {
      v17 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*(_QWORD *)(v14 + 48) + 384LL);
      v18 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v14 + 304), v7);
      v22 = v18;
      if ( v18 )
      {
        v39 = 0LL;
        v40 = 0LL;
        v23 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v18, &v40, v21);
        v6 = v23;
        if ( v23 < 0 )
        {
          v35 = WdLogNewEntry5_WdDmmEvent(v25, v24);
          *(_QWORD *)(v35 + 24) = *((unsigned int *)v22 + 6);
          *(_QWORD *)(v35 + 32) = v6;
          WdLogEvent5_WdDmmEvent(v35);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v39, (__int64)v40);
          v26 = v39;
          v27 = -(__int64)(v39 != -137);
          v39 = 0LL;
          *(_QWORD *)&a3->Data1 = v26 & v27;
          LODWORD(v6) = 0;
          *a4 = v17;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v39, 0LL);
      }
      else
      {
        v34 = WdLogNewEntry5_WdError(v20, v19, v21);
        *(_QWORD *)(v34 + 24) = v7;
        WdLogEvent5_WdError(v34);
        LODWORD(v6) = -1071774972;
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(0LL, v15, v16);
      *(_QWORD *)(v33 + 24) = v6;
      WdLogEvent5_WdError(v33);
      LODWORD(v6) = -1071774973;
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v32 + 24) = 0LL;
    *(_QWORD *)(v32 + 32) = v6;
    WdLogEvent5_WdError(v32);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v28);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v36);
  return (unsigned int)v6;
}
