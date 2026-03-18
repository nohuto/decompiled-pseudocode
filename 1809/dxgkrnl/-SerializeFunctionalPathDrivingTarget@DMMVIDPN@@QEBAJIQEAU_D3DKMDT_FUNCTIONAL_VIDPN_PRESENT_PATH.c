/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B9074
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B910C (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rbp
  int PathSourceFromTarget; // eax
  __int64 v7; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = a2;
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  memset(a3, 0, 0x1E8uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), v3);
  if ( PathSourceFromTarget == -1 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v17[3] = v3;
    v18 = *((_QWORD *)this + 6);
    v19 = *(_QWORD *)(v18 + 8);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v20);
      v19 = *(_QWORD *)(v18 + 8);
    }
    v17[4] = *(_QWORD *)(v19 + 16);
    v17[5] = this;
    WdLogEvent5_WdDmmEvent(v17);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v21 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v21);
    }
    v9 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v13 = v9;
    if ( v9 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v23[3] = v3;
      v24 = *((_QWORD *)this + 6);
      v25 = *(_QWORD *)(v24 + 8);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v26);
        v25 = *(_QWORD *)(v24 + 8);
      }
      v23[4] = *(_QWORD *)(v25 + 16);
      v23[5] = this;
      v23[6] = v13;
      WdLogEvent5_WdWarning(v23);
      return (unsigned int)v13;
    }
    else
    {
      return 0LL;
    }
  }
}
