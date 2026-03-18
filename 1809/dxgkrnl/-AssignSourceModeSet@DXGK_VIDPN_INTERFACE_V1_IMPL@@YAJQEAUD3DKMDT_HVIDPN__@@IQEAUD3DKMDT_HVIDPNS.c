/*
 * XREFs of ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00BD570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000370C (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0007094 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000B2E8 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct DMMVIDPNSOURCEMODESET **v15; // rdi
  __int64 v16; // r8
  DMMVIDPNSOURCE *v17; // rax
  __int64 v18; // rcx
  DMMVIDPNSOURCE *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+28h] [rbp-20h]
  char v32; // [rsp+30h] [rbp-18h]

  v30 = -1;
  v4 = (__int64)a3;
  v31 = 0LL;
  v6 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v32 = 1;
    v30 = 7046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7046);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7046);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12 = v6;
  v11[3] = v4;
  v11[4] = v6;
  v11[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v15 = (struct DMMVIDPNSOURCEMODESET **)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      v17 = (DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v16 + 304), v6);
      v19 = v17;
      if ( v17 )
      {
        v20 = DMMVIDPNSOURCE::SetCofuncModeSet(v17, v15);
        v4 = v20;
        if ( v20 < 0 )
        {
          if ( v20 != -1071774958 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v28);
          }
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v29[3] = v15;
          v29[4] = *((unsigned int *)v19 + 6);
          v29[5] = v4;
          WdLogEvent5_WdError(v29);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v27 + 24) = v12;
        WdLogEvent5_WdError(v27);
        LODWORD(v4) = -1071774972;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v26 + 24) = v4;
      WdLogEvent5_WdError(v26);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v30);
  return (unsigned int)v4;
}
