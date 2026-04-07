/*
 * XREFs of ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008954C
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x18003CE90 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800892F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180089458 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18003CBD8 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18007F8B0 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x180085DC4 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180086080 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18008ABC0 (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForDisplay(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  unsigned int *Element; // rdi
  unsigned int v7; // ebx
  int DisplayRect; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v17; // eax
  CProjectionBorderVisual *v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (unsigned int *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
                              this + 7,
                              *(_QWORD *)a3);
  if ( Element )
  {
    DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v21);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v9 = (unsigned int)DisplayRect;
      v10 = 1042LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)v9);
      goto LABEL_19;
    }
    v22 = v21;
    if ( !(unsigned int)GetDesktopID(1LL, &v19) )
    {
      v7 = -2147467259;
      v10 = 1051LL;
LABEL_23:
      v9 = v7;
      goto LABEL_24;
    }
    v11 = CProjectionBorderVisual::Create(&v18);
    v7 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 1054LL;
      goto LABEL_24;
    }
    *((_DWORD *)v18 + 75) = 1;
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                    v19,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                      v19);
      if ( !OverlayRootVisualForDesktop )
      {
        v7 = -2147467261;
        v10 = 1064LL;
        goto LABEL_23;
      }
    }
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 v18,
                 0LL,
                 0,
                 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v9 = (unsigned int)inserted;
      v10 = 1065LL;
      goto LABEL_24;
    }
    CProjectionBorderVisual::UpdateRect(v18, &v22);
    (*(void (__fastcall **)(CProjectionBorderVisual *))(*(_QWORD *)v18 + 104LL))(v18);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 3) + 64LL))(*((_QWORD *)v18 + 3));
    v14 = Element[12];
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_22:
      v10 = 1070LL;
      goto LABEL_23;
    }
    if ( v15 > Element[11] )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(Element + 6), 8, 1, &v18);
      v7 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC0u);
        goto LABEL_22;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)Element + 3) + 8LL * Element[12]) = v18;
      Element[12] = v15;
    }
    v7 = 0;
    goto LABEL_19;
  }
  v7 = -2147418113;
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v7;
}
