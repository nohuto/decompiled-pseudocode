/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017DF40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C00043F8 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C002231C (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x1C002241C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C017E00C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C017E04C (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTSOURCESET *v11; // rbx
  __int64 v12; // r8
  DMMVIDEOPRESENTSOURCE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  DMMVIDEOPRESENTSOURCE *v27; // [rsp+30h] [rbp+8h] BYREF
  DMMVIDEOPRESENTSOURCE *v28; // [rsp+38h] [rbp+10h] BYREF

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v11 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v13 = (DMMVIDEOPRESENTSOURCE *)operator new[](0x88uLL, 0x4E506456u, PagedPool);
      if ( v13 )
        v13 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v13, v11, a2->Id);
      v27 = v13;
      if ( v13 )
      {
        v27 = 0LL;
        v28 = v13;
        v18 = DMMVIDEOPRESENTSOURCESET::AddSource(v11, &v28);
        v21 = v18;
        if ( v18 >= 0 )
        {
          auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v27);
          return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v11, a2);
        }
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        v26[3] = 0LL;
        v26[4] = v11;
        v26[5] = v21;
      }
      else
      {
        v25 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v25 + 24) = v11;
        WdLogEvent5_WdLowResource(v25);
        LODWORD(v21) = -1073741801;
      }
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v27);
      return (unsigned int)v21;
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v10, v9, v12);
      *(_QWORD *)(v24 + 24) = this;
      WdLogEvent5_WdError(v24);
      return 3223192341LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v23 + 24) = 0LL;
    *(_QWORD *)(v23 + 32) = this;
    WdLogEvent5_WdError(v23);
    return 3223192324LL;
  }
}
