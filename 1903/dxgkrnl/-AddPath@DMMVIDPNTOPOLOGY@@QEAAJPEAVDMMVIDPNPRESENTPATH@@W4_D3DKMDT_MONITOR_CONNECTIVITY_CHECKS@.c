/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E5A2C
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E2A60 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E3680 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BD920 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000561C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00058A8 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005900 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0005938 (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0019114 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a3)
{
  __int64 v3; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  DMMVIDPNTOPOLOGY *v21; // rbx
  char *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  DMMVIDPNTOPOLOGY *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

  v3 = a3;
  if ( !a2 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v29);
  }
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v6[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7 = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v6[4] = v7;
  v6[5] = *((int *)a2 + 26);
  v6[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)(this + 20), v7);
  v6[7] = v3;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((ProtectableFromChange *)(this + 7), 1u) )
  {
    v30 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    return 3221225506LL;
  }
  v11 = *((_QWORD *)a2 + 12);
  v12 = *(_DWORD *)(v11 + 24);
  if ( DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL), v12) )
  {
    v31 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = this;
    WdLogEvent5_WdWarning(v31);
    return 3223192339LL;
  }
  v16 = *(_BYTE *)(*(_QWORD *)(v11 + 96) + 406LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v12) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v17);
    v26[3] = a2;
    v26[4] = this;
    v26[5] = *(unsigned int *)(v11 + 24);
    WdLogEvent5_WdDmmEvent(v26);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v20 + 112) )
  {
    v27 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 == 1 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v27, v17);
      *(_QWORD *)(v28 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v28 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v28);
    }
    else
    {
      if ( (_DWORD)v3 == 2 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27, v17);
        v33[3] = a2;
        v33[4] = this;
        v33[5] = *(unsigned int *)(v11 + 24);
        WdLogEvent5_WdDmmEvent(v33);
        return 3223192376LL;
      }
      if ( (unsigned int)(v3 - 1) > 1 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v27, v17);
        WdLogEvent5_WdAssertion(v32);
      }
    }
  }
  v21 = this[3];
  if ( v21 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v22 = (char *)v21 - 8) == 0LL )
  {
LABEL_9:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( *((_QWORD *)a2 + 6) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v40);
    }
    *((_QWORD *)a2 + 6) = this;
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    v34 = *((_QWORD *)v22 + 11);
    v35 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v34 + 24) != (_DWORD)v35 )
      goto LABEL_27;
    if ( v16 )
      break;
    v35 = *(_QWORD *)(*((_QWORD *)v22 + 12) + 96LL);
    if ( *(_BYTE *)(v35 + 406) )
    {
      v36 = WdLogNewEntry5_WdWarning(v35, v34, v19);
      *(_QWORD *)(v36 + 24) = *((_QWORD *)v22 + 12);
      goto LABEL_34;
    }
LABEL_27:
    if ( *((_DWORD *)v22 + 26) == *((_DWORD *)a2 + 26) )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v19);
      v37[3] = a2;
      v37[4] = *((int *)a2 + 26);
      v37[5] = v11;
      v37[6] = this;
      WdLogEvent5_WdWarning(v37);
    }
    v38 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v22 + 1);
    v22 = (char *)v38 - 8;
    if ( v38 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v22 = 0LL;
    if ( !v22 )
      goto LABEL_9;
  }
  v36 = WdLogNewEntry5_WdWarning(v35, v34, v19);
  *(_QWORD *)(v36 + 24) = v11;
LABEL_34:
  *(_QWORD *)(v36 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v36);
  return 3223192321LL;
}
