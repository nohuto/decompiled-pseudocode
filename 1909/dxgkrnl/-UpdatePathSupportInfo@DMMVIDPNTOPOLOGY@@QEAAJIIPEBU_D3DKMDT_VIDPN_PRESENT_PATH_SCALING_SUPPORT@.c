/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E6310
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E6210 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00055DC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005650 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000571C (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C0005868 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C5C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00099F8 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *v17; // rbx
  char IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v23; // rdx
  __int64 v24; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v28; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  v8 = a3;
  if ( ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u) )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v8);
    v17 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)Path;
    if ( Path )
    {
      IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(Path);
      v19 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v17;
      if ( IsSourceAndTargetPinned )
      {
        if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v17) )
        {
          if ( VIDPN_MGR::_bShouldLogOn1277688 )
          {
            if ( (*(_DWORD *)a4 & 6) != 0 )
            {
              v24 = WdLogNewEntry5_WdWarning(v21, v20, v22);
              *(_QWORD *)(v24 + 24) = v6;
              *(_QWORD *)(v24 + 32) = v8;
              WdLogEvent5_WdWarning(v24);
              VIDPN_MGR::_bShouldLogOn1277688 = 0;
            }
          }
          v28 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)1;
          v23 = &v28;
          v19 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v17;
          goto LABEL_11;
        }
        v19 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v17;
      }
      v23 = a4;
LABEL_11:
      DMMVIDPNPRESENTPATH::SetScalingSupport(v19, v23);
      DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v17, a5);
      v17[42] = *a6;
      ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u);
      return 0LL;
    }
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
    v27[3] = v6;
    v27[4] = v8;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    return 3223192359LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    return 3221225506LL;
  }
}
