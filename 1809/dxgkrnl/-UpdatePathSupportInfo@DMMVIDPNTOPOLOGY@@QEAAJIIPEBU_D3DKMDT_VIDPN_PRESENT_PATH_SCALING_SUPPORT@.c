/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E4E34
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E5310 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000EAE0 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000EBD4 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000F840 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000F90C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000F980 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000FA24 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v10; // rcx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *v13; // rbx
  char IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  int v24; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  v8 = a3;
  if ( ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u) )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v8);
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)Path;
    if ( Path )
    {
      IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(Path);
      v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
      if ( IsSourceAndTargetPinned )
      {
        if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v13) )
        {
          if ( VIDPN_MGR::_bShouldLogOn1277688 )
          {
            if ( (*(_DWORD *)a4 & 6) != 0 )
            {
              v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
              *(_QWORD *)(v21 + 24) = v6;
              *(_QWORD *)(v21 + 32) = v8;
              WdLogEvent5_WdWarning(v21);
              VIDPN_MGR::_bShouldLogOn1277688 = 0;
            }
          }
          v24 = 1;
          v19 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&v24;
          v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
          goto LABEL_7;
        }
        v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
      }
      v19 = a4;
LABEL_7:
      DMMVIDPNPRESENTPATH::SetScalingSupport(v15, v19);
      DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v13, a5);
      v13[42] = *a6;
      ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u);
      return 0LL;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v23[3] = v6;
    v23[4] = v8;
    v23[5] = this;
    WdLogEvent5_WdError(v23);
    return 3223192359LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    return 3221225506LL;
  }
}
