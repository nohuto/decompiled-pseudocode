/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01368B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct VIDPN_MGR *v10; // rbx
  struct D3DKMDT_HVIDPN__ *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h]
  char v27; // [rsp+30h] [rbp-10h]
  __int64 v28; // [rsp+68h] [rbp+28h] BYREF
  __int64 v29; // [rsp+78h] [rbp+38h] BYREF

  v25 = -1;
  v26 = 0LL;
  v6 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 6053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6053);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 6053);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v23);
      }
      v9 = *((_QWORD *)v6 + 315);
      if ( v9 )
      {
        v10 = *(struct VIDPN_MGR **)(v9 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v10);
        v11 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v10 + 53);
        v28 = 0LL;
        v12 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10, &v28);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v12;
        if ( v12 < 0 )
        {
          v24 = WdLogNewEntry5_WdDmmEvent(v14, v13, v15, v16);
          *(_QWORD *)(v24 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v24);
        }
        else
        {
          v17 = v28;
          v28 = 0LL;
          *a2 = v17 & -(__int64)(v17 != -88);
          LODWORD(v6) = 0;
          *a3 = v11;
        }
        auto_rc<DMMVIDPN>::reset(&v28, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
        goto LABEL_12;
      }
      v22 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v22 + 24) = v6;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v22 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v22);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v21 + 24) = 0LL;
    *(_QWORD *)(v21 + 32) = v6;
    WdLogEvent5_WdError(v21);
    LODWORD(v6) = -1073741811;
  }
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v25);
  return (unsigned int)v6;
}
