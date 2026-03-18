/*
 * XREFs of ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BD420
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000361C (-CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // r12
  DMMVIDPNSOURCE *v16; // rax
  __int64 v17; // rcx
  DMMVIDPNSOURCE *v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+28h] [rbp-18h]
  char v35; // [rsp+30h] [rbp-10h]
  __int64 v36; // [rsp+70h] [rbp+30h] BYREF
  struct DMMVIDPNSOURCEMODESET *v37; // [rsp+80h] [rbp+40h] BYREF

  v33 = -1;
  v34 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 7045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7045);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7045);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = v6;
  v12[4] = a3;
  v12[5] = a4;
  if ( a3 && a4 )
  {
    *(_QWORD *)&a3->Data1 = 0LL;
    *a4 = 0LL;
    v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v6);
    if ( v14 )
    {
      v15 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(*(_QWORD *)(v14 + 48) + 384LL);
      v16 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v14 + 304), v7);
      v18 = v16;
      if ( v16 )
      {
        v36 = 0LL;
        v37 = 0LL;
        v19 = DMMVIDPNSOURCE::CreateNewCofuncModeSet(v16, &v37);
        v6 = v19;
        if ( v19 < 0 )
        {
          v32 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
          *(_QWORD *)(v32 + 24) = *((unsigned int *)v18 + 6);
          *(_QWORD *)(v32 + 32) = v6;
          WdLogEvent5_WdDmmEvent(v32);
        }
        else
        {
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v36, (__int64)v37);
          v24 = v36;
          v25 = -(__int64)(v36 != -137);
          v36 = 0LL;
          *(_QWORD *)&a3->Data1 = v24 & v25;
          LODWORD(v6) = 0;
          *a4 = v15;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v36, 0LL);
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v31 + 24) = v7;
        WdLogEvent5_WdError(v31);
        LODWORD(v6) = -1071774972;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v30 + 24) = v6;
      WdLogEvent5_WdError(v30);
      LODWORD(v6) = -1071774973;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v29 + 24) = 0LL;
    *(_QWORD *)(v29 + 32) = v6;
    WdLogEvent5_WdError(v29);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v33);
  return (unsigned int)v6;
}
