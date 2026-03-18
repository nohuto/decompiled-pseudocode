/*
 * XREFs of ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BDDC0
 * Callers:
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00BDB48 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E1BA0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02855B0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Add@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000384C (-Add@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAEQEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000F90C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000FA24 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AddPath(
        DMMVIDPNTOPOLOGY **this,
        struct DMMVIDPNPRESENTPATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  DMMVIDPNTOPOLOGY *v20; // rbx
  char *v21; // rbx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  DMMVIDPNTOPOLOGY *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax

  v4 = (int)a3;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[3] = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
  v7[4] = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
  v7[5] = *((int *)a2 + 26);
  v7[6] = ContainedBy<DMMVIDPN>::GetContainer((__int64)(this + 20));
  v7[7] = v4;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((ProtectableFromChange *)(this + 7), 1u) )
  {
    v28 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    return 3221225506LL;
  }
  v9 = *((_QWORD *)a2 + 12);
  v10 = *(_DWORD *)(v9 + 24);
  if ( DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)this, *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL), v10) )
  {
    v29 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v29 + 24) = a2;
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdWarning(v29);
    return 3223192339LL;
  }
  v14 = *(_BYTE *)(*(_QWORD *)(v9 + 96) + 406LL);
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)this, v10) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
    v26[3] = a2;
    v26[4] = this;
    v26[5] = *(unsigned int *)(v9 + 24);
    WdLogEvent5_WdDmmEvent(v26);
    return 3223192320LL;
  }
  if ( !*(_QWORD *)(v19 + 112) )
  {
    v24 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 == 1 )
    {
      v25 = WdLogNewEntry5_WdDmmEvent(v24, v15, v17, v18);
      *(_QWORD *)(v25 + 24) = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
      *(_QWORD *)(v25 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 12) + 24LL);
      WdLogEvent5_WdDmmEvent(v25);
    }
    else
    {
      if ( (_DWORD)v4 == 2 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24, v15, v17, v18);
        v31[3] = a2;
        v31[4] = this;
        v31[5] = *(unsigned int *)(v9 + 24);
        WdLogEvent5_WdDmmEvent(v31);
        return 3223192376LL;
      }
      if ( (unsigned int)(v4 - 1) > 1 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v30);
      }
    }
  }
  v20 = this[3];
  if ( v20 == (DMMVIDPNTOPOLOGY *)(this + 3) || (v21 = (char *)v20 - 8) == 0LL )
  {
LABEL_9:
    if ( Set<DMMVIDPNPRESENTPATH>::Add((__int64)this, (__int64)a2) != 1 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( *((_QWORD *)a2 + 6) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v38);
    }
    *((_QWORD *)a2 + 6) = this;
    *((_DWORD *)this + 49) |= 1 << (*((_DWORD *)a2 + 26) - 1);
    ProtectableFromChange::OnModifyingActionCompletion((ProtectableFromChange *)(this + 7), 1u);
    return 0LL;
  }
  while ( 1 )
  {
    v32 = *((_QWORD *)v21 + 11);
    v33 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 24LL);
    if ( *(_DWORD *)(v32 + 24) != (_DWORD)v33 )
      goto LABEL_27;
    if ( v14 )
      break;
    v33 = *(_QWORD *)(*((_QWORD *)v21 + 12) + 96LL);
    if ( *(_BYTE *)(v33 + 406) )
    {
      v34 = WdLogNewEntry5_WdWarning(v33, v32, v17);
      *(_QWORD *)(v34 + 24) = *((_QWORD *)v21 + 12);
      goto LABEL_34;
    }
LABEL_27:
    if ( *((_DWORD *)v21 + 26) == *((_DWORD *)a2 + 26) )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v17);
      v35[3] = a2;
      v35[4] = *((int *)a2 + 26);
      v35[5] = v9;
      v35[6] = this;
      WdLogEvent5_WdWarning(v35);
    }
    v36 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v21 + 1);
    v21 = (char *)v36 - 8;
    if ( v36 == (DMMVIDPNTOPOLOGY *)(this + 3) )
      v21 = 0LL;
    if ( !v21 )
      goto LABEL_9;
  }
  v34 = WdLogNewEntry5_WdWarning(v33, v32, v17);
  *(_QWORD *)(v34 + 24) = v9;
LABEL_34:
  *(_QWORD *)(v34 + 32) = -1071774975LL;
  WdLogEvent5_WdWarning(v34);
  return 3223192321LL;
}
