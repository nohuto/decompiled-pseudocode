/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0031EF0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C0030950 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C0037D50 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037E48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C003817C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0038300 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0038E78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C004C04C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C004D000 (PhysicalToLogicalDPIPoint.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004DE68 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     IsPointerPromotedMouseMessage @ 0x1C004E6C0 (IsPointerPromotedMouseMessage.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C004E6F4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C004E948 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C007FE94 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C0088A10 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C0088A98 (ApiSeEditionDeferWinEventNotify.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0092DA4 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0096964 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C009DB3C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C018F154 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 *     ?SetCursorAsyncPos@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMoveEvent@2@AEBVCInputDest@@@Z @ 0x1C0190FFC (-SetCursorAsyncPos@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMoveEvent@2@AEBVCInputDe.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  const struct CMouseProcessor::CMoveEvent *v2; // rbx
  char v4; // r14
  unsigned int HitTestContext; // eax
  int v6; // edx
  int v7; // edx
  LONG x; // eax
  unsigned int DpiAwarenessContext; // eax
  __int64 v10; // rdx
  CMouseProcessor *v11; // rcx
  const struct CMouseProcessor::CMoveEvent *v12; // rdx
  const struct CInputDest *v13; // r8
  int v14; // esi
  __int64 v15; // r10
  int v16; // r11d
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rdx
  int v22; // edx
  __int64 PtiFromInputDest; // rax
  int v24; // edx
  int v25; // esi
  __int64 v26; // r9
  __int64 v27; // rax
  HWND WindowHandle; // rax
  int v29; // r10d
  int v30; // r9d
  unsigned __int64 v31; // rax
  CMouseProcessor *v32; // rcx
  struct tagPOINT v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v39[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  HWND v42; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v43[32]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v45; // [rsp+140h] [rbp+40h]
  int v46; // [rsp+148h] [rbp+48h]
  int v47; // [rsp+14Ch] [rbp+4Ch]
  int *v48; // [rsp+150h] [rbp+50h]
  int v49; // [rsp+158h] [rbp+58h]
  int v50; // [rsp+15Ch] [rbp+5Ch]
  int *v51; // [rsp+160h] [rbp+60h]
  int v52; // [rsp+168h] [rbp+68h]
  int v53; // [rsp+16Ch] [rbp+6Ch]
  HWND *v54; // [rsp+170h] [rbp+70h]
  int v55; // [rsp+178h] [rbp+78h]
  int v56; // [rsp+17Ch] [rbp+7Ch]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 6, 44, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
  }
  v4 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 104LL) & 0x800) != 0 )
  {
    *((_QWORD *)this + 394) = 0LL;
  }
  else
  {
    v14 = CMouseProcessor::AnalyzeNewMousePosition(this, v2);
    if ( v14 == v16 )
    {
      v4 = v16;
      *((_QWORD *)gpsi + 619) = *(_QWORD *)(v15 + 60);
    }
    else if ( v14 - v16 == v16 )
    {
      *((_QWORD *)gpsi + 620) = *(_QWORD *)(v15 + 52);
      *((_QWORD *)gpsi + 619) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 60LL);
    }
    CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3160, 0LL, 0LL);
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v17, 6, 45, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
      }
      v18 = 11LL;
      goto LABEL_25;
    }
    *((_QWORD *)this + 394) = *(unsigned int *)(*((_QWORD *)v2 + 1) + 40LL);
    v19 = *((_QWORD *)v2 + 1);
    *((_QWORD *)this + 392) = *(_QWORD *)(v19 + 52);
    *((_QWORD *)this + 393) = *(_QWORD *)(v19 + 60);
  }
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 104LL) & 0x800) != 0
    || !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
  {
    v33 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v40 = *((_QWORD *)gpsi + 619);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 850, 1, 1);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
    CMouseProcessor::MouseHitTest(
      this,
      v43,
      &v33,
      &v40,
      *(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL),
      0,
      HitTestContext,
      v6,
      0LL);
    if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
    {
      v27 = *(_QWORD *)(v26 + 80);
      v47 = 0;
      v50 = 0;
      v53 = 0;
      v41 = v27;
      v45 = &v41;
      v36 = *(_DWORD *)(v26 + 52);
      v48 = &v36;
      v37 = *(_DWORD *)(v26 + 56);
      v51 = &v37;
      v46 = v7 - 56;
      v49 = 4;
      v52 = 4;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v43);
      v56 = 0;
      v42 = WindowHandle;
      v54 = &v42;
      v55 = v29;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E62A9, 0LL, 0LL, 6u, &pData);
    }
    if ( !v43[0] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 47, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
      }
      v21 = 13LL;
      goto LABEL_35;
    }
    if ( v4 )
    {
      CInputDest::GetDpiAwarenessContext((CInputDest *)v43);
      CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)v39);
      x = v33.x;
      if ( v39[0] == v33.x && v39[1] == v33.y )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v20, 6, 48, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
        }
        v21 = 11LL;
        goto LABEL_35;
      }
    }
    else
    {
      x = v33.x;
    }
    v34 = __PAIR64__(v33.y, x);
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v43);
    *(_QWORD *)((char *)this + 76) = v34;
    *((_DWORD *)this + 21) = DpiAwarenessContext;
    v10 = *((_QWORD *)v2 + 1) + 96LL;
    v35 = DpiAwarenessContext;
    if ( !(unsigned int)IsPointerPromotedMouseMessage(512LL, v10)
      || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v43) )
    {
      if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
        || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v2 + 1) + 124LL), v43) )
      {
        if ( (unsigned int)(v43[1] - 1) > 2
          || (v31 = CMouseProcessor::AddMouseKeysToWParam(v11, 0LL),
              !CMouseProcessor::ForwardInputToISM(v32, (const struct CInputDest *)v43, v2, &v33, 0, 0x200u, v31)) )
        {
          if ( CMouseProcessor::BufferInputDestinedForContainer(this, v2, (const struct CInputDest *)v43) )
          {
            if ( !*((_BYTE *)this + 4516) )
              CMouseProcessor::ContainerMouseInputBuffer::SetCursorAsyncPos(
                (CMouseProcessor *)((char *)this + 3592),
                v12,
                v13);
          }
          else
          {
            if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(v43, 0LL) )
              CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v43);
            ApiSeEditionDeferWinEventNotify();
            CMouseProcessor::UpdateGlobalCursorOwner(
              this,
              (const struct CInputDest *)v43,
              &v33,
              (const struct tagINPUT_MESSAGE_SOURCE *)(*((_QWORD *)v2 + 1) + 96LL));
            CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
              this,
              (const struct CInputDest *)v43,
              (const struct tagLOGICALPOINT *)&v34,
              v2);
            ApiSetEditionEndDeferWinEventNotify();
          }
        }
        goto LABEL_17;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_56;
      v30 = 50;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_56:
        v21 = 10LL;
LABEL_35:
        InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL), v21);
LABEL_17:
        CInputDest::SetEmpty((CInputDest *)v43, (__int64)v12, (__int64)v13);
        return;
      }
      v30 = 49;
    }
    LOBYTE(v22) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v22, 6, v30, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    goto LABEL_56;
  }
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
  if ( PtiFromInputDest )
  {
    v38 = 0LL;
    v25 = *(_DWORD *)(PtiFromInputDest + 340);
    if ( v25 < 0 )
      v25 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 416) + 280LL);
    PhysicalToLogicalDPIPoint(&v38, (char *)gpsi + 4960, (unsigned int)v25, 0LL);
    v34 = v38;
    *(_QWORD *)((char *)this + 76) = v38;
    *((_DWORD *)this + 21) = v25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v24) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v24, 6, 46, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
  }
  v18 = 12LL;
LABEL_25:
  InputTraceLogging::Mouse::DropMove(*(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL), v18);
}
