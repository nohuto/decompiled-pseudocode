/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C028D5F0
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C028445C (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r15
  __int64 Container; // rax
  VIDPN_MGR *v6; // rbx
  int FirstAvailableTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // [rsp+80h] [rbp+40h] BYREF
  int v47; // [rsp+88h] [rbp+48h] BYREF
  int v48; // [rsp+90h] [rbp+50h] BYREF
  int v49; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v47 = 0;
  v46 = -1;
  v48 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v49 = -2;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, v3, 1, &v46, &v48, &v49, &v47);
    v12 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v26[3] = v12;
      v34 = *((_QWORD *)v6 + 1);
      if ( !v34 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v35);
        v34 = *((_QWORD *)v6 + 1);
      }
      v36 = *(int *)(*(_QWORD *)(v34 + 16) + 280LL);
      v26[4] = v36;
      v37 = *((_QWORD *)v6 + 1);
      if ( !v37 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v36);
        WdLogEvent5_WdAssertion(v38);
        v37 = *((_QWORD *)v6 + 1);
      }
      v26[5] = *(unsigned int *)(*(_QWORD *)(v37 + 16) + 276LL);
      v32 = *((unsigned int *)a2 + 3);
LABEL_24:
      v26[6] = v32;
      WdLogEvent5_WdError(v26);
      return (unsigned int)v12;
    }
    if ( v47 )
    {
      LODWORD(v3) = v46;
    }
    else
    {
      v3 = v46;
      v13 = VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              a1,
              *((_DWORD *)a2 + 3),
              v46,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v13;
      if ( v13 != -1071774975 )
      {
        if ( v13 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v26[3] = v12;
          v27 = *((_QWORD *)v6 + 1);
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v25);
            WdLogEvent5_WdAssertion(v28);
            v27 = *((_QWORD *)v6 + 1);
          }
          v29 = *(int *)(*(_QWORD *)(v27 + 16) + 280LL);
          v26[4] = v29;
          v30 = *((_QWORD *)v6 + 1);
          if ( !v30 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v29);
            WdLogEvent5_WdAssertion(v31);
            v30 = *((_QWORD *)v6 + 1);
          }
          v26[5] = *(unsigned int *)(*(_QWORD *)(v30 + 16) + 276LL);
          v32 = *((unsigned int *)a2 + 3);
          v26[7] = v3;
          goto LABEL_24;
        }
        *((_DWORD *)a2 + 5) = v48;
        *((_DWORD *)a2 + 6) = v49;
        *((_DWORD *)a2 + 4) = v3;
        return (unsigned int)v12;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15, v14, v16, v17);
      v20 = *((_QWORD *)v6 + 1);
      if ( !v20 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v21);
        v20 = *((_QWORD *)v6 + 1);
      }
      v22 = *(int *)(*(_QWORD *)(v20 + 16) + 280LL);
      v19[3] = v22;
      v23 = *((_QWORD *)v6 + 1);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v24);
        v23 = *((_QWORD *)v6 + 1);
      }
      v19[4] = *(unsigned int *)(*(_QWORD *)(v23 + 16) + 276LL);
      v19[5] = *((unsigned int *)a2 + 3);
      v19[6] = v3;
      WdLogEvent5_WdDmmEvent(v19);
    }
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
  v42 = *((_QWORD *)v6 + 1);
  if ( !v42 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v40);
    WdLogEvent5_WdAssertion(v43);
    v42 = *((_QWORD *)v6 + 1);
  }
  v41[3] = *(int *)(*(_QWORD *)(v42 + 16) + 280LL);
  v44 = *((_QWORD *)v6 + 1);
  if ( !v44 )
  {
    v45 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v45);
    v44 = *((_QWORD *)v6 + 1);
  }
  v41[4] = *(unsigned int *)(*(_QWORD *)(v44 + 16) + 276LL);
  v41[5] = *((unsigned int *)a2 + 3);
  WdLogEvent5_WdDmmEvent(v41);
  return 3223192371LL;
}
