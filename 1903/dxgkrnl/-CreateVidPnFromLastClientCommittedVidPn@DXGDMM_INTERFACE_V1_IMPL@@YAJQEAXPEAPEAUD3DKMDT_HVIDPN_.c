/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01478D0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2F48 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // rbx
  struct D3DKMDT_HVIDPN__ *v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h]
  char v30; // [rsp+30h] [rbp-10h]
  __int64 v31; // [rsp+68h] [rbp+28h] BYREF
  __int64 v32; // [rsp+78h] [rbp+38h] BYREF

  v28 = -1;
  v29 = 0LL;
  v6 = this;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 6053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6053);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 6053LL);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v11, v10);
        WdLogEvent5_WdAssertion(v26);
      }
      v13 = *((_QWORD *)v6 + 319);
      if ( v13 )
      {
        v14 = *(struct VIDPN_MGR **)(v13 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, (__int64)v14);
        v15 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v14 + 53);
        v31 = 0LL;
        v16 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v14, &v31);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v16;
        if ( v16 < 0 )
        {
          v27 = WdLogNewEntry5_WdDmmEvent(v18, v17);
          *(_QWORD *)(v27 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v27);
        }
        else
        {
          v19 = v31;
          v31 = 0LL;
          *a2 = v19 & -(__int64)(v19 != -88);
          LODWORD(v6) = 0;
          *a3 = v15;
        }
        auto_rc<DMMVIDPN>::reset(&v31, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
        goto LABEL_12;
      }
      v25 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v25 + 24) = v6;
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v25 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v25);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = v6;
    WdLogEvent5_WdError(v24);
    LODWORD(v6) = -1073741811;
  }
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v20);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v28);
  return (unsigned int)v6;
}
