/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012950
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18000F590 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x1800128A4 (-OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180012F50 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180025CB4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180039030 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18008910C (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18008D5B0 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800A9DB4 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r14d
  struct CWindowData *v5; // rbx
  int v6; // edi
  struct CWindowData *v7; // rsi
  __int64 v8; // rax
  LONG *v9; // r15
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rcx
  int v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // edi
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // edx
  LONG x; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  char v23; // al
  unsigned int v24; // esi
  __int64 v25; // r13
  CWindowData *v26; // r15
  char v27; // al
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // edx
  RECT v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // edx
  RECT v36; // xmm0
  __int64 v37; // rax
  unsigned int v38; // ebx
  __int64 v40; // rsi
  char v41; // di
  CVisual *v42; // rcx
  int v43; // eax
  int updated; // eax
  unsigned int v45; // r8d
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  const struct CStoryboard *v52; // r15
  __int64 v53; // r9
  __int64 v54; // rcx
  CWindowData *v55; // rax
  CWindowData *v56; // rax
  int v57; // eax
  __int64 v58; // rax
  CVisual *v59; // rcx
  bool v60; // di
  HWND v61; // rcx
  int v62; // ecx
  wchar_t **v63; // rdx
  WCHAR *v64; // rax
  int v65; // r9d
  int v66; // r8d
  bool v67[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v68; // [rsp+34h] [rbp-CCh]
  struct tagPOINT v69; // [rsp+38h] [rbp-C8h] BYREF
  struct tagPOINT v70; // [rsp+40h] [rbp-C0h]
  struct tagPOINT v71; // [rsp+48h] [rbp-B8h] BYREF
  int v72; // [rsp+50h] [rbp-B0h]
  int v73; // [rsp+54h] [rbp-ACh]
  RECT rc1; // [rsp+58h] [rbp-A8h] BYREF
  RECT v75; // [rsp+68h] [rbp-98h] BYREF
  RECT rc2; // [rsp+78h] [rbp-88h] BYREF
  RECT v77; // [rsp+88h] [rbp-78h] BYREF
  WCHAR ClassName[264]; // [rsp+A0h] [rbp-60h] BYREF

  v70 = (struct tagPOINT)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v55 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v55 || (v56 = CWindowData::CWindowData(v55), (v7 = v56) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    goto LABEL_94;
  }
  *((_QWORD *)v56 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v56);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v57 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v57;
  if ( v57 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x88Bu);
  v68 = v6;
  if ( v6 < 0 )
  {
LABEL_94:
    v38 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5Au);
    goto LABEL_38;
  }
  if ( !v5 )
  {
    v38 = v6;
    goto LABEL_38;
  }
  v8 = *(_QWORD *)a2;
  v67[0] = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(v8 + 88))(a2, &v71);
  v9 = (LONG *)((char *)v5 + 180);
  v10 = 0;
  v11 = v71.x - *((_DWORD *)v5 + 45);
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v13 = v71.y - *((_DWORD *)v5 + 46);
  v14 = *(_DWORD *)(v12 + 72);
  if ( v14 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v10) != *((_QWORD *)v5 + 5) )
    {
      if ( ++v10 >= v14 )
        goto LABEL_6;
    }
    if ( v10 >= 0 )
    {
      _mm_lfence();
      v48 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v10);
      if ( (*(_BYTE *)(v48 + 40) & 4) != 0 )
      {
        v58 = *(_QWORD *)(v48 + 104);
        v11 = v71.x - v58;
        v13 = v71.y - HIDWORD(v58);
      }
    }
  }
LABEL_6:
  if ( v11 || v13 )
  {
    v70 = v71;
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
      v5,
      v71,
      v67);
    if ( !v67[0] )
    {
      OffsetRect((LPRECT)((char *)v5 + 180), v11, v13);
      v45 = 0;
      v46 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
      v47 = *(_DWORD *)(v46 + 48);
      if ( v47 )
      {
        v53 = *(_QWORD *)(v46 + 24);
        while ( 1 )
        {
          v54 = v53 + 24LL * v45;
          if ( *(_BYTE *)(v54 + 16) )
          {
            if ( *((_QWORD *)v5 + 49) == *(_QWORD *)v54 )
              break;
          }
          if ( ++v45 >= v47 )
            goto LABEL_68;
        }
        v59 = *(CVisual **)(v54 + 8);
        v69.x = *v9;
        v69.y = *((_DWORD *)v5 + 46);
        CVisual::SetOffset(v59, &v69);
      }
LABEL_68:
      CWindowList::OnPositionChange(this, v5, 1);
    }
  }
  v15 = v72 - v71.x;
  if ( v72 - v71.x < 0 )
    v15 = 0;
  v16 = v73 - v71.y;
  if ( v73 - v71.y < 0 )
    v16 = 0;
  v17 = 0;
  v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v19 = *(_DWORD *)(v18 + 72);
  if ( !v19 )
    goto LABEL_13;
  while ( **(_QWORD **)(*(_QWORD *)(v18 + 48) + 8LL * (unsigned int)v17) != *((_QWORD *)v5 + 5) )
  {
    if ( ++v17 >= v19 )
      goto LABEL_13;
  }
  if ( v17 >= 0
    && (_mm_lfence(), v49 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * (unsigned int)v17),
                      (*(_BYTE *)(v49 + 40) & 2) != 0) )
  {
    v69 = *(struct tagPOINT *)(v49 + 112);
    x = v69.x;
    v21 = HIDWORD(*(unsigned __int64 *)&v69);
  }
  else
  {
LABEL_13:
    x = *((_DWORD *)v5 + 47) - *v9;
    if ( x < 0 )
      x = 0;
    LODWORD(v21) = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
    if ( (v21 & 0x80000000) != 0LL )
      LODWORD(v21) = 0;
  }
  if ( v15 == x && v16 == (_DWORD)v21 )
  {
    if ( !v67[0] )
    {
LABEL_20:
      v22 = *((_QWORD *)v5 + 68);
      v23 = v22 && (*(_BYTE *)(v22 + 597) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v5);
      if ( *((_BYTE *)v5 + 597) >> 7 != v23 )
        CWindowData::UpdateOwnerLists(v5, !(*((_BYTE *)v5 + 597) >> 7));
      v24 = 0;
      if ( *((_DWORD *)v5 + 144) )
      {
        do
        {
          v25 = *(_QWORD *)(*((_QWORD *)v5 + 69) + 8LL * v24);
          v26 = *(CWindowData **)(v25 + 544);
          if ( v26
            && (*((_BYTE *)v26 + 597) & 0x40) != 0
            && (*(_BYTE *)(v25 + 596) & 1) != 0
            && (*(_DWORD *)(v25 + 100) & 0xC00000) != 0xC00000
            && (*(char *)(v25 + 104) >= 0 || (*(_DWORD *)(v25 + 604) & 0xFFF) == 0x11) )
          {
            if ( *(_QWORD *)(v25 + 32) )
            {
              v60 = CWindowData::WillEndAnimationCloaked((CWindowData *)v25);
              if ( v60 == CWindowData::WillEndAnimationCloaked(v26)
                && ContainsRect(
                     (const struct tagRECT *)(*(_QWORD *)(v25 + 544) + 48LL),
                     (const struct tagRECT *)(v25 + 48)) )
              {
                v61 = *(HWND *)(v25 + 40);
                ClassName[0] = 0;
                if ( !GetClassNameW(v61, ClassName, 260) )
                {
LABEL_112:
                  v27 = 1;
                  goto LABEL_28;
                }
                v62 = 0;
                v63 = off_1800BA6D8;
                while ( 1 )
                {
                  v64 = ClassName;
                  do
                  {
                    v65 = *(WCHAR *)((char *)v64 + (char *)*v63 - (char *)ClassName);
                    v66 = *v64 - v65;
                    if ( v66 )
                      break;
                    ++v64;
                  }
                  while ( v65 );
                  if ( !v66 )
                    break;
                  ++v62;
                  ++v63;
                  if ( v62 )
                    goto LABEL_112;
                }
              }
            }
          }
          v27 = 0;
LABEL_28:
          if ( *(_BYTE *)(v25 + 597) >> 7 != v27 )
            CWindowData::UpdateOwnerLists((CWindowData *)v25, !(*(_BYTE *)(v25 + 597) >> 7));
        }
        while ( ++v24 < *((_DWORD *)v5 + 144) );
      }
    }
LABEL_31:
    v28 = 0;
    v29 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v30 = *(_DWORD *)(v29 + 72);
    if ( !v30 )
      goto LABEL_32;
    while ( **(_QWORD **)(*(_QWORD *)(v29 + 48) + 8LL * (unsigned int)v28) != *((_QWORD *)v5 + 5) )
    {
      if ( ++v28 >= v30 )
        goto LABEL_32;
    }
    if ( v28 >= 0
      && (_mm_lfence(),
          v50 = *(_QWORD *)(*(_QWORD *)(v29 + 48) + 8LL * (unsigned int)v28),
          (*(_BYTE *)(v50 + 40) & 8) != 0) )
    {
      v31 = *(RECT *)(v50 + 120);
    }
    else
    {
LABEL_32:
      v31 = *(RECT *)((char *)v5 + 196);
    }
    v32 = 0LL;
    v33 = *((_QWORD *)v5 + 5);
    rc2 = v31;
    v34 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
    v35 = *(_DWORD *)(v34 + 72);
    if ( !v35 )
      goto LABEL_34;
    while ( **(_QWORD **)(*(_QWORD *)(v34 + 48) + 8LL * (unsigned int)v32) != v33 )
    {
      v32 = (unsigned int)(v32 + 1);
      if ( (unsigned int)v32 >= v35 )
        goto LABEL_34;
    }
    if ( (int)v32 >= 0
      && (_mm_lfence(),
          v51 = *(_QWORD *)(*(_QWORD *)(v34 + 48) + 8LL * (unsigned int)v32),
          (*(_BYTE *)(v51 + 40) & 0x10) != 0) )
    {
      v36 = *(RECT *)(v51 + 136);
    }
    else
    {
LABEL_34:
      v36 = *(RECT *)((char *)v5 + 212);
    }
    v37 = *(_QWORD *)a2;
    v77 = v36;
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v37 + 96))(a2, &rc1, v32, v33);
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)a2 + 104LL))(a2, &v75);
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 112LL))(a2, (__int64)v5 + 228);
    if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v75, &v77) )
    {
      v40 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v41 = 0;
      if ( *(_DWORD *)(v40 + 40) )
      {
        do
        {
          v52 = *(const struct CStoryboard **)(*(_QWORD *)(v40 + 16) + 8LL * v4);
          if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v4, v5, v52, 0) )
            v41 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                          (CWindowPropertyTracker *)(v40 + 48),
                          v52,
                          v5,
                          &rc1,
                          &v75) >= 0;
          ++v4;
        }
        while ( v4 < *(_DWORD *)(v40 + 40) );
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v41 )
      {
        v42 = (CVisual *)*((_QWORD *)v5 + 49);
        *(RECT *)((char *)v5 + 196) = rc1;
        *(RECT *)((char *)v5 + 212) = v75;
        if ( v42 )
        {
          v43 = *((_DWORD *)v42 + 20);
          if ( (v43 & 0x4000000) == 0 )
          {
            *((_DWORD *)v42 + 20) = v43 | 0x4000000;
            CVisual::PropagateDirtyChildren(v42);
          }
        }
      }
    }
    goto LABEL_37;
  }
  v69 = (struct tagPOINT)__PAIR64__(v16, v15);
  CAnimationScheduler::OnWindowSizeChange(
    *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
    v5,
    (struct tagSIZE)__PAIR64__(v16, v15),
    v67);
  if ( v67[0] )
    goto LABEL_31;
  *((_DWORD *)v5 + 47) = v15 + *v9;
  *((_DWORD *)v5 + 48) = v16 + *((_DWORD *)v5 + 46);
  updated = CWindowList::UpdateWindowScale(this, v5, 0);
  v68 = updated;
  if ( updated >= 0 )
    goto LABEL_20;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xB93u);
LABEL_37:
  v38 = v68;
LABEL_38:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v38;
}
