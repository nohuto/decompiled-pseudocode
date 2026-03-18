/*
 * XREFs of ?ReleaseSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C02BFB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C002241C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017E00C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  DMMVIDEOPRESENTSOURCESET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v11 = (DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v11, a2);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      return 3223192341LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return 3223192324LL;
  }
}
