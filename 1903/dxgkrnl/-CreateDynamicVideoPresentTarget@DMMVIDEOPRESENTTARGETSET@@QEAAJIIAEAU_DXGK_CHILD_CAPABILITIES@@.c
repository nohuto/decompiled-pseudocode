/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BB6D0
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BA0A8 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0021E60 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00553C4 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0179248 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C01792C8 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DMMVIDEOPRESENTTARGET *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  DMMVIDEOPRESENTTARGET *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  DMMVIDEOPRESENTTARGET *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  _QWORD *v76; // rax
  struct DMMVIDEOPRESENTTARGET **v77; // rdx
  struct DMMVIDEOPRESENTTARGET *v78; // rax

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v10);
    v15[3] = v8;
    v16 = *((_QWORD *)this + 11);
    v17 = *(_QWORD *)(v16 + 8);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v18);
      v17 = *(_QWORD *)(v16 + 8);
    }
    v19 = *(_QWORD *)(v17 + 16);
    v15[6] = 1LL;
LABEL_5:
    v15[5] = -1073741811LL;
    v15[4] = v19;
LABEL_6:
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  v21 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v6);
  if ( a5 )
  {
    if ( !v21 )
    {
      *(_DWORD *)a6 = 1;
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v22);
      v15[3] = v6;
      v25 = *((_QWORD *)this + 11);
      v26 = *(_QWORD *)(v25 + 8);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24, v23);
        WdLogEvent5_WdAssertion(v27);
        v26 = *(_QWORD *)(v25 + 8);
      }
      v19 = *(_QWORD *)(v26 + 16);
      v15[6] = 2LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)v21 + 59) )
    {
      *(_DWORD *)a6 = 5;
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v22);
      v15[3] = v6;
      v30 = *((_QWORD *)this + 11);
      v31 = *(_QWORD *)(v30 + 8);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v32);
        v31 = *(_QWORD *)(v30 + 8);
      }
      v19 = *(_QWORD *)(v31 + 16);
      v15[6] = 3LL;
      goto LABEL_5;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v21) )
    {
      *(_DWORD *)a6 = 6;
      v35 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v35 + 24) = v6;
LABEL_18:
      v38 = *((_QWORD *)this + 11);
      v15 = (_QWORD *)v35;
      v39 = *(_QWORD *)(v38 + 8);
      if ( !v39 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36);
        WdLogEvent5_WdAssertion(v40);
        v39 = *(_QWORD *)(v38 + 8);
      }
      v15[4] = *(_QWORD *)(v39 + 16);
      v15[5] = -1073741811LL;
      v15[6] = 4LL;
      goto LABEL_6;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v35 = WdLogNewEntry5_WdAssertion(v42, v41);
      *(_QWORD *)(v35 + 24) = v8;
      goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 72));
    v44 = *(_QWORD **)(v43 + 488);
    v45 = (_QWORD *)((char *)TargetById + 496);
    if ( *v44 == v43 + 480 )
    {
      *v45 = v43 + 480;
      *((_QWORD *)TargetById + 63) = v44;
      *v44 = v45;
      *(_QWORD *)(v43 + 488) = v45;
      *((_QWORD *)TargetById + 66) = v43;
      return 0LL;
    }
    goto LABEL_42;
  }
  if ( v21 )
  {
    *(_DWORD *)a6 = 3;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21, v22);
    v15[3] = v6;
    v48 = *((_QWORD *)this + 11);
    v49 = *(_QWORD *)(v48 + 8);
    if ( !v49 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v47, v46);
      WdLogEvent5_WdAssertion(v50);
      v49 = *(_QWORD *)(v48 + 8);
    }
    v19 = *(_QWORD *)(v49 + 16);
    v15[6] = 5LL;
    goto LABEL_5;
  }
  v51 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, PagedPool);
  if ( v51 )
    v56 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v51,
            this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
  else
    v56 = 0LL;
  if ( v56 )
  {
    v63 = DMMVIDEOPRESENTTARGET::Initialize(v56);
    v66 = v63;
    if ( v63 >= 0 )
    {
      v70 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v56);
      v66 = v70;
      if ( v70 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
        v77 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 56);
        v78 = (DMMVIDEOPRESENTTARGET *)((char *)v56 + 456);
        if ( *v77 == (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 440) )
        {
          *(_QWORD *)v78 = (char *)TargetById + 440;
          *((_QWORD *)v56 + 58) = v77;
          *v77 = v78;
          *((_QWORD *)TargetById + 56) = v78;
          *((_QWORD *)v56 + 59) = TargetById;
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v56 + 64), (__int64)v77, v72);
          return 0LL;
        }
LABEL_42:
        __fastfail(3u);
      }
      *(_DWORD *)a6 = -2147483646;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v56 + 64), v71, v72);
      v76 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73, v75);
      v76[3] = v6;
      v76[4] = this;
      v76[5] = v66;
      WdLogEvent5_WdError(v76);
    }
    else
    {
      *(_DWORD *)a6 = -2147483647;
      v67 = WdLogNewEntry5_WdError(a6, v64, v65);
      *(_QWORD *)(v67 + 24) = v6;
      *(_QWORD *)(v67 + 32) = v66;
      WdLogEvent5_WdError(v67);
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v56 + 64), v68, v69);
    }
    return (unsigned int)v66;
  }
  *(_DWORD *)a6 = 0x80000000;
  v59 = WdLogNewEntry5_WdLowResource(v53, v52, v54, v55);
  *(_QWORD *)(v59 + 24) = v6;
  v60 = *((_QWORD *)this + 11);
  v61 = *(_QWORD *)(v60 + 8);
  if ( !v61 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v58, v57);
    WdLogEvent5_WdAssertion(v62);
    v61 = *(_QWORD *)(v60 + 8);
  }
  *(_QWORD *)(v59 + 32) = *(_QWORD *)(v61 + 16);
  WdLogEvent5_WdLowResource(v59);
  return 3221225495LL;
}
