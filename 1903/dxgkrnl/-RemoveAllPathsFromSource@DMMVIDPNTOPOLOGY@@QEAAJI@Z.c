/*
 * XREFs of ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C012E2A8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C012D788 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C02B9BF0 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02BA210 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005570 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00DFA08 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(char **this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char i; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)this, a2) )
  {
    v23 = -1;
    for ( i = 0; ; i = 1 )
    {
      v7 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v2, 0LL, &v23);
      v11 = v7;
      if ( v7 == -1071774919 )
      {
        v16 = WdLogNewEntry5_WdTrace(v9, v8);
        *(_QWORD *)(v16 + 24) = v2;
        *(_QWORD *)(v16 + 32) = this;
        return i == 0 ? 0xC01E0339 : 0;
      }
      if ( v7 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
        v22[3] = v2;
        v22[4] = this;
        v22[5] = v11;
        WdLogEvent5_WdError(v22);
        return (unsigned int)v11;
      }
      v12 = v23;
      if ( v23 == -1 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v9, v8);
        WdLogEvent5_WdAssertion(v19);
      }
      v13 = DMMVIDPNTOPOLOGY::RemovePath((DMMVIDPNTOPOLOGY *)this, v2, v12, 0LL);
      v11 = v13;
      if ( v13 < 0 )
        break;
    }
    if ( v13 != -1073741790 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    v21[3] = v2;
    v21[4] = v12;
    v21[5] = v11;
    return (unsigned int)v11;
  }
  else
  {
    v18 = WdLogNewEntry5_WdTrace(v5, v4);
    *(_QWORD *)(v18 + 24) = v2;
    *(_QWORD *)(v18 + 32) = this;
    return 3223192377LL;
  }
}
