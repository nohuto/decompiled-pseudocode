/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00CEB48
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00CEA98 (DxgkCreateSessionViewForCurrentSession.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C0046870 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C00CEC6C (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00E977C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00E97B4 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
        unsigned int a4,
        unsigned __int8 a5,
        struct _LUID *a6)
{
  __int64 v7; // r14
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  struct DISPLAY_SOURCE *DisplaySource; // rbp
  __int64 v16; // rcx
  char *v17; // rdi
  char *i; // r8
  char *v19; // r9
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct tagRECT v24; // xmm0
  _QWORD *v25; // rax
  char **v26; // rcx
  char *v27; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  char **v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rcx

  v7 = a4;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a3);
  v14 = 0LL;
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v7);
  else
    DisplaySource = 0LL;
  if ( !DisplaySource )
    goto LABEL_17;
  v16 = *((_QWORD *)DisplaySource + 6);
  if ( v16 )
  {
    if ( IsEqualRect((const struct tagRECT *)(v16 + 24), a2) )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
      v30[3] = v7;
      v30[4] = a3->HighPart;
      v30[5] = a3->LowPart;
      v30[7] = -1071774953LL;
      v30[6] = this;
      return 3223192343LL;
    }
LABEL_17:
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v29[3] = v7;
    v29[4] = a3->HighPart;
    v29[5] = a3->LowPart;
    v29[6] = this;
    v29[7] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v17 = (char *)this + 18568;
  for ( i = (char *)*((_QWORD *)this + 2321); i != v17; i = *v31 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      goto LABEL_8;
  }
  v19 = 0LL;
LABEL_8:
  if ( v19 )
    goto LABEL_14;
  v20 = (char *)operator new[](0x48uLL, 0x4B677844u, PagedPool);
  v19 = v20;
  if ( v20 )
  {
    *(_QWORD *)v20 = this;
    v24 = *a2;
    *((_DWORD *)v20 + 10) = 0;
    *(struct tagRECT *)(v20 + 24) = v24;
    v25 = v20 + 48;
    v25[1] = v25;
    *v25 = v25;
    *((_QWORD *)v19 + 8) = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v26 = (char **)*((_QWORD *)this + 2322);
    v27 = v19 + 8;
    if ( *v26 != v17 )
      __fastfail(3u);
    *(_QWORD *)v27 = v17;
    *((_QWORD *)v19 + 2) = v26;
    *v26 = v27;
    *((_QWORD *)this + 2322) = v27;
LABEL_14:
    *((struct _LUID *)v19 + 8) = *a6;
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v19, DisplaySource, a5);
    return 0LL;
  }
  v32 = WdLogNewEntry5_WdLowResource(v22, v21, v23, 0LL);
  v33 = (_QWORD *)(v32 + 24);
  do
  {
    v34 = *(&a2->left + v14++);
    *v33++ = v34;
  }
  while ( v14 < 4 );
  *(_QWORD *)(v32 + 56) = this;
  WdLogEvent5_WdLowResource(v32);
  return 3221225495LL;
}
