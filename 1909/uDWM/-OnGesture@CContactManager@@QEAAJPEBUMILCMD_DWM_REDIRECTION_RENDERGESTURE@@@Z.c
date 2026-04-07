/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180097048
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180030018 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180045784 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180045954 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047CE4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180081E98 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009562C (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x180095840 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x180095954 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180095CC4 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180096174 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800961DC (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800962C8 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180096488 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800965E8 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x180096ACC (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800998E8 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18009999C (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180099B0C (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180099CAC (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009EFC4 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18009F518 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A6490 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A661C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0AA4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0C4C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0DD8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int v4; // esi
  int started; // ebx
  signed int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  LONG v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  CContactManager *v14; // rcx
  CContactManager *v15; // rcx
  __int64 v16; // rsi
  struct CTouchVisual *v17; // rbx
  CContactManager *v18; // rcx
  int Touch; // eax
  __int64 v20; // rsi
  struct CTouchVisual *v21; // rbx
  CContactManager *v22; // rcx
  struct CTouchVisual *v23; // rbx
  CContactManager *v24; // rcx
  CContactManager *v25; // rcx
  CBaseObject *v26; // rcx
  int v27; // r9d
  __int64 v28; // rsi
  struct CTouchVisual *v29; // rbx
  CContactManager *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  CContactManager *v37; // rcx
  __int64 v38; // rbx
  struct CTouchVisual *v39; // rsi
  CContactManager *v40; // rcx
  struct CTouchVisual *v41; // rsi
  CContactManager *v42; // rcx
  struct CTouchVisual *v43; // rsi
  CContactManager *v44; // rcx
  struct CTouchVisual *v45; // rsi
  CContactManager *v46; // rcx
  struct CTouchVisual *v47; // rsi
  CContactManager *v48; // rcx
  volatile signed __int32 *v49; // rsi
  struct tagRECT *v50; // r8
  CContactManager *v51; // rcx
  unsigned int v52; // eax
  unsigned int v53; // edx
  CContactManager *v54; // rcx
  CBaseObject *v55; // rcx
  int v56; // eax
  CContactManager *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  CBaseObject *v60; // rbx
  __int64 v61; // rcx
  char v62; // al
  CDirectTouchVisual **v63; // rdx
  CContactManager *v64; // rcx
  __int64 v65; // r9
  CTouchVisual **v66; // rdx
  __int64 v67; // rax
  CContactManager *v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  bool v71; // zf
  __int64 v72; // rcx
  struct CVisual *v73; // rsi
  signed int v74; // ebx
  _QWORD *v75; // r13
  __int64 v76; // r14
  CContactManager *v77; // rcx
  CContactManager *v78; // rcx
  CContactManager *v79; // rcx
  CContactManager *v80; // rcx
  _QWORD *v81; // rcx
  __int64 v82; // rax
  unsigned int v83; // edx
  int v84; // eax
  __int64 v85; // rsi
  CContactManager *v86; // rcx
  CBaseObject *v87; // rcx
  CContactManager *v88; // rcx
  __int64 v89; // rsi
  __int64 v90; // rax
  CBaseObject *v91; // rbx
  __int64 v92; // rcx
  char v93; // al
  CDirectTouchVisual **v94; // rdx
  CContactManager *v95; // rcx
  __int64 v96; // r9
  CTouchVisual **v97; // rdx
  __int64 v98; // rax
  CContactManager *v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  struct CVisual *v103; // rsi
  signed int v104; // ebx
  _QWORD *v105; // r13
  __int64 v106; // r14
  CContactManager *v107; // rcx
  CContactManager *v108; // rcx
  unsigned int v110; // [rsp+20h] [rbp-59h]
  unsigned __int64 v111; // [rsp+40h] [rbp-39h] BYREF
  CTouchPressHoldVisual *v112[2]; // [rsp+48h] [rbp-31h] BYREF
  CBaseObject *v113; // [rsp+58h] [rbp-21h] BYREF
  struct CVisual *v114; // [rsp+60h] [rbp-19h] BYREF
  struct CVisual *v115; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v116; // [rsp+70h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v117; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v118; // [rsp+80h] [rbp+7h] BYREF

  v117 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -1;
  started = 0;
  v6 = -1;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v7 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v6 = v7;
  }
LABEL_6:
  v8 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * v8) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v4 = v8;
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 4);
  v118.top = v9 - 25;
  v10 = v9 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v118.bottom = v10;
  v118.left = v11 - 25;
  v118.right = v11 + 25;
  GetDesktopID(1LL, &v111);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 > 5 )
  {
    v33 = v12 - 6;
    if ( !v33 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        3LL,
        (char *)a2 + 12,
        &v118,
        v111,
        0);
      goto LABEL_184;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_55;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v6 >= 0 )
          {
            v38 = 112LL * (unsigned int)v6;
            v39 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 48);
            CContactManager::StopAndRemoveFromRootNode(v37, v39);
            if ( v39 )
              CBaseObject::Release(v39);
            v41 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 56);
            CContactManager::StopAndRemoveFromRootNode(v40, v41);
            if ( v41 )
              CBaseObject::Release(v41);
            v43 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 88);
            CContactManager::StopAndRemoveFromRootNode(v42, v43);
            if ( v43 )
              CBaseObject::Release(v43);
            v45 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 96);
            CContactManager::StopAndRemoveFromRootNode(v44, v45);
            if ( v45 )
              CBaseObject::Release(v45);
            v47 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 64);
            CContactManager::StopAndRemoveFromRootNode(v46, v47);
            if ( v47 )
              CBaseObject::Release(v47);
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 48) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 56) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 88) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 96) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 64) = 0LL;
            *(_BYTE *)(v38 + *((_QWORD *)this + 7) + 104) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(v111, &v113);
          started = Touch;
          if ( Touch < 0 )
          {
            v110 = 755;
            goto LABEL_41;
          }
          v49 = (volatile signed __int32 *)v113;
          CContactManager::AddToTouchNode(v48, v111, v113);
          if ( v6 < 0 )
            v50 = &v118;
          else
            v50 = (struct tagRECT *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v49,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v50,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v51, v111, (struct CVisual *)v49);
            if ( v49 )
              CBaseObject::Release((CBaseObject *)v49);
            v110 = 771;
            goto LABEL_35;
          }
          if ( v6 >= 0 )
          {
            *(_QWORD *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 96) = v49;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(112LL * (unsigned int)v6
                                                                        + *((_QWORD *)this + 7)
                                                                        + 96)
                                                            + 8LL));
LABEL_84:
            v49 = (volatile signed __int32 *)v113;
LABEL_85:
            if ( !v49 )
              goto LABEL_184;
            v55 = (CBaseObject *)v49;
            goto LABEL_87;
          }
          v116 = v49;
          v52 = *((_DWORD *)this + 44);
          v53 = v52 + 1;
          if ( v52 + 1 < v52 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_90:
            CContactManager::StopAndRemoveFromRootNode(v54, (struct CTouchVisual *)v49);
            goto LABEL_85;
          }
          if ( v53 > *((_DWORD *)this + 43) )
          {
            v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v116);
            if ( v56 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, 0xC0u);
              goto LABEL_90;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v116;
            *((_DWORD *)this + 44) = v53;
          }
          _InterlockedIncrement(v49 + 2);
          goto LABEL_84;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v58 = 112LL * (unsigned int)v6;
          v59 = *((_QWORD *)this + 7);
          v60 = *(CBaseObject **)(v58 + v59 + 64);
          if ( v60 )
          {
            CContactManager::StopAndRemoveFromRootNode(v57, *(struct CTouchVisual **)(v58 + v59 + 64));
            CBaseObject::Release(v60);
            *(_QWORD *)(v58 + *((_QWORD *)this + 7) + 64) = 0LL;
            v61 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v58 + v61 + 96) )
            {
              if ( *(_BYTE *)(v58 + v61 + 105) )
              {
                v62 = *((_BYTE *)this + 324);
                if ( v62 || *(_DWORD *)(v58 + v61 + 40) )
                {
                  v63 = (CDirectTouchVisual **)(v58 + v61 + 48);
                  if ( !*v63 )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(v111, v63);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v110 = 674;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v64, v111, *(struct CVisual **)(v58 + *((_QWORD *)this + 7) + 48));
                    v62 = *((_BYTE *)this + 324);
                    v61 = *((_QWORD *)this + 7);
                  }
                  v65 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
                  if ( !v62 )
                    v65 = *(unsigned int *)(v61 + v58 + 40);
                  CDirectTouchVisual::StartDown(*(_QWORD *)(v61 + v58 + 48), (char *)a2 + 12, &v118, v65);
                }
              }
              else
              {
                v66 = (CTouchVisual **)(v58 + v61 + 56);
                if ( !*v66 )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(v111, v66);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v110 = 684;
                    goto LABEL_41;
                  }
                  v67 = *((_QWORD *)this + 7);
                  v68 = *(CContactManager **)(v58 + v67 + 56);
                  *((_DWORD *)v68 + 104) = *(_DWORD *)(v58 + v67);
                  CContactManager::AddToTouchNode(v68, v111, *(struct CVisual **)(v58 + *((_QWORD *)this + 7) + 56));
                  v61 = *((_QWORD *)this + 7);
                }
                v69 = *(unsigned int *)(v61 + v58 + 40);
                v70 = v61 + v58 + 8;
                v71 = *(_DWORD *)(v61 + v58 + 4) == 0;
                v72 = *(_QWORD *)(v61 + v58 + 56);
                if ( v71 )
                  CIndirectTouchVisual::StartHover(v72, v70, v69);
                else
                  CIndirectTouchVisual::StartEngage(v72, v70, v69);
              }
            }
          }
        }
        v73 = 0LL;
        v74 = *((_DWORD *)this + 76) - 1;
        v114 = 0LL;
        if ( v74 < 0 )
          goto LABEL_119;
        v75 = (_QWORD *)((char *)this + 280);
        v76 = 16LL * v74;
        do
        {
          if ( *(_DWORD *)(*v75 + v76) == *((_DWORD *)a2 + 2) )
          {
            v73 = *(struct CVisual **)(*v75 + v76 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v74);
          }
          v76 -= 16LL;
          --v74;
        }
        while ( v74 >= 0 );
        v114 = v73;
        if ( !v73 )
        {
LABEL_119:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v111, &v114);
          started = Touch;
          if ( Touch < 0 )
          {
            v110 = 714;
            goto LABEL_41;
          }
          v73 = v114;
          CContactManager::AddToTouchNode(v77, v111, v114);
        }
        started = CTouchPressHoldVisual::StartAbort(v73, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_184;
        CContactManager::RemoveFromTouchNode(v78, v111, v73);
        if ( v73 )
          CBaseObject::Release(v73);
        v110 = 722;
      }
      else
      {
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v112[0]) = *((_DWORD *)a2 + 2);
          v112[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v111, &v112[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v110 = 616;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v79, v111, v112[1]);
          started = CTouchPressHoldVisual::StartHold(v112[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v81 = (_QWORD *)((char *)this + 248);
            v82 = *((unsigned int *)this + 68);
            v83 = v82 + 1;
            if ( (int)v82 + 1 >= (unsigned int)v82 )
            {
              if ( v83 <= *((_DWORD *)this + 67) )
              {
                started = 0;
                *(_OWORD *)(*v81 + 16 * v82) = *(_OWORD *)v112;
                *((_DWORD *)this + 68) = v83;
                goto LABEL_184;
              }
              v84 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v81, 16, 1, v112);
              started = v84;
              if ( v84 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v84, 0xC0u);
              if ( started >= 0 )
                goto LABEL_184;
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              started = -2147024362;
            }
          }
          CContactManager::RemoveFromTouchNode(v80, v111, v112[1]);
          v55 = v112[1];
          if ( !v112[1] )
            goto LABEL_184;
LABEL_87:
          CBaseObject::Release(v55);
          goto LABEL_184;
        }
        if ( v6 < 0 )
          goto LABEL_55;
        v85 = 112LL * (unsigned int)v6;
        if ( *(_DWORD *)(v85 + *((_QWORD *)this + 7) + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v111);
        started = Touch;
        if ( Touch < 0 )
        {
          v110 = 640;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v85 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_184;
        CContactManager::RemoveFromTouchNode(v86, v111, *(struct CVisual **)(v85 + *((_QWORD *)this + 7) + 64));
        v87 = *(CBaseObject **)(v85 + *((_QWORD *)this + 7) + 64);
        if ( v87 )
        {
          CBaseObject::Release(v87);
          *(_QWORD *)(v85 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v110 = 646;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() )
      {
        CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v6 >= 0 )
      {
        v89 = 112LL * (unsigned int)v6;
        v90 = *((_QWORD *)this + 7);
        v91 = *(CBaseObject **)(v89 + v90 + 64);
        if ( v91 )
        {
          CContactManager::StopAndRemoveFromRootNode(v88, *(struct CTouchVisual **)(v89 + v90 + 64));
          CBaseObject::Release(v91);
          *(_QWORD *)(v89 + *((_QWORD *)this + 7) + 64) = 0LL;
          v92 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v89 + v92 + 96) )
          {
            if ( *(_BYTE *)(v89 + v92 + 105) )
            {
              v93 = *((_BYTE *)this + 324);
              if ( v93 || *(_DWORD *)(v89 + v92 + 40) )
              {
                v94 = (CDirectTouchVisual **)(v89 + v92 + 48);
                if ( !*v94 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(v111, v94);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v110 = 551;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v95, v111, *(struct CVisual **)(v89 + *((_QWORD *)this + 7) + 48));
                  v93 = *((_BYTE *)this + 324);
                  v92 = *((_QWORD *)this + 7);
                }
                v96 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
                if ( !v93 )
                  v96 = *(unsigned int *)(v89 + v92 + 40);
                CDirectTouchVisual::StartDown(*(_QWORD *)(v89 + v92 + 48), (char *)a2 + 12, &v118, v96);
              }
            }
            else
            {
              v97 = (CTouchVisual **)(v89 + v92 + 56);
              if ( !*v97 )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(v111, v97);
                started = Touch;
                if ( Touch < 0 )
                {
                  v110 = 561;
                  goto LABEL_41;
                }
                v98 = *((_QWORD *)this + 7);
                v99 = *(CContactManager **)(v89 + v98 + 56);
                *((_DWORD *)v99 + 104) = *(_DWORD *)(v89 + v98);
                CContactManager::AddToTouchNode(v99, v111, *(struct CVisual **)(v89 + *((_QWORD *)this + 7) + 56));
                v92 = *((_QWORD *)this + 7);
              }
              v100 = *(unsigned int *)(v89 + v92 + 40);
              v101 = v89 + v92 + 8;
              v71 = *(_DWORD *)(v89 + v92 + 4) == 0;
              v102 = *(_QWORD *)(v89 + v92 + 56);
              if ( v71 )
                CIndirectTouchVisual::StartHover(v102, v101, v100);
              else
                CIndirectTouchVisual::StartEngage(v102, v101, v100);
            }
          }
        }
      }
      v103 = 0LL;
      v104 = *((_DWORD *)this + 76) - 1;
      v115 = 0LL;
      if ( v104 < 0 )
        goto LABEL_175;
      v105 = (_QWORD *)((char *)this + 280);
      v106 = 16LL * v104;
      do
      {
        if ( *(_DWORD *)(*v105 + v106) == *((_DWORD *)a2 + 2) )
        {
          v103 = *(struct CVisual **)(*v105 + v106 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v104);
        }
        v106 -= 16LL;
        --v104;
      }
      while ( v104 >= 0 );
      v115 = v103;
      if ( !v103 )
      {
LABEL_175:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(v111, &v115);
        started = Touch;
        if ( Touch < 0 )
        {
          v110 = 591;
          goto LABEL_41;
        }
        v103 = v115;
        CContactManager::AddToTouchNode(v107, v111, v115);
      }
      started = CTouchPressHoldVisual::StartRightTap(v103, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_184;
      CContactManager::RemoveFromTouchNode(v108, v111, v103);
      if ( v103 )
        CBaseObject::Release(v103);
      v110 = 599;
    }
LABEL_35:
    v27 = started;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, v110);
    goto LABEL_184;
  }
  if ( v12 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 105))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(v32, v31, 2LL, (char *)a2 + 12, &v118, v111, 0);
    }
    goto LABEL_184;
  }
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      4LL,
      (char *)a2 + 12,
      0LL,
      v111,
      0);
    goto LABEL_184;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      5LL,
      (char *)a2 + 12,
      0LL,
      v111,
      0);
    goto LABEL_184;
  }
  v14 = (CContactManager *)(unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    if ( v4 < 0 )
      goto LABEL_43;
    v28 = 5LL * (unsigned int)v4;
    v29 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v28 + 16);
    CContactManager::StopAndRemoveFromRootNode(v14, v29);
    if ( v29 )
      CBaseObject::Release(v29);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v28 + 16) = 0LL;
    Touch = CContactManager::StartPenBarrelVisual(v30, (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v28), v111);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        6LL,
        (char *)a2 + 12,
        0LL,
        v111,
        0);
      goto LABEL_184;
    }
    v110 = 461;
    goto LABEL_41;
  }
  v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      if ( v4 >= 0 )
      {
        v16 = 5LL * (unsigned int)v4;
        v17 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v16 + 16);
        CContactManager::StopAndRemoveFromRootNode(v15, v17);
        if ( v17 )
          CBaseObject::Release(v17);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v16 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v18,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v16),
                  v111);
        started = Touch;
        if ( Touch < 0 )
        {
          v110 = 504;
LABEL_41:
          v27 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        7LL,
        (char *)a2 + 12,
        0LL,
        v111,
        0);
      goto LABEL_184;
    }
LABEL_55:
    started = -2147024809;
    goto LABEL_184;
  }
  if ( v4 < 0 )
    goto LABEL_55;
  v20 = 5LL * (unsigned int)v4;
  v21 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 8);
  CContactManager::StopAndRemoveFromRootNode(v15, v21);
  if ( v21 )
    CBaseObject::Release(v21);
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 8) = 0LL;
  v23 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16);
  CContactManager::StopAndRemoveFromRootNode(v22, v23);
  if ( v23 )
    CBaseObject::Release(v23);
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 16) = 0LL;
  Touch = CreateTouchVisual<CPenPressHoldVisual>(v111, (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v20));
  started = Touch;
  if ( Touch < 0 )
  {
    v110 = 484;
    goto LABEL_41;
  }
  CContactManager::AddToTouchNode(v24, v111, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v25, v111, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16));
    v26 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v20 + 16);
    if ( v26 )
    {
      CBaseObject::Release(v26);
      *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 16) = 0LL;
    }
    v110 = 491;
    goto LABEL_35;
  }
LABEL_184:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v117);
  return (unsigned int)started;
}
