/*
 * XREFs of ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C027D558
 * Callers:
 *     ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C027A488 (-DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z @ 0x1C01CD270 (-DdiQueryVidPnHWCapability@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_QUERYVIDPNHWCAPABILITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_HW_CAPABILITY *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char *v18; // r8
  __int64 v19; // r9
  D3DKMDT_HVIDPN v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID PathSourceFromTarget; // eax
  __int64 v28; // rdx
  const GUID *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  ADAPTER_DISPLAY *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v38; // rax
  _DXGKARG_QUERYVIDPNHWCAPABILITY v39; // [rsp+20h] [rbp-20h] BYREF
  D3DKMDT_HVIDPN v40; // [rsp+70h] [rbp+30h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 1);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)this + 1);
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v8 + 16)) >= 1105 )
  {
    v14 = *((_QWORD *)this + 11);
    v40 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *((_QWORD *)this + 11);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v40, v15);
    v20 = v40;
    if ( v40 )
    {
      if ( v40 == (D3DKMDT_HVIDPN)-96LL )
      {
        v26 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v26);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                               (DMMVIDPNTOPOLOGY *)(v20 + 24),
                               (unsigned int)v4,
                               v18);
      if ( PathSourceFromTarget != -1 )
      {
        memset(&v39, 0, sizeof(v39));
        if ( v20 == (D3DKMDT_HVIDPN)-88LL )
          v39.hFunctionalVidPn = 0LL;
        else
          v39.hFunctionalVidPn = v20;
        v39.SourceId = PathSourceFromTarget;
        v32 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
        v39.TargetId = v4;
        if ( !v32 )
        {
          v33 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v33);
          v32 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 1);
        }
        v34 = ADAPTER_DISPLAY::DdiQueryVidPnHWCapability(v32, &v39, v29);
        v31 = v34;
        if ( v34 >= 0 )
        {
          *a3 = v39.VidPnHWCaps;
LABEL_27:
          auto_rc<DMMVIDPN const>::reset((__int64 *)&v40, 0LL);
          return v3;
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v36[3] = v39.TargetId;
        v36[4] = v39.SourceId;
        v36[5] = v39.hFunctionalVidPn;
        v36[6] = v31;
        WdLogEvent5_WdError(v36);
LABEL_26:
        v3 = v31;
        goto LABEL_27;
      }
      v25 = WdLogNewEntry5_WdDmmEvent(0xFFFFFFFFLL, v28, v29, v30);
      *(_QWORD *)(v25 + 24) = v4;
    }
    else
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v17, v16, v18, v19);
      v22 = *((_QWORD *)this + 1);
      v23 = v21;
      if ( !v22 )
      {
        v24 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v24);
        v22 = *((_QWORD *)this + 1);
      }
      *(_QWORD *)(v23 + 24) = *(_QWORD *)(v22 + 16);
      v25 = v23;
    }
    WdLogEvent5_WdDmmEvent(v25);
    LODWORD(v31) = -1071774937;
    goto LABEL_26;
  }
  v38 = WdLogNewEntry5_WdDmmEvent(v11, v10, v12, v13);
  *(_QWORD *)(v38 + 24) = this;
  WdLogEvent5_WdDmmEvent(v38);
  return 3221225659LL;
}
