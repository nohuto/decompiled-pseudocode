/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00305D0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C002EE8C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C002F9CC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0031C68 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0031CBC (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0031EC0 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C00320C0 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C00320DC (IsPointerPromotedMouseMessage.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00342D0 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0039790 (PhysicalToLogicalDPIPoint.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006F260 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C006FAD4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0073D88 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C00834A4 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  CMouseProcessor::CMouseEvent *v2; // rdi
  __int64 *v4; // rsi
  char v5; // r14
  char v6; // r12
  unsigned int HitTestContext; // eax
  int v8; // edx
  LONG x; // eax
  unsigned int DpiAwarenessContext; // eax
  __int64 v11; // rdx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // r9
  int v17; // r15d
  __int64 v18; // rcx
  int v19; // r9d
  void *v20; // rdx
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  void *v23; // rdx
  __int64 PtiFromInputDest; // rax
  int v25; // edi
  __int64 v26; // r9
  struct tagPOINT v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  HWND WindowHandle; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v37[12]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF
  __int64 *v39; // [rsp+180h] [rbp+80h]
  __int64 v40; // [rsp+188h] [rbp+88h]
  int *v41; // [rsp+190h] [rbp+90h]
  __int64 v42; // [rsp+198h] [rbp+98h]
  int *v43; // [rsp+1A0h] [rbp+A0h]
  __int64 v44; // [rsp+1A8h] [rbp+A8h]
  HWND *p_WindowHandle; // [rsp+1B0h] [rbp+B0h]
  __int64 v46; // [rsp+1B8h] [rbp+B8h]

  v2 = a2;
  v4 = (__int64 *)((char *)this + 8);
  v5 = 4;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 39, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
  v6 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x1000) != 0 )
  {
    *((_QWORD *)this + 306) = 0LL;
LABEL_3:
    if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x1000) == 0
      && (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
      if ( PtiFromInputDest )
      {
        v25 = *(_DWORD *)(PtiFromInputDest + 340);
        if ( v25 < 0 )
          v25 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 424) + 280LL);
        PhysicalToLogicalDPIPoint(&v32, (char *)gpsi + 4960, (unsigned int)v25, 0LL);
        v28 = v32;
        *(_QWORD *)((char *)this + 84) = v32;
        *((_DWORD *)this + 23) = v25;
      }
      v19 = 41;
      goto LABEL_33;
    }
    v27 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v34 = *((_QWORD *)gpsi + 619);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
    CMouseProcessor::MouseHitTest(
      (__int64)this,
      v37,
      &v27,
      (__int64)&v34,
      *(_QWORD *)(*(_QWORD *)v2 + 72LL),
      0,
      HitTestContext,
      v8,
      0LL,
      0LL);
    if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
    {
      v35 = *(_QWORD *)(v26 + 72);
      v39 = &v35;
      v30 = *(_DWORD *)(v26 + 48);
      v41 = &v30;
      v31 = *(_DWORD *)(v26 + 52);
      v43 = &v31;
      v40 = 8LL;
      v42 = 4LL;
      v44 = 4LL;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v37);
      p_WindowHandle = &WindowHandle;
      v46 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A194E, 0LL, 0LL, 6u, &pData);
    }
    if ( LODWORD(v37[0]) )
    {
      if ( !v6 )
      {
        x = v27.x;
LABEL_8:
        v28 = __PAIR64__(v27.y, x);
        DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v37);
        *(_QWORD *)((char *)this + 84) = v28;
        *((_DWORD *)this + 23) = DpiAwarenessContext;
        v11 = *(_QWORD *)v2 + 80LL;
        v29 = DpiAwarenessContext;
        if ( !(unsigned int)IsPointerPromotedMouseMessage(512LL, v11)
          || (unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                *(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL),
                                v37,
                                v4) )
        {
          if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
            || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)v2 + 108LL), v37, v4) )
          {
            if ( !CInputDest::DoesBelongToForeground((__int64)v37, 0) )
              CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v37);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v12) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v12,
                15,
                10,
                (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
            }
            if ( (int)IsEditionDeferWinEventNotifySupported() >= 0 )
              EditionDeferWinEventNotify();
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v13) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                15,
                11,
                (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
            }
            CMouseProcessor::UpdateGlobalCursorOwner(
              this,
              (const struct CInputDest *)v37,
              &v27,
              (const struct tagINPUT_MESSAGE_SOURCE *)(*(_QWORD *)v2 + 80LL));
            CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
              this,
              (const struct CInputDest *)v37,
              (const struct tagLOGICALPOINT *)&v28,
              v2);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v14) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v14,
                15,
                12,
                (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
            }
            if ( (int)IsEditionEndDeferWinEventNotifySupported() >= 0 )
              EditionEndDeferWinEventNotify();
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v15) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v15,
                15,
                13,
                (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
            }
            goto LABEL_24;
          }
          v21 = 45;
        }
        else
        {
          v21 = 44;
        }
        v5 = 3;
        v22 = *v4;
LABEL_39:
        v23 = &WPP_c4e458f8521336340531e679a09eecc3_Traceguids;
        LOBYTE(v23) = v5;
        WPP_RECORDER_SF_(v22, (_DWORD)v23, 10, v21, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
LABEL_24:
        CInputDest::SetEmpty((CInputDest *)v37);
        return;
      }
      CInputDest::GetDpiAwarenessContext((CInputDest *)v37);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)v33);
      x = v27.x;
      if ( v33[0] != v27.x || v33[1] != v27.y )
        goto LABEL_8;
      v21 = 43;
    }
    else
    {
      v21 = 42;
    }
    v22 = *((_QWORD *)this + 1);
    goto LABEL_39;
  }
  v17 = CMouseProcessor::AnalyzeNewMousePosition(this, v2);
  if ( v17 == 1 )
  {
    v6 = 1;
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(v16 + 56);
  }
  else if ( v17 == 2 )
  {
    *((_QWORD *)gpsi + 620) = *(_QWORD *)(v16 + 48);
    *((_QWORD *)gpsi + 619) = *(_QWORD *)(*(_QWORD *)v2 + 56LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 2456, 0LL, 0LL);
  if ( v17 )
  {
    *((_QWORD *)this + 306) = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
    v18 = *(_QWORD *)v2;
    *(_QWORD *)((char *)this + 2428) = *(_QWORD *)(*(_QWORD *)v2 + 48LL);
    *(_QWORD *)((char *)this + 2436) = *(_QWORD *)(v18 + 56);
    goto LABEL_3;
  }
  v19 = 40;
LABEL_33:
  v20 = &WPP_c4e458f8521336340531e679a09eecc3_Traceguids;
  LOBYTE(v20) = 3;
  WPP_RECORDER_SF_(*v4, (_DWORD)v20, 10, v19, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
}
