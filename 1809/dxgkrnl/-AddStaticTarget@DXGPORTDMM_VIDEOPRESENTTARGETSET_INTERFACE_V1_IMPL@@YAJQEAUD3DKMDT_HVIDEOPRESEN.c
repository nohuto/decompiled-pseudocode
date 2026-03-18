/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0158A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C001F894 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C001FA88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0158B98 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0158BD8 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0158C58 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v9; // rdi
  DMMVIDEOPRESENTTARGET *v10; // rax
  __int64 v11; // rcx
  DMMVIDEOPRESENTTARGET *v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbp
  int v16; // eax
  ReferenceCounted *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v9 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      v10 = (DMMVIDEOPRESENTTARGET *)operator new(0x230uLL, 0x4E506456u, PagedPool);
      if ( v10 )
        v12 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v10,
                v9,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v12 = 0LL;
      if ( v12 )
      {
        v13 = DMMVIDEOPRESENTTARGET::Initialize(v12);
        v15 = v13;
        if ( v13 < 0 )
        {
          v27 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v27 + 24) = a2->Id;
          *(_QWORD *)(v27 + 32) = v15;
          WdLogEvent5_WdError(v27);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v12 + 64));
          return (unsigned int)v15;
        }
        else
        {
          v16 = DMMVIDEOPRESENTTARGETSET::AddTarget(v9, v12);
          v17 = (DMMVIDEOPRESENTTARGET *)((char *)v12 + 64);
          v18 = v16;
          ReferenceCounted::Release(v17);
          if ( (int)v18 < 0 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
            v28[3] = a2->Id;
            v28[4] = v9;
            v28[5] = v18;
            return (unsigned int)v18;
          }
          else
          {
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v9, a2);
          }
        }
      }
      else
      {
        v26 = WdLogNewEntry5_WdLowResource(v11);
        *(_QWORD *)(v26 + 24) = v9;
        WdLogEvent5_WdLowResource(v26);
        return 3221225495LL;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v25 + 24) = this;
      WdLogEvent5_WdError(v25);
      return 3223192342LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = this;
    WdLogEvent5_WdError(v24);
    return 3223192325LL;
  }
}
