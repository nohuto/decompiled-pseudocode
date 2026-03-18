/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C017CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0021EB0 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C00220BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C017CFF8 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C017D038 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C017D0B8 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v11; // rdi
  __int64 v12; // r8
  DMMVIDEOPRESENTTARGET *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DMMVIDEOPRESENTTARGET *v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbp
  int v24; // eax
  ReferenceCounted *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // rax

  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    v11 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v13 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, PagedPool);
      if ( v13 )
        v18 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v13,
                v11,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v18 = 0LL;
      if ( v18 )
      {
        v19 = DMMVIDEOPRESENTTARGET::Initialize(v18);
        v23 = v19;
        if ( v19 < 0 )
        {
          v35 = WdLogNewEntry5_WdError(v21, v20, v22);
          *(_QWORD *)(v35 + 24) = a2->Id;
          *(_QWORD *)(v35 + 32) = v23;
          WdLogEvent5_WdError(v35);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v18 + 64), v36, v37);
          return (unsigned int)v23;
        }
        else
        {
          v24 = DMMVIDEOPRESENTTARGETSET::AddTarget(v11, v18);
          v25 = (DMMVIDEOPRESENTTARGET *)((char *)v18 + 64);
          v26 = v24;
          ReferenceCounted::Release(v25, v27, v28);
          if ( (int)v26 < 0 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29);
            v38[3] = a2->Id;
            v38[4] = v11;
            v38[5] = v26;
            return (unsigned int)v26;
          }
          else
          {
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v11, a2);
          }
        }
      }
      else
      {
        v34 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v34 + 24) = v11;
        WdLogEvent5_WdLowResource(v34);
        return 3221225495LL;
      }
    }
    else
    {
      v33 = WdLogNewEntry5_WdError(v10, v9, v12);
      *(_QWORD *)(v33 + 24) = this;
      WdLogEvent5_WdError(v33);
      return 3223192342LL;
    }
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v32 + 24) = 0LL;
    *(_QWORD *)(v32 + 32) = this;
    WdLogEvent5_WdError(v32);
    return 3223192325LL;
  }
}
