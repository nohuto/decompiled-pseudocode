/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0157840 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C002EFF8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C002F9CC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0031CBC (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C00320C0 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00342D0 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006F260 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006F57C (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C006F6B4 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C006FAD4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006FC64 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01579B8 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C0157F34 (-GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA-AW4DIT_HITTESTATTRIBUTES@@XZ.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C0157F94 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01581AC (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting @ 0x1C0158448 (_anonymous_namespace_--HasThreadRequestedLegacyMouseWheelRouting.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C0159504 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z @ 0x1C01596B4 (-SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0159920 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C016266C (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C0162FCC (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  __int64 v2; // r13
  __int64 v5; // rbx
  char v6; // r15
  struct tagPOINT v7; // rdi
  __int64 v8; // xmm0_8
  int v9; // eax
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int WheelMessage; // eax
  BOOL v14; // esi
  unsigned __int64 v15; // rdi
  unsigned int HitTestContext; // ebx
  _DWORD *v17; // rcx
  int HitTestAttributes; // eax
  _QWORD *v19; // rax
  CMouseProcessor *v20; // rcx
  __int64 v21; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // r8
  char v34; // bl
  const struct tagPOINT *v35; // rdi
  unsigned int v36; // r15d
  __int16 v37; // si
  unsigned __int64 v38; // r14
  HWND WindowHandle; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned int v42; // eax
  int v43; // r8d
  int v44; // edi
  CMouseProcessor *v45; // rcx
  CMouseProcessor *v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 *v49; // rbx
  __int64 v50; // r14
  __int64 v51; // r15
  int v52; // r12d
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // r15
  int v61; // r12d
  unsigned __int64 v62; // rsi
  int v63; // r10d
  int v64; // edi
  __int64 v65; // rdx
  CMouseProcessor::CWheelEvent *v66; // rcx
  __int64 v67; // r8
  int v68; // eax
  bool ShouldDeliverWheelEventToInputDest; // [rsp+60h] [rbp-A0h]
  unsigned int v70; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  int v72; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  CMouseProcessor::CMouseEvent *v74; // [rsp+80h] [rbp-80h]
  __int64 v75; // [rsp+88h] [rbp-78h]
  struct tagPOINT v76; // [rsp+90h] [rbp-70h] BYREF
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h] BYREF
  int v79; // [rsp+A8h] [rbp-58h]
  _OWORD v80[11]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v81[12]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v82[11]; // [rsp+220h] [rbp+120h] BYREF
  struct tagPOINT v83; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v84; // [rsp+2D8h] [rbp+1D8h]
  int v85; // [rsp+2DCh] [rbp+1DCh]
  int v86; // [rsp+2E0h] [rbp+1E0h]
  __int64 ExtraInfoForHook; // [rsp+2E8h] [rbp+1E8h]
  _QWORD v88[22]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v89; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v90[192]; // [rsp+3B0h] [rbp+2B0h] BYREF

  v2 = 0LL;
  v74 = a2;
  v70 = 0;
  v5 = *(_QWORD *)a2;
  v6 = 0;
  v7 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v76 = v7;
  if ( (*(_DWORD *)(v5 + 88) & 0x400) != 0 )
    v7 = *(struct tagPOINT *)(v5 + 48);
  v75 = (LOWORD(v7.y) << 16) | LOWORD(v7.x);
  memset(v88, 0, sizeof(v88));
  v89 = 0;
  v83 = v7;
  v84 = *(unsigned __int16 *)(v5 + 18) << 16;
  v85 = *(unsigned __int8 *)(v5 + 88) >> 7;
  v86 = *(_DWORD *)(v5 + 64);
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v8 = *(_QWORD *)(v5 + 108);
  v9 = *(_DWORD *)(v5 + 116);
  v10 = ~*(_BYTE *)(v5 + 88);
  v78 = v8;
  v79 = v9;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v11, v12);
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v83, WheelMessage, &v78, v10 & 1) )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xAu, 0x24u, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
LABEL_25:
    InputTraceLogging::Mouse::DropInput();
    goto LABEL_39;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2456, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v72 = 0;
  v70 = 0;
  if ( *((_DWORD *)a2 + 2) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v71 = *((_QWORD *)gpsi + 619);
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) != 0;
    v15 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a2);
    HitTestAttributes = CMouseProcessor::CWheelEvent::GetHitTestAttributes(v17);
    v19 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            v81,
            &v76,
            (__int64)&v71,
            v15,
            HitTestAttributes,
            HitTestContext,
            v14,
            &v72,
            &v70);
    CInputDest::operator=((__int64)v88, v19);
    CInputDest::SetEmpty((CInputDest *)v81);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v20,
                                           a2,
                                           (const struct CInputDest *)v88);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v88, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v88);
      v21 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) != 0
        && (*(_DWORD *)(v21 + 84) == 1
         || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v21 + 108), v88, (__int64 *)this + 1)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2456, (int)v88, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v88);
      if ( !anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting((__int64)ThreadInfo) )
        goto LABEL_20;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v82);
      v24 = InputDestFromForegroundFocus[1];
      v80[0] = *InputDestFromForegroundFocus;
      v25 = InputDestFromForegroundFocus[2];
      v80[1] = v24;
      v26 = InputDestFromForegroundFocus[3];
      v80[2] = v25;
      v27 = InputDestFromForegroundFocus[4];
      v80[3] = v26;
      v28 = InputDestFromForegroundFocus[5];
      v80[4] = v27;
      v29 = InputDestFromForegroundFocus[6];
      v80[5] = v28;
      v30 = InputDestFromForegroundFocus[8];
      v80[6] = v29;
      v80[7] = InputDestFromForegroundFocus[7];
      v31 = InputDestFromForegroundFocus[9];
      v80[8] = v30;
      v32 = InputDestFromForegroundFocus[10];
      v80[9] = v31;
      v80[10] = v32;
      CInputDest::CInputDest((CInputDest *)v90, (const struct tagINPUTDEST *)v80);
      v6 = 1;
      v34 = 1;
      if ( CInputDest::operator==((unsigned int *)v88, (__int64)v90, v33) )
LABEL_20:
        v34 = 0;
      if ( (v6 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v90);
      if ( v34 )
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)this + 1),
          4u,
          0xAu,
          0x25u,
          (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
        goto LABEL_25;
      }
    }
  }
  v35 = *(const struct tagPOINT **)a2;
  v36 = *((_DWORD *)a2 + 2);
  v37 = *(_WORD *)(*(_QWORD *)a2 + 18LL);
  v38 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v88);
  v42 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v40, v41);
  InputTraceLogging::Mouse::ProcessWheel(v38, v35 + 6, v42, v37, v36, WindowHandle, ShouldDeliverWheelEventToInputDest);
  v43 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  v44 = v43 | 0x10;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x100) == 0 )
    v44 = v43;
  LODWORD(v71) = v44;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v88, 1, 1) )
    {
      if ( v72 )
      {
        CMouseProcessor::SendWheelInputToMT(v45, (const struct CInputDest *)v88, a2, v70);
      }
      else
      {
        v77 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
        v73 = (unsigned __int64)&v77 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0);
        if ( CInputDest::IsCompositionInput((CInputDest *)v88) && HIDWORD(v88[10]) == 2 )
          v2 = v88[9];
        v47 = *(_QWORD *)a2;
        v48 = *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL);
        v49 = (__int64 *)(*(_QWORD *)a2 + 80LL);
        v50 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
        v51 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
        v52 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
        v53 = CMouseProcessor::AddMouseKeysToWParam(v46, v48 << 16);
        v56 = CMouseProcessor::CWheelEvent::GetWheelMessage(v74, v54, v55);
        ApiSetEditionPostInputMessage((__int64)v88, v2, v56, v53, v75, v52, v51, v50, v71, v49, v47, v73);
      }
    }
  }
  else if ( gpqForeground && !anonymous_namespace_::InMouseRawInputMode(0LL, 1, 1) )
  {
    v57 = *(_QWORD *)a2;
    v58 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
    v59 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
    v60 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
    v61 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
    v73 = v58;
    v62 = (unsigned __int64)&v73 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v74) != 0);
    LODWORD(v71) = v44 | 0x40;
    v64 = v63 << 16;
    v68 = CMouseProcessor::CWheelEvent::GetWheelMessage(v66, v65, v67);
    ApiSetEditionPostMouseWheelToForeground(v68, v64, v75, v61, v60, v59, v71, v57 + 80, v62);
  }
LABEL_39:
  CInputDest::SetEmpty((CInputDest *)v88);
}
