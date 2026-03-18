/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131B94
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6A64 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0131C2C (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rbp
  int PathSourceFromTarget; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax

  v3 = (unsigned int)a2;
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  memset(a3, 0, 0x1E8uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), (unsigned int)v3);
  if ( PathSourceFromTarget == -1 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8, v7);
    v21[3] = v3;
    v22 = *((_QWORD *)this + 6);
    v23 = *(_QWORD *)(v22 + 8);
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v24);
      v23 = *(_QWORD *)(v22 + 8);
    }
    v21[4] = *(_QWORD *)(v23 + 16);
    v21[5] = this;
    WdLogEvent5_WdDmmEvent(v21);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v25 = WdLogNewEntry5_WdAssertion(v10, v9);
      WdLogEvent5_WdAssertion(v25);
    }
    v12 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v16 = v12;
    if ( v12 < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
      v28[3] = v3;
      v29 = *((_QWORD *)this + 6);
      v30 = *(_QWORD *)(v29 + 8);
      if ( !v30 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v31);
        v30 = *(_QWORD *)(v29 + 8);
      }
      v28[4] = *(_QWORD *)(v30 + 16);
      v28[5] = this;
      v28[6] = v16;
      WdLogEvent5_WdWarning(v28);
      return (unsigned int)v16;
    }
    else
    {
      return 0LL;
    }
  }
}
