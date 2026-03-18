/*
 * XREFs of ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C01301C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000A58C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000EA44 (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        const GUID *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DMMVIDPNTARGETMODESET *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rbp
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+28h] [rbp-20h]
  char v29; // [rsp+30h] [rbp-18h]
  __int64 v30; // [rsp+60h] [rbp+18h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 6037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6037);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 6037);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 88LL) == v5 )
    {
      v19 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v19 + 24) = v7;
      WdLogEvent5_WdError(v19);
      v14 = -1071774909;
    }
    else
    {
      v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
      v10 = (struct DMMVIDPNTARGETMODESET *)v8;
      if ( v8 )
      {
        v11 = *(_QWORD *)(v8 + 112);
        if ( !v11 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v21);
        }
        v12 = *(_QWORD *)(v11 + 40);
        if ( !v12 )
        {
          v22 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v22);
          v12 = *(_QWORD *)(v11 + 40);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(v12 + 64) == v7 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, *(_QWORD *)(v7 + 48));
          DMMVIDPNTARGET::ReleaseModeSet((struct DMMVIDPNTARGETMODESET **)v11, v10);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40));
          v14 = 0;
        }
        else
        {
          v23 = WdLogNewEntry5_WdError(v13);
          v24 = *(_QWORD *)(v11 + 40);
          v25 = (_QWORD *)v23;
          if ( !v24 )
          {
            v26 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v26);
            v24 = *(_QWORD *)(v11 + 40);
          }
          v25[3] = ContainedBy<DMMVIDPN>::GetContainer(v24 + 64);
          v25[4] = v10;
          v25[5] = v7;
          WdLogEvent5_WdError(v25);
          v14 = -1071774928;
        }
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v20 + 24) = a2;
        WdLogEvent5_WdError(v20);
        v14 = -1071774967;
      }
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    v14 = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v27);
  return v14;
}
