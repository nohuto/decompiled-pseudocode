/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02C6A5C
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0130024 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E7328 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02BC880 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
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
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // [rsp+80h] [rbp+40h] BYREF
  int v49; // [rsp+88h] [rbp+48h] BYREF
  int v50; // [rsp+90h] [rbp+50h] BYREF
  int v51; // [rsp+98h] [rbp+58h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160, (__int64)a2);
  v49 = 0;
  v48 = -1;
  v50 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v51 = -2;
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, (unsigned int)v3, 1, &v48, &v50, &v51, &v49);
    v11 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v26[3] = v11;
      v35 = *((_QWORD *)v6 + 1);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v36);
        v35 = *((_QWORD *)v6 + 1);
      }
      v37 = *(int *)(*(_QWORD *)(v35 + 16) + 280LL);
      v26[4] = v37;
      v38 = *((_QWORD *)v6 + 1);
      if ( !v38 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v37, v33);
        WdLogEvent5_WdAssertion(v39);
        v38 = *((_QWORD *)v6 + 1);
      }
      v26[5] = *(unsigned int *)(*(_QWORD *)(v38 + 16) + 276LL);
      v32 = *((unsigned int *)a2 + 3);
LABEL_24:
      v26[6] = v32;
      WdLogEvent5_WdError(v26);
      return (unsigned int)v11;
    }
    if ( v49 )
    {
      LODWORD(v3) = v48;
    }
    else
    {
      v3 = v48;
      v12 = VIDPN_MGR::AddPathToVidPnTopology(
              v6,
              a1,
              *((_DWORD *)a2 + 3),
              v48,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v11 = v12;
      if ( v12 != -1071774975 )
      {
        if ( v12 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
          v26[3] = v11;
          v27 = *((_QWORD *)v6 + 1);
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdAssertion(v25, v24);
            WdLogEvent5_WdAssertion(v28);
            v27 = *((_QWORD *)v6 + 1);
          }
          v29 = *(int *)(*(_QWORD *)(v27 + 16) + 280LL);
          v26[4] = v29;
          v30 = *((_QWORD *)v6 + 1);
          if ( !v30 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v29, v24);
            WdLogEvent5_WdAssertion(v31);
            v30 = *((_QWORD *)v6 + 1);
          }
          v26[5] = *(unsigned int *)(*(_QWORD *)(v30 + 16) + 276LL);
          v32 = *((unsigned int *)a2 + 3);
          v26[7] = v3;
          goto LABEL_24;
        }
        *((_DWORD *)a2 + 5) = v50;
        *((_DWORD *)a2 + 6) = v51;
        *((_DWORD *)a2 + 4) = v3;
        return (unsigned int)v11;
      }
      v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v14, v13);
      v19 = *((_QWORD *)v6 + 1);
      if ( !v19 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v17, v16);
        WdLogEvent5_WdAssertion(v20);
        v19 = *((_QWORD *)v6 + 1);
      }
      v21 = *(int *)(*(_QWORD *)(v19 + 16) + 280LL);
      v18[3] = v21;
      v22 = *((_QWORD *)v6 + 1);
      if ( !v22 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21, v16);
        WdLogEvent5_WdAssertion(v23);
        v22 = *((_QWORD *)v6 + 1);
      }
      v18[4] = *(unsigned int *)(*(_QWORD *)(v22 + 16) + 276LL);
      v18[5] = *((unsigned int *)a2 + 3);
      v18[6] = v3;
      WdLogEvent5_WdDmmEvent(v18);
    }
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8);
  v44 = *((_QWORD *)v6 + 1);
  if ( !v44 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v42, v41);
    WdLogEvent5_WdAssertion(v45);
    v44 = *((_QWORD *)v6 + 1);
  }
  v43[3] = *(int *)(*(_QWORD *)(v44 + 16) + 280LL);
  v46 = *((_QWORD *)v6 + 1);
  if ( !v46 )
  {
    v47 = WdLogNewEntry5_WdAssertion(0LL, v41);
    WdLogEvent5_WdAssertion(v47);
    v46 = *((_QWORD *)v6 + 1);
  }
  v43[4] = *(unsigned int *)(*(_QWORD *)(v46 + 16) + 276LL);
  v43[5] = *((unsigned int *)a2 + 3);
  WdLogEvent5_WdDmmEvent(v43);
  return 3223192371LL;
}
