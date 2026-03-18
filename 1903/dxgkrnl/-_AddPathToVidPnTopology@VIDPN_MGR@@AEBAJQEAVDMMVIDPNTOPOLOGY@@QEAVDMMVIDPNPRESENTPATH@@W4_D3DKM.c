/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E2A60
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E6D08 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012E764 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00DFA08 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E3C04 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E3D70 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E40DC (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E5A2C (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4,
        unsigned __int8 a5)
{
  struct DMMVIDPNPRESENTPATH *v6; // rdi
  VIDPN_MGR *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 Container; // rax
  __int64 v17; // r9
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _BYTE v37[88]; // [rsp+40h] [rbp-58h] BYREF
  int v38; // [rsp+A8h] [rbp+10h] BYREF
  int v39; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v40; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a3;
  v8 = this;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !v6 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v26);
  }
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v9 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v37, (char *)a2 + 56, a3);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, a4);
  v14 = v11;
  if ( v11 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v24[3] = v9;
    v24[4] = v10;
    v24[5] = a2;
    v24[6] = v14;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v15);
    LOBYTE(v17) = a5;
    v38 = -1;
    v39 = -1;
    v18 = Container + 88;
    v40 = (struct DMMVIDPNPRESENTPATH *)Container;
    v19 = VIDPN_MGR::FormalizeVidPnChange(v8, Container & -(__int64)(Container != -88), 1LL, v17, &v38);
    v14 = v19;
    if ( v19 >= 0 )
      return 0LL;
    if ( v19 == -1071774975 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v21, v20);
      *(_QWORD *)(v28 + 24) = v9;
      *(_QWORD *)(v28 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v28);
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
      v32[5] = (unsigned __int64)v40 & -(__int64)(v18 != 0);
      v32[3] = v9;
      v32[4] = v10;
      v32[6] = v14;
      WdLogEvent5_WdError(v32);
    }
    LOBYTE(v30) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v30) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30, v29);
      WdLogEvent5_WdAssertion(v33);
    }
    LOBYTE(v31) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v37, (char *)a2 + 56, v31);
    v40 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v40) < 0 || v40 != v6 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35, v34);
      WdLogEvent5_WdAssertion(v36);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
  return (unsigned int)v14;
}
