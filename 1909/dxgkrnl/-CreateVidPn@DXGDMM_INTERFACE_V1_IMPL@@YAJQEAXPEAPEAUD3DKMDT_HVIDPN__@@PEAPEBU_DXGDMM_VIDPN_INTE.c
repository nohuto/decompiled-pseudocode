/*
 * XREFs of ?CreateVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02B8810
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  struct VIDPN_MGR *v18; // rbx
  struct D3DKMDT_HVIDPN__ *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
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
    v28 = 6052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 6052);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 6052LL);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v16);
      }
      v17 = *((_QWORD *)v6 + 319);
      if ( v17 )
      {
        v18 = *(struct VIDPN_MGR **)(v17 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, (__int64)v18);
        v19 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v18 + 53);
        v31 = 0LL;
        v20 = VIDPN_MGR::CreateClientVidPn(v18, &v31);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v20;
        if ( v20 >= 0 )
        {
          v24 = v31;
          v31 = 0LL;
          *a2 = v24 & -(__int64)(v24 != -88);
          LODWORD(v6) = 0;
          *a3 = v19;
        }
        else
        {
          v23 = WdLogNewEntry5_WdDmmEvent(v22, v21);
          *(_QWORD *)(v23 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v23);
        }
        auto_rc<DMMVIDPN>::reset(&v31, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
        goto LABEL_19;
      }
      v12 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v12 + 24) = v6;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v8, v7, v9);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v12);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = v6;
    WdLogEvent5_WdError(v10);
    LODWORD(v6) = -1073741811;
  }
LABEL_19:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v11);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v28);
  return (unsigned int)v6;
}
