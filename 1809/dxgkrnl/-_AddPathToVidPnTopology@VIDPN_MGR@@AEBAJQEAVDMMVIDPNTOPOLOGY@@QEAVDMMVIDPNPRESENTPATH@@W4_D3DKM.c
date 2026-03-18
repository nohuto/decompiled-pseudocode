/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00BDB48
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B8048 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BDDC0 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 Container; // rax
  __int64 v18; // r9
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
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
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !v6 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v28);
  }
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v9 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v29);
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v37, (char *)a2 + 56, a3);
  v11 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, a4);
  v16 = v11;
  if ( v11 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v26[3] = v9;
    v26[4] = v10;
    v26[5] = a2;
    v26[6] = v16;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    LOBYTE(v18) = a5;
    v38 = -1;
    v39 = -1;
    v19 = Container + 88;
    v40 = (struct DMMVIDPNPRESENTPATH *)Container;
    v20 = VIDPN_MGR::FormalizeVidPnChange(v8, Container & -(__int64)(Container != -88), 1LL, v18, &v38, 1LL);
    v16 = v20;
    if ( v20 >= 0 )
      return 0LL;
    if ( v20 == -1071774975 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v22, v21, v23, v24);
      *(_QWORD *)(v30 + 24) = v9;
      *(_QWORD *)(v30 + 32) = v10;
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v33[5] = (unsigned __int64)v40 & -(__int64)(v19 != 0);
      v33[3] = v9;
      v33[4] = v10;
      v33[6] = v16;
      WdLogEvent5_WdError(v33);
    }
    LOBYTE(v31) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v31) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v34);
    }
    LOBYTE(v32) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v37, (char *)a2 + 56, v32);
    v40 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v9, v10, &v40) < 0 || v40 != v6 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v36);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
  return (unsigned int)v16;
}
