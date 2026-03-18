/*
 * XREFs of ?CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C00223CC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017A36C (-AcquireRawDdiEnumeratorCachedSourceInfo@DMMVIDEOPRESENTSOURCESET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_SOURCE **a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _D3DKMDT_VIDEO_PRESENT_SOURCE *v22; // [rsp+30h] [rbp+8h] BYREF

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = a2;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v18);
  }
  *(_QWORD *)a2 = 0LL;
  v8 = (DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( v8 )
  {
    v22 = 0LL;
    v12 = DMMVIDEOPRESENTSOURCESET::AcquireRawDdiEnumeratorCachedSourceInfo(v8, &v22);
    v16 = v12;
    if ( v12 < 0 )
    {
      if ( v12 != -1073741801 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v21 + 24) = v16;
      WdLogEvent5_WdError(v21);
      return (unsigned int)v16;
    }
    else
    {
      *(_QWORD *)a2 = v22;
      return 0LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3223192341LL;
  }
}
