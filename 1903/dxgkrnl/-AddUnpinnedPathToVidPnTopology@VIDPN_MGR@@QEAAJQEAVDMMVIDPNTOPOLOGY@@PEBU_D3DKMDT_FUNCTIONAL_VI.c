/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012E764
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C012D788 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0004594 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00045CC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E2A60 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012E888 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct DMMVIDPNPRESENTPATH *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  struct DMMVIDPNPRESENTPATH *v26; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v27; // [rsp+68h] [rbp+10h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 16LL) != KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v26 = 0LL;
  v27 = 0LL;
  v9 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v27);
  v12 = v9;
  if ( v9 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v23[3] = VidPnSourceId;
    v23[4] = VidPnTargetId;
    v23[5] = v12;
  }
  else
  {
    v13 = v27;
    *((_WORD *)v27 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[44];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v26,
      (__int64 (__fastcall ***)(_QWORD, __int64))v13);
    v14 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v26, D3DKMDT_MCC_ENFORCE, 1u);
    v18 = v14;
    LODWORD(v12) = -1071774957;
    if ( v14 == -1071774957
      || (LODWORD(v12) = -1071774920, v14 == -1071774920)
      || (LODWORD(v12) = -1071774975, v14 == -1071774975) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15);
      v24[3] = VidPnSourceId;
      v24[4] = VidPnTargetId;
      v24[5] = a2;
      WdLogEvent5_WdDmmEvent(v24);
    }
    else if ( v14 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
      v25[3] = VidPnSourceId;
      v25[4] = VidPnTargetId;
      v25[5] = a2;
      v25[6] = v18;
      WdLogEvent5_WdError(v25);
      LODWORD(v12) = v18;
    }
    else
    {
      v26 = 0LL;
      LODWORD(v12) = 0;
    }
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v26);
  return (unsigned int)v12;
}
