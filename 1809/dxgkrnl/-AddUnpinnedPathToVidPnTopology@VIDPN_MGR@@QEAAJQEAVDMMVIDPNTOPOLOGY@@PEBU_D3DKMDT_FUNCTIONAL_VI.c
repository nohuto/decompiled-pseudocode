/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B8048
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00037E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0003930 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BB28C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00BDB48 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 v7; // rax
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  struct DMMVIDPNPRESENTPATH *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  struct DMMVIDPNPRESENTPATH *v26; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v27; // [rsp+68h] [rbp+10h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v26 = 0LL;
  v27 = 0LL;
  v10 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v27);
  v15 = v10;
  if ( v10 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    v23[3] = VidPnSourceId;
    v23[4] = VidPnTargetId;
    v23[5] = v15;
  }
  else
  {
    v16 = v27;
    *((_WORD *)v27 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[44];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v26,
      (__int64 (__fastcall ***)(_QWORD, __int64))v16);
    v17 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v26, D3DKMDT_MCC_ENFORCE, 1u);
    v19 = v17;
    LODWORD(v15) = -1071774957;
    if ( v17 == -1071774957
      || (LODWORD(v15) = -1071774920, v17 == -1071774920)
      || (LODWORD(v15) = -1071774975, v17 == -1071774975) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v24[3] = VidPnSourceId;
      v24[4] = VidPnTargetId;
      v24[5] = a2;
      WdLogEvent5_WdDmmEvent(v24);
    }
    else if ( v17 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v25[3] = VidPnSourceId;
      v25[4] = VidPnTargetId;
      v25[5] = a2;
      v25[6] = v19;
      WdLogEvent5_WdError(v25);
      LODWORD(v15) = v19;
    }
    else
    {
      v26 = 0LL;
      LODWORD(v15) = 0;
    }
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v26);
  return (unsigned int)v15;
}
