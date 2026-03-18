/*
 * XREFs of ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C0235D74
 * Callers:
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C0235A44 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C02357C8 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0235918 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 *     ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C0236CEC (-ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGD.c)
 */

__int64 __fastcall AugmentVidPnTopologyOnNoLkg(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        void *a3,
        const struct _DXGDMM_INTERFACE *a4,
        unsigned int a5,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a6,
        unsigned int a7,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a8,
        unsigned __int64 *const a9,
        unsigned int *const a10)
{
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v18; // esi
  __int64 v19; // rax
  unsigned __int64 *v20; // r13
  __int64 v21; // rax
  unsigned int *v22; // r14
  int AvailableTarget; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rsi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v51; // [rsp+20h] [rbp-48h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v52; // [rsp+20h] [rbp-48h]

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v14 + 24) = 3112LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v15 + 24) = 3113LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 3114LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 3115LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = -1;
  if ( a5 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v19 + 24) = 3116LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = a9;
  if ( !a9 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v21 + 24) = 3117LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *v20 = 0LL;
  v22 = a10;
  if ( a10 )
    *a10 = -1;
  a6 = -1;
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, (__int64)a4, v51, 2u);
  v27 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v28 = WdLogNewEntry5_WdDmmEvent(v25, v24);
    *(_QWORD *)(v28 + 24) = a1;
    *(_QWORD *)(v28 + 32) = a5;
    WdLogEvent5_WdDmmEvent(v28);
    v30 = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, v29, v52, 1u);
    v34 = v30;
    if ( v30 == -1071774925 )
    {
      v35 = WdLogNewEntry5_WdDmmEvent(v32, v31);
      *(_QWORD *)(v35 + 24) = a1;
      *(_QWORD *)(v35 + 32) = a5;
      WdLogEvent5_WdDmmEvent(v35);
      a7 = -1;
      v36 = ReclaimClonedVidPnTarget(a4, a3, a1, a2, a8, &a7, (unsigned int *const)&a6);
      v34 = v36;
      if ( v36 == -1071774925 )
      {
        v37 = WdLogNewEntry5_WdTrace(v32, v31);
        *(_QWORD *)(v37 + 24) = a1;
        *(_QWORD *)(v37 + 32) = a5;
        return 3223192371LL;
      }
      if ( v36 >= 0 )
      {
        if ( a7 == -1 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v32, v31);
          *(_QWORD *)(v39 + 24) = 3243LL;
          WdLogEvent5_WdAssertion(v39);
        }
        v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31);
        v41 = a7;
        v40[3] = a7;
        v40[4] = a1;
        v40[5] = a5;
        WdLogEvent5_WdDmmEvent(v40);
        v42 = AddPresentPath(a1, a2, a5, a7);
        v46 = v42;
        if ( v42 == -1071774975 || v42 == -1071774920 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v44, v43);
          v47[3] = a5;
          v47[4] = v41;
          v47[5] = a3;
          WdLogEvent5_WdDmmEvent(v47);
          return 3223192371LL;
        }
        if ( v42 < 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
          v48[3] = a5;
          v48[4] = v41;
          v48[5] = a1;
          v48[6] = v46;
          WdLogEvent5_WdError(v48);
          return (unsigned int)v46;
        }
        v18 = a6;
        goto LABEL_29;
      }
LABEL_33:
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
      v49[3] = a1;
      v49[4] = a5;
      v49[5] = v34;
      WdLogEvent5_WdError(v49);
      return (unsigned int)v34;
    }
    if ( v30 < 0 )
      goto LABEL_33;
  }
  else if ( AvailableTarget < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26);
    v50[4] = a5;
    v50[3] = a1;
    v50[5] = v27;
    WdLogEvent5_WdError(v50);
    return (unsigned int)v27;
  }
LABEL_29:
  *v20 = 1LL;
  if ( v22 )
    *v22 = v18;
  return 0LL;
}
