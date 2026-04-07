/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180097FE0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180030018 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180045954 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047CE4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x180095A54 (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180099CAC (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18009DB5C (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x18009DC50 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18009DFD8 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
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
  char v20; // r8
  __int64 v21; // rcx
  CDirectTouchVisual **v22; // rdx
  int Touch; // eax
  CContactManager *v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // edx
  CContactManager *v28; // rcx
  int v29; // eax
  volatile signed __int32 *v30; // rdx
  CBaseObject *v31; // rcx
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v34; // [rsp+80h] [rbp+40h] BYREF
  __int64 v35; // [rsp+88h] [rbp+48h] BYREF

  v32 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v34 = 0LL;
  GetDesktopID(1LL, &v33);
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
    v11 = CreateTouchVisual<CTetherVisual>(v33, &v34);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3C9u);
      v5 = v34;
      goto LABEL_49;
    }
    v5 = v34;
    v13 = CContactManager::AddToTouchNode(v12, v33, v34);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x110u);
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
          Touch = CreateTouchVisual<CDirectTouchVisual>(v33, v22);
          v4 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3DDu);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v24, v33, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
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
    v35 = *(_QWORD *)(v7 + v9 + 72);
    v26 = *((_DWORD *)this + 44);
    v27 = v26 + 1;
    if ( v26 + 1 >= v26 )
    {
      if ( v27 > *((_DWORD *)this + 43) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, &v35);
        LODWORD(v5) = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0xC0u);
      }
      else
      {
        v28 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v28) = v35;
        *((_DWORD *)this + 44) = v27;
      }
    }
    else
    {
      LODWORD(v5) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v30 = *(volatile signed __int32 **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( (int)v5 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v28, (struct CTouchVisual *)v30);
    }
    else
    {
      _InterlockedIncrement(v30 + 2);
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
    }
    v31 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v31 )
    {
      CBaseObject::Release(v31);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v32);
  return (unsigned int)v4;
}
