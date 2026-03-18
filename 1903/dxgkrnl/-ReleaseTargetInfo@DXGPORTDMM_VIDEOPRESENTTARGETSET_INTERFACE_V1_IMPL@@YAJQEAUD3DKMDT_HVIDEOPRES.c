/*
 * XREFs of ?ReleaseTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C02BFB10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C002206C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0179208 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  DMMVIDEOPRESENTTARGETSET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v11 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v11, a2);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      return 3223192342LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return 3223192325LL;
  }
}
