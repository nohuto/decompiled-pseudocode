/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180098EC0
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800971F4 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180098008 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002C428 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800448C4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180044AD8 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180046798 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009598C (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z @ 0x180095F54 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJ_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x18009627C (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x180096604 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180096628 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180096948 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x180096EA0 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x180099B78 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x180099CFC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180099EF8 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x180099FF0 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18009A00C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18009B2E0 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18009B314 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D034 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18009D5F8 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18009DEBC (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18009E338 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A67F0 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A697C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A6B00 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6E1C (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800B0D40 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800B0D70 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagRECT *a4,
        int a5,
        char a6,
        unsigned __int64 a7)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r12d
  struct tagPOINT v11; // rbx
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rdi
  CIndirectTouchVisual *v18; // rcx
  struct tagRECT *v19; // rax
  int v20; // r15d
  __int64 v21; // r13
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // r14d
  CContactManager *v25; // rcx
  int v26; // eax
  volatile signed __int32 *v27; // rdx
  CBaseObject *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edx
  CContactManager *v31; // rcx
  int v32; // eax
  volatile signed __int32 *v33; // rdx
  CBaseObject *v34; // rcx
  struct CTouchVisual *v35; // r14
  CDirectTouchVisual *v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rcx
  int Touch; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // r9d
  CContactManager *v43; // rcx
  CDirectTouchVisual *v44; // rcx
  CTouchDragVisual *v45; // rcx
  struct tagRECT *v46; // rax
  float *v47; // rcx
  CIndirectTouchVisual *v48; // rcx
  CTetherVisual *v49; // rcx
  CTextTetherVisual *v50; // rcx
  __int64 v51; // rcx
  struct CTouchVisual *v52; // r14
  int v53; // r14d
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // r8
  char v57; // al
  int started; // eax
  __int64 v59; // r13
  unsigned int v60; // eax
  unsigned int v61; // edx
  int v62; // r14d
  CContactManager *v63; // rcx
  int v64; // eax
  volatile signed __int32 *v65; // rdx
  struct CTouchVisual *v66; // r14
  __int64 v67; // r15
  bool v68; // r14
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // edx
  int v72; // r14d
  int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // edx
  volatile signed __int32 *v76; // rdx
  int v77; // eax
  CBaseObject *v78; // rcx
  unsigned int v79; // eax
  unsigned int v80; // edx
  int v81; // r14d
  CContactManager *v82; // rcx
  int v83; // eax
  volatile signed __int32 *v84; // rdx
  CBaseObject *v85; // rcx
  unsigned int v86; // eax
  unsigned int v87; // edx
  int v88; // r14d
  CContactManager *v89; // rcx
  int v90; // eax
  volatile signed __int32 *v91; // rdx
  CBaseObject *v92; // rcx
  struct CTouchVisual *v93; // r14
  CContactManager *v94; // rcx
  unsigned int v95; // eax
  unsigned int v96; // edx
  int v97; // eax
  CBaseObject *v98; // rcx
  void *v99; // rdx
  struct tagRECT v100; // xmm0
  CContactManager *v101; // rcx
  CContactManager *v102; // rcx
  unsigned int v104; // [rsp+20h] [rbp-E0h]
  char v105; // [rsp+40h] [rbp-C0h]
  __int64 v106; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v107; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v108; // [rsp+58h] [rbp-A8h]
  struct tagRECT *v109; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v110; // [rsp+68h] [rbp-98h] BYREF
  __int64 v111; // [rsp+70h] [rbp-90h] BYREF
  __int64 v112; // [rsp+78h] [rbp-88h] BYREF
  __int64 v113; // [rsp+80h] [rbp-80h] BYREF
  struct CTouchVisual *v114; // [rsp+88h] [rbp-78h] BYREF
  __int128 v115; // [rsp+90h] [rbp-70h] BYREF
  __int128 v116; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v117; // [rsp+B0h] [rbp-50h]
  struct tagRECT v118; // [rsp+B8h] [rbp-48h]
  unsigned int v119; // [rsp+C8h] [rbp-38h]
  int v120; // [rsp+CCh] [rbp-34h]
  struct CVisual *v121[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v122; // [rsp+E0h] [rbp-20h]
  __int64 v123; // [rsp+E8h] [rbp-18h]
  __int128 v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+100h] [rbp+0h]
  char v126; // [rsp+108h] [rbp+8h]
  char v127; // [rsp+109h] [rbp+9h]
  int v128; // [rsp+10Ah] [rbp+Ah]
  __int16 v129; // [rsp+10Eh] [rbp+Eh]

  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v109 = a4;
  v10 = 0;
  v106 = a1;
  v11 = a3;
  v13 = a1;
  v107 = a3;
  v108 = -1;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 112LL * v9;
      if ( *(_DWORD *)(a1 + v14) == a2 )
        break;
      if ( ++v9 >= *(_DWORD *)(v13 + 80) )
      {
        v8 = v108;
        goto LABEL_7;
      }
    }
    v8 = v9;
    v108 = v9;
  }
LABEL_7:
  v15 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v15 = 3;
  if ( (int)v8 < 0 )
  {
    if ( v15 != 2 && (v15 != 1 || (a6 & 0x80) == 0) )
      return v10;
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_190;
      v99 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) == 0 )
        goto LABEL_190;
      v99 = &UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0d(a1, (int)v99, a2);
LABEL_190:
    v100 = *a4;
    v120 = 0;
    v128 = 0;
    v129 = 0;
    v119 = -1;
    v123 = 0LL;
    v122 = 0LL;
    v125 = 0LL;
    LODWORD(v116) = a2;
    DWORD1(v116) = v15 == 2;
    *((struct tagPOINT *)&v116 + 1) = v11;
    v117 = v11;
    *(_OWORD *)v121 = 0LL;
    v126 = 0;
    v118 = v100;
    v124 = 0LL;
    if ( a6 < 0 )
    {
      v127 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(a7, &v121[1]);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v104 = 1510;
        goto LABEL_59;
      }
      *((_DWORD *)v121[1] + 104) = a2;
      CContactManager::AddToTouchNode(v102, a7, v121[1]);
      if ( v15 == 1 )
        CIndirectTouchVisual::StartHover(v121[1], &v107, v119);
      else
        CIndirectTouchVisual::StartEngage(v121[1], &v107, v119);
    }
    else
    {
      v127 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(a7, v121);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v104 = 1504;
        goto LABEL_59;
      }
      CContactManager::AddToTouchNode(v101, a7, v121[0]);
      CDirectTouchVisual::StartDown(v121[0], &v107, a4, v119);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(v106 + 56, &v116);
    return v10;
  }
  v16 = *(_QWORD *)(v13 + 56);
  v17 = 112 * v8;
  if ( v15 == 1 )
  {
    v18 = *(CIndirectTouchVisual **)(v17 + v16 + 56);
    if ( v18 )
    {
      if ( *(_DWORD *)(v17 + v16 + 4) )
      {
        CIndirectTouchVisual::StartHover(v18, &v107, *(unsigned int *)(v17 + v16 + 40));
        v19 = *(struct tagRECT **)(v17 + v16 + 72);
        *(_DWORD *)(v17 + v16 + 4) = 0;
        v20 = -2147024362;
        v21 = v106;
        if ( v19 )
        {
          v109 = v19;
          v22 = *(_DWORD *)(v106 + 176);
          v23 = v22 + 1;
          if ( v22 + 1 >= v22 )
          {
            v24 = 0;
            if ( v23 > *(_DWORD *)(v106 + 172) )
            {
              v26 = DynArrayImpl<0>::AddMultipleAndSet(v106 + 152, 8, 1, &v109);
              v24 = v26;
              if ( v26 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0xC0u);
            }
            else
            {
              v25 = (CContactManager *)*(unsigned int *)(v106 + 176);
              *(_QWORD *)(*(_QWORD *)(v106 + 152) + 8LL * (_QWORD)v25) = v109;
              *(_DWORD *)(v21 + 176) = v23;
            }
          }
          else
          {
            v24 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
          v27 = *(volatile signed __int32 **)(v17 + v16 + 72);
          if ( v24 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v25, (struct CTouchVisual *)v27);
          }
          else
          {
            _InterlockedIncrement(v27 + 2);
            CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v17 + v16 + 72));
          }
          v28 = *(CBaseObject **)(v17 + v16 + 72);
          if ( v28 )
          {
            CBaseObject::Release(v28);
            *(_QWORD *)(v17 + v16 + 72) = 0LL;
          }
        }
        if ( *(_QWORD *)(v17 + v16 + 80) )
        {
          v106 = *(_QWORD *)(v17 + v16 + 80);
          v29 = *(_DWORD *)(v21 + 176);
          v30 = v29 + 1;
          if ( v29 + 1 >= v29 )
          {
            v20 = 0;
            if ( v30 > *(_DWORD *)(v21 + 172) )
            {
              v32 = DynArrayImpl<0>::AddMultipleAndSet(v21 + 152, 8, 1, &v106);
              v20 = v32;
              if ( v32 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xC0u);
            }
            else
            {
              v31 = (CContactManager *)*(unsigned int *)(v21 + 176);
              *(_QWORD *)(*(_QWORD *)(v21 + 152) + 8LL * (_QWORD)v31) = v106;
              *(_DWORD *)(v21 + 176) = v30;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
          }
          v33 = *(volatile signed __int32 **)(v17 + v16 + 80);
          if ( v20 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v31, (struct CTouchVisual *)v33);
          }
          else
          {
            _InterlockedIncrement(v33 + 2);
            CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v17 + v16 + 80));
          }
          v34 = *(CBaseObject **)(v17 + v16 + 80);
          if ( v34 )
          {
            CBaseObject::Release(v34);
            *(_QWORD *)(v17 + v16 + 80) = 0LL;
          }
        }
      }
      else
      {
        CIndirectTouchVisual::UpdateLocation(v18, &v107);
      }
    }
    return v10;
  }
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
      v10 = -2147024809;
      v104 = 1468;
      v42 = -2147024809;
      goto LABEL_60;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    {
      McTemplateU0d(a1, (int)&UdwmTouchUpReceived_Info, a2);
      v13 = v106;
    }
    CContactManager::CleanupFinishedAnimations((CContactManager *)v13);
    v51 = 2147942934LL;
    if ( *(_BYTE *)(v17 + v16 + 105) )
    {
      v52 = *(struct CTouchVisual **)(v17 + v16 + 48);
      if ( !v52 || (v105 = 1, !CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v17 + v16 + 48))) )
        v105 = 0;
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)v51, v52);
      if ( v52 )
        CBaseObject::Release(v52);
      v53 = *(_DWORD *)(v17 + v16 + 40);
      if ( !CContactManager::CheckShowContact(v106, v53, 2)
        || !*(_DWORD *)(v17 + v16 + 4)
        || *(_QWORD *)(v17 + v16 + 88) && CContactManager::CheckShowContact(v51, v53, 4)
        || *(_QWORD *)(v17 + v16 + 64)
        || *(_QWORD *)(v17 + v16 + 96)
        || (int)CContactManager::FindStationaryAnimation(v51, a2, 2) >= 0
        || (int)CContactManager::FindStationaryAnimation(v51, v54, 3) >= 0 )
      {
        v59 = v51;
      }
      else
      {
        if ( !CContactManager::CheckShowContact(v51, v53, 1) || v105 )
          v57 = v56;
        else
          v57 = 0;
        started = CContactManager::StartStationaryAnimationWithDelay(v55, a2, v56, &v107, v109, a7, v57);
        v10 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x54Fu);
          return v10;
        }
        v59 = v106;
      }
    }
    else
    {
      v59 = v106;
      if ( *(_QWORD *)(v17 + v16 + 56) )
      {
        v110 = *(_QWORD *)(v17 + v16 + 56);
        v60 = *(_DWORD *)(v106 + 176);
        v61 = v60 + 1;
        if ( v60 + 1 >= v60 )
        {
          v62 = 0;
          if ( v61 > *(_DWORD *)(v106 + 172) )
          {
            v64 = DynArrayImpl<0>::AddMultipleAndSet(v106 + 152, 8, 1, &v110);
            v62 = v64;
            if ( v64 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0xC0u);
          }
          else
          {
            v63 = (CContactManager *)*(unsigned int *)(v106 + 176);
            *(_QWORD *)(*(_QWORD *)(v106 + 152) + 8LL * (_QWORD)v63) = v110;
            *(_DWORD *)(v59 + 176) = v61;
          }
        }
        else
        {
          v62 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v65 = *(volatile signed __int32 **)(v17 + v16 + 56);
        if ( v62 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v63, (struct CTouchVisual *)v65);
        }
        else
        {
          _InterlockedIncrement(v65 + 2);
          CIndirectTouchVisual::StartIdle(*(_QWORD *)(v17 + v16 + 56), &v107, *(unsigned int *)(v17 + v16 + 40));
        }
        v51 = *(_QWORD *)(v17 + v16 + 56);
        if ( v51 )
          CBaseObject::Release((CBaseObject *)v51);
      }
    }
    v66 = *(struct CTouchVisual **)(v17 + v16 + 88);
    CContactManager::StopAndRemoveFromRootNode((CContactManager *)v51, v66);
    if ( v66 )
      CBaseObject::Release(v66);
    v67 = *(_QWORD *)(v17 + v16 + 64);
    if ( !v67 )
    {
LABEL_142:
      if ( *(_QWORD *)(v17 + v16 + 72) )
      {
        v112 = *(_QWORD *)(v17 + v16 + 72);
        v79 = *(_DWORD *)(v59 + 176);
        v80 = v79 + 1;
        if ( v79 + 1 >= v79 )
        {
          v81 = 0;
          if ( v80 > *(_DWORD *)(v59 + 172) )
          {
            v83 = DynArrayImpl<0>::AddMultipleAndSet(v59 + 152, 8, 1, &v112);
            v81 = v83;
            if ( v83 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v83, 0xC0u);
          }
          else
          {
            v82 = (CContactManager *)*(unsigned int *)(v59 + 176);
            *(_QWORD *)(*(_QWORD *)(v59 + 152) + 8LL * (_QWORD)v82) = v112;
            *(_DWORD *)(v59 + 176) = v80;
          }
        }
        else
        {
          v81 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v84 = *(volatile signed __int32 **)(v17 + v16 + 72);
        if ( v81 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v82, (struct CTouchVisual *)v84);
        }
        else
        {
          _InterlockedIncrement(v84 + 2);
          CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v17 + v16 + 72));
        }
        v85 = *(CBaseObject **)(v17 + v16 + 72);
        if ( v85 )
          CBaseObject::Release(v85);
      }
      if ( *(_QWORD *)(v17 + v16 + 80) )
      {
        v113 = *(_QWORD *)(v17 + v16 + 80);
        v86 = *(_DWORD *)(v59 + 176);
        v87 = v86 + 1;
        if ( v86 + 1 >= v86 )
        {
          v88 = 0;
          if ( v87 > *(_DWORD *)(v59 + 172) )
          {
            v90 = DynArrayImpl<0>::AddMultipleAndSet(v59 + 152, 8, 1, &v113);
            v88 = v90;
            if ( v90 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v90, 0xC0u);
          }
          else
          {
            v89 = (CContactManager *)*(unsigned int *)(v59 + 176);
            *(_QWORD *)(*(_QWORD *)(v59 + 152) + 8LL * (_QWORD)v89) = v113;
            *(_DWORD *)(v59 + 176) = v87;
          }
        }
        else
        {
          v88 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v91 = *(volatile signed __int32 **)(v17 + v16 + 80);
        if ( v88 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v89, (struct CTouchVisual *)v91);
        }
        else
        {
          _InterlockedIncrement(v91 + 2);
          CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v17 + v16 + 80));
        }
        v92 = *(CBaseObject **)(v17 + v16 + 80);
        if ( v92 )
          CBaseObject::Release(v92);
      }
      v93 = *(struct CTouchVisual **)(v17 + v16 + 96);
      if ( !v93 )
        goto LABEL_179;
      if ( CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v17 + v16 + 96)) )
        goto LABEL_176;
      v114 = v93;
      v95 = *(_DWORD *)(v59 + 176);
      v96 = v95 + 1;
      if ( v95 + 1 < v95 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_175:
        v93 = *(struct CTouchVisual **)(v17 + v16 + 96);
LABEL_176:
        CContactManager::StopAndRemoveFromRootNode(v94, v93);
LABEL_177:
        v98 = *(CBaseObject **)(v17 + v16 + 96);
        if ( v98 )
          CBaseObject::Release(v98);
LABEL_179:
        DynArray<CTouchContact,0>::RemoveAt(v59 + 56, v108);
        return v10;
      }
      if ( v96 > *(_DWORD *)(v59 + 172) )
      {
        v97 = DynArrayImpl<0>::AddMultipleAndSet(v59 + 152, 8, 1, &v114);
        if ( v97 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v97, 0xC0u);
          goto LABEL_175;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v59 + 152) + 8LL * *(unsigned int *)(v59 + 176)) = v114;
        *(_DWORD *)(v59 + 176) = v96;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + v16 + 96) + 8LL));
      goto LABEL_177;
    }
    v68 = 0;
    if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v17 + v16 + 64)) )
    {
      v69 = v59 + 280;
      LODWORD(v115) = *(_DWORD *)(v17 + v16);
      v70 = *(unsigned int *)(v59 + 304);
      *((_QWORD *)&v115 + 1) = v67;
      v71 = v70 + 1;
      if ( (int)v70 + 1 >= (unsigned int)v70 )
      {
        v72 = 0;
        if ( v71 > *(_DWORD *)(v59 + 300) )
        {
          v73 = DynArrayImpl<0>::AddMultipleAndSet(v69, 16, 1, &v115);
          v72 = v73;
          if ( v73 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0xC0u);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)v69 + 16 * v70) = v115;
          *(_DWORD *)(v59 + 304) = v71;
        }
      }
      else
      {
        v72 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      v68 = v72 >= 0;
      goto LABEL_134;
    }
    if ( *(_DWORD *)(v67 + 296) == 1 || CTouchPressHoldVisual::IsOKToCleanup((CTouchPressHoldVisual *)v69) )
    {
LABEL_134:
      v76 = *(volatile signed __int32 **)(v17 + v16 + 64);
      if ( v68 )
        _InterlockedIncrement(v76 + 2);
      else
        CContactManager::StopAndRemoveFromRootNode((CContactManager *)v69, (struct CTouchVisual *)v76);
      v78 = *(CBaseObject **)(v17 + v16 + 64);
      if ( v78 )
        CBaseObject::Release(v78);
      goto LABEL_142;
    }
    v111 = v67;
    v74 = *(_DWORD *)(v59 + 176);
    v75 = v74 + 1;
    if ( v74 + 1 < v74 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_138:
      v68 = 0;
      goto LABEL_134;
    }
    if ( v75 > *(_DWORD *)(v59 + 172) )
    {
      v77 = DynArrayImpl<0>::AddMultipleAndSet(v59 + 152, 8, 1, &v111);
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, 0xC0u);
        goto LABEL_138;
      }
    }
    else
    {
      v69 = *(unsigned int *)(v59 + 176);
      *(_QWORD *)(*(_QWORD *)(v59 + 152) + 8 * v69) = v111;
      *(_DWORD *)(v59 + 176) = v75;
    }
    v68 = 1;
    goto LABEL_134;
  }
  if ( *(_BYTE *)(v17 + v16 + 105) )
  {
    if ( *(_BYTE *)(v17 + v16 + 104) )
    {
      v35 = *(struct CTouchVisual **)(v17 + v16 + 88);
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)a1, v35);
      if ( v35 )
        CBaseObject::Release(v35);
      *(_QWORD *)(v17 + v16 + 88) = 0LL;
      v13 = v106;
      *(_BYTE *)(v17 + v16 + 104) = 0;
    }
    if ( !*(_BYTE *)(v13 + 324)
      && !*(_QWORD *)(v17 + v16 + 72)
      && !*(_QWORD *)(v17 + v16 + 80)
      && !*(_QWORD *)(v17 + v16 + 96)
      && !*(_QWORD *)(v17 + v16 + 64) )
    {
      if ( *(_DWORD *)(v17 + v16 + 40) )
      {
        v36 = *(CDirectTouchVisual **)(v17 + v16 + 48);
        if ( !v36 || !CDirectTouchVisual::IsInInitialDelay(v36) )
        {
          v37 = v17 + v16;
          if ( !*(_QWORD *)(v17 + v16 + 88) )
          {
            v38 = (unsigned int)((v11.x - *(_DWORD *)(v17 + v16 + 16)) * (v11.x - *(_DWORD *)(v17 + v16 + 16))
                               + (v107.y - *(_DWORD *)(v17 + v16 + 20)) * (v107.y - *(_DWORD *)(v17 + v16 + 20)));
            if ( (int)v38 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 60) * 225.0) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
                McTemplateU0d(v38, (int)&UdwmTouchDragVisual_Start, a2);
              Touch = CreateTouchVisual<CTouchDragVisual>(a7, (CTouchDragVisual **)(v37 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v104 = 1274;
LABEL_59:
                v42 = Touch;
LABEL_60:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, v104);
                return v10;
              }
              CTouchDragVisual::UpdateShowContact(*(_QWORD *)(v37 + 88), *(unsigned int *)(v17 + v16 + 40), v40, v41);
              Touch = CContactManager::AddToTouchNode(v43, a7, *(struct CVisual **)(v37 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v104 = 1276;
                goto LABEL_59;
              }
              *(_QWORD *)(*(_QWORD *)(v37 + 88) + 448LL) = v106;
              v44 = *(CDirectTouchVisual **)(v17 + v16 + 48);
              *(_BYTE *)(v17 + v16 + 104) = 0;
              if ( v44 )
                CDirectTouchVisual::FadeOut(v44);
            }
          }
          v45 = *(CTouchDragVisual **)(v37 + 88);
          if ( v45 )
          {
            CTouchDragVisual::NotifyTouchDrag(v45, &v107);
            v11 = v107;
          }
        }
      }
    }
  }
  v46 = v109;
  v47 = *(float **)(v17 + v16 + 48);
  *(struct tagPOINT *)(v17 + v16 + 8) = v11;
  *(struct tagRECT *)(v17 + v16 + 24) = *v46;
  if ( v47 )
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v47, &v107, v46, v47[87]);
  v48 = *(CIndirectTouchVisual **)(v17 + v16 + 56);
  if ( v48 )
  {
    if ( *(_DWORD *)(v17 + v16 + 4) == 1 )
    {
      CIndirectTouchVisual::UpdateLocation(v48, &v107);
    }
    else
    {
      CIndirectTouchVisual::StartEngage(v48, &v107, *(unsigned int *)(v17 + v16 + 40));
      *(_DWORD *)(v17 + v16 + 4) = 1;
    }
  }
  v49 = *(CTetherVisual **)(v17 + v16 + 72);
  if ( v49 )
    CTetherVisual::UpdatePosition(v49, 0LL, &v107);
  v50 = *(CTextTetherVisual **)(v17 + v16 + 80);
  if ( v50 )
    CTextTetherVisual::SetContactPosition(v50, &v107, (const struct tagRECT *)(v17 + v16 + 24));
  return 0;
}
