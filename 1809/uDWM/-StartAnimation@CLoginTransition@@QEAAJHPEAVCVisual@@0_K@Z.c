/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800325F4
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18000AF90 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18000AE38 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18000B884 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18000B8AC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FCB0 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800308F0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180030924 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180030DD0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180032BA0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x18003B134 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18003B5BC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18003B6D0 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 */

__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        unsigned __int64 a5)
{
  CAnimationEngine *v9; // r14
  int v10; // eax
  int started; // ebx
  CAnimatedTransitionVisual **v12; // r12
  __int64 v13; // rcx
  CAnimatedTransitionVisual **v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rcx
  CBaseObject *v17; // rcx
  struct tagRECT v18; // xmm6
  int v19; // eax
  int v20; // eax
  int v21; // edi
  __int64 *v22; // rcx
  int v23; // ebx
  int v24; // r14d
  int v25; // esi
  __int64 v26; // rax
  void (__fastcall *v27)(__int64 *, _DWORD *); // rax
  __int64 v28; // rcx
  CAnimatedTransitionVisual *v29; // rax
  CAnimatedTransitionVisual *v30; // rax
  CAnimatedTransitionVisual *v31; // rcx
  CAnimatedTransitionVisual *v32; // rcx
  CAnimatedTransitionVisual *v33; // rcx
  CVisual **v34; // rdi
  unsigned __int64 v35; // rax
  struct CVisual *v36; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v39; // eax
  unsigned int v40; // eax
  int v42; // eax
  int v43; // r9d
  int v44; // r9d
  unsigned int v45; // [rsp+28h] [rbp-A1h]
  unsigned int v46; // [rsp+28h] [rbp-A1h]
  struct CAnimationEngine *v47; // [rsp+38h] [rbp-91h]
  unsigned __int64 v49; // [rsp+48h] [rbp-81h] BYREF
  struct tagPOINT v50; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v51[2]; // [rsp+58h] [rbp-71h] BYREF
  CAnimatedTransitionVisual *v52; // [rsp+60h] [rbp-69h] BYREF
  __int128 v53; // [rsp+68h] [rbp-61h] BYREF
  __int64 v54; // [rsp+78h] [rbp-51h]
  unsigned int v55; // [rsp+80h] [rbp-49h]
  CAnimatedTransitionVisual *v56; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v57; // [rsp+98h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+A8h] [rbp-21h] BYREF

  v54 = 0LL;
  v55 = 0;
  v53 = 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLoginTransition_Start);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v47 = CDesktopManager::AcquireAnimationEngine();
  v9 = v47;
  if ( v47 )
  {
    v10 = CLoginTransition::StopAnimation(this);
    started = v10;
    if ( v10 < 0 )
    {
      v45 = 49;
LABEL_56:
      v43 = v10;
LABEL_61:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v45);
      goto LABEL_46;
    }
    *((_QWORD *)this + 4) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)&a3[1]);
    *((_QWORD *)this + 5) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)&a4[1]);
    v12 = (CAnimatedTransitionVisual **)((char *)this + 8);
    v13 = *((_QWORD *)this + 1);
    if ( v13 )
    {
      CBaseObject::Release((CBaseObject *)(v13 + 8));
      *v12 = 0LL;
    }
    v14 = (CAnimatedTransitionVisual **)((char *)this + 16);
    v15 = *((_QWORD *)this + 2);
    if ( v15 )
    {
      CBaseObject::Release((CBaseObject *)(v15 + 8));
      *v14 = 0LL;
    }
    v16 = *((_QWORD *)this + 3);
    if ( v16 )
    {
      CBaseObject::Release((CBaseObject *)(v16 + 8));
      *((_QWORD *)this + 3) = 0LL;
    }
    v17 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      *((_QWORD *)this + 6) = 0LL;
    }
    started = CVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                (struct CVisual **)this + 6);
    if ( started < 0 )
    {
      v45 = 67;
      goto LABEL_58;
    }
    started = CAnimatedTransitionVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                (struct CAnimatedTransitionVisual **)this + 1);
    if ( started < 0 )
    {
      v45 = 68;
      goto LABEL_58;
    }
    started = CAnimatedTransitionVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                (struct CAnimatedTransitionVisual **)this + 2);
    if ( started < 0 )
    {
      v45 = 69;
      goto LABEL_58;
    }
    v50.x = -32000;
    v50.y = -32000;
    CVisual::SetOffset(a3, &v50);
    CVisual::SetOffset(a4, &v50);
    v18 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 460);
    v57 = v18;
    rc = v18;
    OffsetRect(&rc, -32000, -32000);
    v19 = CAnimatedTransitionVisual::SetVisual(*v12, (struct CVisual *)a3, 1, &rc);
    started = v19;
    if ( v19 < 0 )
    {
      v45 = 87;
      v43 = v19;
      goto LABEL_61;
    }
    started = CAnimatedTransitionVisual::SetVisual(*v14, (struct CVisual *)a4, 0, &rc);
    if ( started < 0 )
    {
      v45 = 88;
      goto LABEL_58;
    }
    v20 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*v12, (struct CVisual *)a3, &rc);
    started = v20;
    if ( v20 < 0 )
    {
      v45 = 91;
      v43 = v20;
      goto LABEL_61;
    }
    v21 = 0;
    v22 = (__int64 *)((char *)*v12 + 8);
    v23 = 0;
    v24 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 12)) - _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 4));
    v25 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18, 8)) - _mm_cvtsi128_si32((__m128i)v18);
    v26 = *v22;
    if ( v25 >= 0 )
      v21 = v25;
    v51[0] = v21;
    v27 = *(void (__fastcall **)(__int64 *, _DWORD *))(v26 + 96);
    if ( v24 >= 0 )
      v23 = v24;
    v51[1] = v23;
    v27(v22, v51);
    v28 = (__int64)*v14 + 8;
    v49 = __PAIR64__(v23, v21);
    (*(void (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v28 + 96LL))(v28, &v49);
    v29 = *v12;
    *((_DWORD *)v29 + 184) = a2;
    *((_DWORD *)v29 + 185) = 2;
    v30 = *v14;
    *((_DWORD *)v30 + 184) = a2;
    *((_DWORD *)v30 + 185) = 1;
    CAnimatedTransitionVisual::SetBeginRect(*v12, &v57);
    CAnimatedTransitionVisual::SetBeginRect(*v14, &v57);
    v31 = *v12;
    *(struct tagRECT *)((char *)v31 + 872) = v18;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v31 + 8), 4096);
    v32 = *v14;
    *(struct tagRECT *)((char *)v32 + 872) = v18;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v32 + 8), 4096);
    CAnimatedTransitionVisual::SetBeginAlpha(*v14, 0.0);
    v33 = *v14;
    v34 = (CVisual **)((char *)this + 48);
    if ( v25 < 0 )
      v25 = 0;
    LODWORD(v49) = v25;
    if ( v24 < 0 )
      v24 = 0;
    HIDWORD(v49) = v24;
    v35 = v49;
    *((_QWORD *)v33 + 119) = v49;
    *((_QWORD *)*v12 + 119) = v35;
    v36 = *v34;
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                        + 61));
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 v36,
                 0LL,
                 0,
                 1);
    started = inserted;
    if ( inserted < 0 )
    {
      v46 = 112;
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (CVisual *)((char *)*v34 + 32),
                   (struct CVisual *)(((unsigned __int64)*v12 + 8) & -(__int64)(*v12 != 0LL)),
                   0LL,
                   0,
                   1);
      started = inserted;
      if ( inserted < 0 )
      {
        v46 = 113;
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (CVisual *)((char *)*v34 + 32),
                     (struct CVisual *)(((unsigned __int64)*v14 + 8) & -(__int64)(*v14 != 0LL)),
                     0LL,
                     0,
                     1);
        started = inserted;
        if ( inserted < 0 )
        {
          v46 = 114;
        }
        else
        {
          inserted = CVisual::MoveToFront(*v34, 0);
          started = inserted;
          if ( inserted >= 0 )
          {
            v56 = *v12;
            v39 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v53, 8u, 1, &v56);
            started = v39;
            if ( v39 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xC0u);
            if ( started < 0 )
            {
              v46 = 119;
            }
            else
            {
              v52 = *v14;
              v40 = v55;
              started = v55 + 1 < v55 ? 0x80070216 : 0;
              if ( v55 + 1 < v55 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xB5u);
              }
              else if ( v55 + 1 > HIDWORD(v54) )
              {
                v42 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v53, 8u, 1, &v52);
                started = v42;
                if ( v42 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC0u);
              }
              else
              {
                ++v55;
                *(_QWORD *)(v53 + 8LL * v40) = v52;
              }
              if ( started >= 0 )
              {
                v9 = v47;
                started = CAnimationEngine::RegisterForAnimationCompleteNotification(v47, this);
                if ( started < 0 )
                {
                  v45 = 124;
                }
                else
                {
                  started = CAnimationEngine::ScheduleStartAnimation(v47, a2, (__int64)&v53, (unsigned int *)this + 16);
                  if ( started >= 0 )
                  {
                    v10 = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
                    started = v10;
                    if ( v10 >= 0 )
                    {
                      *((_BYTE *)this + 68) = 1;
                      goto LABEL_46;
                    }
                    v45 = 131;
                    goto LABEL_56;
                  }
                  v45 = 127;
                }
LABEL_58:
                v43 = started;
                goto LABEL_61;
              }
              v46 = 120;
            }
            v44 = started;
LABEL_70:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v46);
            v9 = v47;
LABEL_46:
            if ( started >= 0 )
              goto LABEL_47;
            goto LABEL_53;
          }
          v46 = 117;
        }
      }
    }
    v44 = inserted;
    goto LABEL_70;
  }
  started = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Eu);
LABEL_53:
  CLoginTransition::_CleanupAnimation(this);
LABEL_47:
  if ( v9 )
    CAnimationEngine::Release(v9);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v53);
  return (unsigned int)started;
}
