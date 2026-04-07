/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009382C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18000B3C8 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800458F4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800475EC (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x1800911C4 (--$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800955A4 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800994EC (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800995D0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800999AC (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  int v4; // ebx
  CBaseObject *v5; // r14
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v9; // rdi
  CTetherVisual *v10; // rax
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  int v14; // r8d
  __int64 v15; // rbx
  int updated; // eax
  CContactManager *v17; // rcx
  __int64 v18; // rax
  CBaseObject *v19; // r14
  char v20; // dl
  __int64 v21; // rcx
  CDirectTouchVisual **v22; // r8
  int Touch; // eax
  CContactManager *v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // r14d
  CContactManager *v29; // rcx
  int v30; // eax
  volatile signed __int32 *v31; // rdx
  CBaseObject *v32; // rcx
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v34; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v35; // [rsp+80h] [rbp+40h] BYREF
  __int64 v36; // [rsp+88h] [rbp+48h] BYREF

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v35 = 0LL;
  GetDesktopID(1LL, &v34);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(112LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 112LL * (unsigned int)v6, *(_DWORD *)(v9 + v7 + 4) != 1) )
  {
LABEL_5:
    v4 = -2147024809;
    goto LABEL_6;
  }
  v10 = *(CTetherVisual **)(v7 + v9 + 72);
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( v10 )
    {
      CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
      goto LABEL_6;
    }
    v11 = CreateTouchVisual<CTetherVisual>(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
            v34,
            &v35);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3C9u);
      v5 = v35;
      goto LABEL_49;
    }
    v5 = v35;
    v13 = CContactManager::AddToTouchNode(v12, v34, v35);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3CAu);
LABEL_49:
      if ( v5 )
        CBaseObject::Release(v5);
      goto LABEL_6;
    }
    v15 = *((_QWORD *)this + 7);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmTetherVisual_Start, v14);
    *((_BYTE *)v5 + 416) = 1;
    updated = CTetherVisual::UpdatePosition(
                v5,
                (const struct tagPOINT *)((char *)a2 + 12),
                (const struct tagPOINT *)(v9 + v15 + 8));
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x114u);
      CTetherVisual::Stop(v5);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3CBu);
      goto LABEL_49;
    }
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v5;
    v18 = *((_QWORD *)this + 7);
    v19 = *(CBaseObject **)(v9 + v18 + 88);
    if ( v19 )
    {
      CContactManager::StopAndRemoveFromRootNode(v17, *(struct CTouchVisual **)(v9 + v18 + 88));
      CBaseObject::Release(v19);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
      *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
      v20 = *((_BYTE *)this + 324);
      if ( v20 || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
      {
        v21 = *((_QWORD *)this + 7);
        v22 = (CDirectTouchVisual **)(v21 + v9 + 48);
        if ( !*v22 && !*(_QWORD *)(v21 + v9 + 96) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                    v34,
                    v22);
          v4 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3DDu);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v24, v34, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
          v20 = *((_BYTE *)this + 324);
          v21 = *((_QWORD *)this + 7);
        }
        v25 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
        if ( !v20 )
          v25 = *(unsigned int *)(v21 + v9 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v21 + v9 + 48), v21 + v9 + 8, v21 + v9 + 24, v25);
      }
    }
  }
  else
  {
    if ( !v10 )
    {
      v4 = -2147024809;
      goto LABEL_49;
    }
    v36 = *(_QWORD *)(v7 + v9 + 72);
    v26 = *((_DWORD *)this + 44);
    v27 = v26 + 1;
    v28 = v26 + 1 < v26 ? 0x80070216 : 0;
    if ( v26 + 1 >= v26 )
    {
      if ( v27 > *((_DWORD *)this + 43) )
      {
        v30 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v36);
        v28 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xC0u);
      }
      else
      {
        v29 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v29) = v36;
        *((_DWORD *)this + 44) = v27;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xB5u);
    }
    v31 = *(volatile signed __int32 **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v28 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v29, (struct CTouchVisual *)v31);
    }
    else
    {
      _InterlockedIncrement(v31 + 2);
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
    }
    v32 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v32 )
    {
      CBaseObject::Release(v32);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return (unsigned int)v4;
}
