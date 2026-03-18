/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C006EA90 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C002F9CC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0031CBC (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C00320C0 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C00320DC (IsPointerPromotedMouseMessage.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006F260 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006F518 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C006F540 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006F57C (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C006F6B4 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006F730 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006F7E4 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C006F968 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C006F990 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C006FA28 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C006FA50 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C006FAD4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C006FB98 (ApiSetEditionLLMouseButtonHook.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006FC64 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C006FC8C (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C006FEB0 (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C006FF70 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00702B8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x1C0070394 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0070538 (ApiSetEditionHandleHungWindow.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01579B8 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01580CC (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0158894 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  __int64 *v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // xmm0_8
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // r12d
  unsigned int ButtonMessage; // r13d
  struct tagPOINT v12; // rbx
  unsigned int HitTestContext; // edx
  int v14; // ecx
  int MessageWParamInfo; // eax
  __int64 v16; // rcx
  int v17; // eax
  BOOL v18; // edi
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdi
  _BOOL8 v22; // rdx
  int v23; // r13d
  BOOL v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  char v29; // bl
  __int64 v30; // rdx
  unsigned __int8 v31; // al
  __int64 v32; // r13
  int v33; // edx
  int v34; // ecx
  char v35; // al
  CMouseProcessor::CButtonEvent *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  int v39; // r14d
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rax
  CMouseProcessor *v42; // rcx
  int v43; // eax
  unsigned int v44; // edi
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // r9
  unsigned __int16 v48; // r9
  unsigned __int8 v49; // dl
  __int64 v50; // rcx
  _QWORD *HasMouseOwner; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int16 v55; // r9
  unsigned __int8 v56; // dl
  unsigned __int8 v57; // al
  int v58; // ecx
  char v59; // r8
  __int64 v60; // r9
  __int64 v61; // r10
  CThreadLockInputDest *v62; // rcx
  _OWORD *RawMouseInputDestination; // rax
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  BOOL v74; // ebx
  unsigned int VKey; // eax
  __int64 PtiFromInputDest; // rax
  __int64 v77; // [rsp+38h] [rbp-C8h]
  int v78; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v79; // [rsp+68h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h] BYREF
  int v81; // [rsp+78h] [rbp-88h] BYREF
  int v82; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h]
  unsigned int *v85; // [rsp+90h] [rbp-70h]
  __int64 *v86; // [rsp+98h] [rbp-68h]
  __int64 v87; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v88; // [rsp+A8h] [rbp-58h] BYREF
  HWND WindowHandle; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v90; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-40h] BYREF
  int v92; // [rsp+C8h] [rbp-38h]
  __int64 v93; // [rsp+D0h] [rbp-30h] BYREF
  int v94; // [rsp+D8h] [rbp-28h]
  _QWORD v95[5]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v96[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v97[64]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v98[11]; // [rsp+190h] [rbp+90h] BYREF
  char v99[176]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v100; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v101; // [rsp+2F8h] [rbp+1F8h]
  struct tagPOINT v102; // [rsp+300h] [rbp+200h] BYREF
  int v103; // [rsp+308h] [rbp+208h]
  int v104; // [rsp+30Ch] [rbp+20Ch]
  int v105; // [rsp+310h] [rbp+210h]
  unsigned __int64 ExtraInfoForHook; // [rsp+318h] [rbp+218h]
  _OWORD v107[4]; // [rsp+320h] [rbp+220h] BYREF
  __int128 v108; // [rsp+360h] [rbp+260h]
  __int128 v109; // [rsp+370h] [rbp+270h]
  __int128 v110; // [rsp+380h] [rbp+280h]
  __int128 v111; // [rsp+390h] [rbp+290h]
  __int128 v112; // [rsp+3A0h] [rbp+2A0h]
  __int128 v113; // [rsp+3B0h] [rbp+2B0h]
  __int128 v114; // [rsp+3C0h] [rbp+2C0h]
  _DWORD v115[48]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _OWORD v116[11]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v117[192]; // [rsp+550h] [rbp+450h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+610h] [rbp+510h] BYREF
  __int64 *v119; // [rsp+630h] [rbp+530h]
  __int64 v120; // [rsp+638h] [rbp+538h]
  int *v121; // [rsp+640h] [rbp+540h]
  __int64 v122; // [rsp+648h] [rbp+548h]
  int *v123; // [rsp+650h] [rbp+550h]
  __int64 v124; // [rsp+658h] [rbp+558h]
  __int64 *v125; // [rsp+660h] [rbp+560h]
  __int64 v126; // [rsp+668h] [rbp+568h]
  HWND *p_WindowHandle; // [rsp+670h] [rbp+570h]
  __int64 v128; // [rsp+678h] [rbp+578h]

  v85 = (unsigned int *)a2;
  v4 = (__int64 *)((char *)this + 8);
  v5 = *((_QWORD *)this + 1);
  v86 = v4;
  WPP_RECORDER_SF_(v5, 4u, 0xAu, 0x15u, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
  v6 = *(_QWORD *)a2;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
  v101 = *(_DWORD *)(*(_QWORD *)a2 + 116LL);
  v8 = *(_DWORD *)(v6 + 84) == 1;
  v100 = v7;
  LOBYTE(v9) = v8;
  v10 = 0;
  if ( (unsigned __int8)anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(v6, v9, &v100) )
  {
    if ( *((_QWORD *)a2 + 3) )
    {
      ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
      v83 = ButtonMessage;
      if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
        goto LABEL_4;
      if ( ButtonMessage == 513 )
      {
        if ( *((_BYTE *)this + 2536) )
        {
          v57 = 0;
        }
        else
        {
          v57 = 1;
          *((_DWORD *)this + 635) = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
        }
        *((_BYTE *)this + 2536) = v57;
        v58 = v57;
      }
      else
      {
        if ( ButtonMessage != 514 )
          goto LABEL_4;
        v59 = *((_BYTE *)this + 2536);
        if ( v59 )
        {
          if ( *(_DWORD *)(*(_QWORD *)a2 + 64LL) - *((_DWORD *)this + 635) <= (unsigned int)dword_1C01C8660 )
          {
            *((_BYTE *)this + 2536) = 0;
            v59 = 0;
          }
          if ( v59 )
            goto LABEL_55;
        }
        v58 = 1;
      }
      if ( !v58 )
      {
LABEL_55:
        v55 = 24;
        v56 = 4;
        goto LABEL_56;
      }
LABEL_4:
      v12 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
      v79 = v12;
      v87 = *((_QWORD *)gpsi + 619);
      if ( !*((_QWORD *)a2 + 3) )
        MicrosoftTelemetryAssertTriggeredMsgKM("We should not get here if message cannot be produced for this CButtonEvent");
      HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a2);
      v14 = 8;
      if ( *((_DWORD *)a2 + 4) != 1 )
        v14 = 0;
      CMouseProcessor::MouseHitTest(
        (__int64)this,
        v107,
        &v79,
        (__int64)&v87,
        *(_QWORD *)(*(_QWORD *)a2 + 72LL),
        v14,
        HitTestContext,
        0,
        0LL,
        0LL);
      if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
      {
        v88 = *(_QWORD *)(v60 + 72);
        v119 = &v88;
        v81 = *(_DWORD *)(v60 + 48);
        v121 = &v81;
        v82 = *(_DWORD *)(v60 + 52);
        v123 = &v82;
        v125 = &v80;
        v120 = 8LL;
        v122 = v61;
        v124 = v61;
        LODWORD(v80) = ButtonMessage;
        v126 = v61;
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v107);
        p_WindowHandle = &WindowHandle;
        v128 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1A51, 0LL, 0LL, 7u, &pData);
      }
      v102 = v12;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      v16 = *(_QWORD *)a2;
      v103 = MessageWParamInfo;
      v104 = *(unsigned __int8 *)(v16 + 88) >> 7;
      v105 = *(_DWORD *)(v16 + 64);
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v96, (struct CInputDest *)v107);
      v17 = *(_DWORD *)(*(_QWORD *)a2 + 116LL);
      v18 = (*(_BYTE *)(*(_QWORD *)a2 + 88LL) & 1) == 0;
      v91 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
      v92 = v17;
      v19 = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                           (unsigned int)v107,
                           (unsigned int)&v102,
                           v19,
                           (unsigned int)&v91,
                           v18) )
      {
        WPP_RECORDER_SF_(*v4, 4u, 0xAu, 0x19u, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
        InputTraceLogging::Mouse::DropInput(*(_QWORD *)(*(_QWORD *)a2 + 72LL), 0LL);
        v62 = (CThreadLockInputDest *)v96;
        goto LABEL_94;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v96);
      CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 2456, 0LL, 3LL);
      if ( (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL) )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v99);
        v64 = RawMouseInputDestination[1];
        v98[0] = *RawMouseInputDestination;
        v65 = RawMouseInputDestination[2];
        v98[1] = v64;
        v66 = RawMouseInputDestination[3];
        v98[2] = v65;
        v67 = RawMouseInputDestination[4];
        v98[3] = v66;
        v68 = RawMouseInputDestination[5];
        v98[4] = v67;
        v69 = RawMouseInputDestination[6];
        v98[5] = v68;
        v70 = RawMouseInputDestination[7];
        v98[6] = v69;
        v71 = RawMouseInputDestination[8];
        v98[7] = v70;
        v72 = RawMouseInputDestination[9];
        v98[8] = v71;
        v73 = RawMouseInputDestination[10];
        v98[9] = v72;
        v98[10] = v73;
        CInputDest::CInputDest((CInputDest *)v115, (const struct tagINPUTDEST *)v98);
        if ( v115[0] )
        {
          v74 = *((_DWORD *)a2 + 4) == 2;
          VKey = CMouseProcessor::CButtonEvent::GetVKey(a2);
          ApiSetEditionUpdateAsyncKeyState(v115, VKey, v74);
          WPP_RECORDER_SF_(*v4, 4u, 0xAu, 0x1Au, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
          CInputDest::SetEmpty((CInputDest *)v115);
          goto LABEL_41;
        }
        CInputDest::SetEmpty((CInputDest *)v115);
      }
      if ( LODWORD(v107[0]) )
      {
        v78 = IsPointerPromotedMouseMessage(ButtonMessage, (_DWORD *)(*(_QWORD *)a2 + 80LL));
        if ( v78 && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v20 + 108), v107, v4) )
          goto LABEL_41;
        v21 = LOWORD(v79.x) | (LOWORD(v79.y) << 16);
        v22 = *((_DWORD *)a2 + 4) == 2;
        v84 = v21;
        ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v107, v22);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) )
        {
          v23 = v78;
          if ( v78
            && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                   *(_QWORD *)(*(_QWORD *)a2 + 108LL),
                                   (char *)this + 2552,
                                   v4) )
          {
            goto LABEL_41;
          }
          v116[0] = v107[0];
          v116[1] = v107[1];
          v116[2] = v107[2];
          v116[3] = v107[3];
          v116[4] = v108;
          v116[5] = v109;
          v116[6] = v110;
          v116[7] = v111;
          v116[8] = v112;
          v116[9] = v113;
          v116[10] = v114;
          if ( *((_DWORD *)a2 + 4) == 1 )
          {
            *((_DWORD *)this + 636) |= CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
            CInputDest::operator=(v107, (char *)this + 2552);
          }
          else
          {
            HasMouseOwner = (_QWORD *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v117, v107, a2);
            CInputDest::operator=((__int64)v107, HasMouseOwner);
            CInputDest::SetEmpty((CInputDest *)v117);
          }
          if ( !LODWORD(v107[0]) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v54);
          ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
            (unsigned int)v107,
            (unsigned int)v116,
            v12.x,
            v79.x,
            (__int64)&v79);
          LODWORD(v21) = LOWORD(v79.x) | (LOWORD(v79.y) << 16);
          v84 = (int)v21;
        }
        else
        {
          if ( *((_DWORD *)a2 + 4) == 1 )
          {
            if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                    this,
                    (const struct CInputDest *)v107,
                    a2,
                    v21,
                    v12,
                    ButtonMessage) )
            {
              v48 = 28;
              goto LABEL_78;
            }
          }
          else
          {
            *((_DWORD *)this + 636) &= ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a2);
          }
          v23 = v78;
        }
        v24 = *((_DWORD *)a2 + 4) == 2;
        v25 = CMouseProcessor::CButtonEvent::GetVKey(a2);
        ApiSetEditionUpdateAsyncKeyState(v107, v25, v24);
        if ( *((_DWORD *)a2 + 4) == 1 )
        {
          memset(v95, 0, sizeof(v95));
          v95[0] = *((_QWORD *)&v109 + 1);
          v26 = *(_QWORD *)a2;
          LODWORD(v95[2]) = 4;
          v27 = *(_QWORD *)(v26 + 8);
          v95[3] = *((_QWORD *)this + 3);
          LODWORD(v80) = (__int16)v21;
          HIDWORD(v80) = SWORD1(v21);
          v95[4] = v80;
          v95[1] = v27;
          InputExtensibilityCallout::CoreMsgSendMessage(v27, 6);
        }
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x200) != 0
          || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v107) )
        {
          v29 = 1;
        }
        else
        {
          v29 = 0;
          if ( !CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v107, a2, v28) )
          {
            v48 = 29;
            goto LABEL_78;
          }
        }
        if ( LODWORD(v107[0]) )
        {
          if ( v23 )
          {
            PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v107, 2);
            if ( PtiFromInputDest )
            {
              if ( (*(_DWORD *)(PtiFromInputDest + 488) & 1) != 0 )
              {
                v48 = 31;
                goto LABEL_78;
              }
            }
          }
          if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(v107, 1LL, 1LL) )
          {
            CMouseProcessor::PostPendingMouseMoveToInputDest(this, (const struct CInputDest *)v107);
            if ( DWORD1(v109) == 1 )
            {
              v30 = *(_QWORD *)(*((_QWORD *)&v108 + 1) + 64LL);
            }
            else
            {
              if ( DWORD1(v109) != 2 )
              {
LABEL_30:
                CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v97, (struct CInputDest *)v107);
                v31 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
                v32 = *(_QWORD *)a2;
                v33 = (2 * v31) | 4;
                if ( !v29 )
                  v33 = 2 * v31;
                v34 = v33 | 0x80;
                if ( (BYTE8(v114) & 4) == 0 )
                  v34 = v33;
                v90 = *(_QWORD *)(v32 + 108);
                LODWORD(v80) = v34;
                v35 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
                v37 = *(_QWORD *)(v32 + 32);
                v38 = *(_QWORD *)(v32 + 72);
                v39 = *(_DWORD *)(v32 + 64);
                v40 = (unsigned __int64)&v90 & -(__int64)(v35 != 0);
                if ( DWORD1(v109) == 2 )
                  v10 = DWORD2(v108);
                v41 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v36);
                v43 = CMouseProcessor::AddMouseKeysToWParam(v42, v41);
                v77 = v37;
                v44 = v83;
                ApiSetEditionPostInputMessage(
                  (unsigned int)v107,
                  v10,
                  v83,
                  v43,
                  v84,
                  v39,
                  v38,
                  v77,
                  v80,
                  v32 + 80,
                  v32,
                  v40);
                if ( v85[4] != 2
                  || (v45 = v85[2],
                      v46 = *(_DWORD *)(*(_QWORD *)v85 + 116LL),
                      v47 = (*(_DWORD *)(*(_QWORD *)v85 + 88LL) >> 7) & 1,
                      v93 = *(_QWORD *)(*(_QWORD *)v85 + 108LL),
                      v94 = v46,
                      (unsigned int)ApiSetEditionReportMouseBreakToAccessibility(v107, v45, &v93, v47)) )
                {
                  if ( v44 == 513 )
                  {
                    if ( !LODWORD(v107[0]) )
                      MicrosoftTelemetryAssertTriggeredMsgKM("If we got here, expected for mouse destination to be around");
                    ApiSetEditionHandleHungWindow(v107);
                  }
                  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v97);
                  v48 = 34;
                  v49 = 4;
                  v50 = *v86;
                  goto LABEL_40;
                }
                WPP_RECORDER_SF_(*v86, 3u, 0xAu, 0x21u, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
                v62 = (CThreadLockInputDest *)v97;
LABEL_94:
                CThreadLockInputDest::~CThreadLockInputDest(v62);
                goto LABEL_41;
              }
              v30 = *(_QWORD *)(*((_QWORD *)&v108 + 1) + 248LL);
            }
            if ( v30 )
              CMouseProcessor::PostPendingMouseMove(this, *(struct tagQ **)(v30 + 432));
            goto LABEL_30;
          }
          v48 = 32;
        }
        else
        {
          v48 = 30;
        }
      }
      else
      {
        v48 = 27;
      }
LABEL_78:
      v50 = *v4;
      v49 = 3;
LABEL_40:
      WPP_RECORDER_SF_(v50, v49, 0xAu, v48, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
LABEL_41:
      CInputDest::SetEmpty((CInputDest *)v107);
      return;
    }
    v55 = 23;
  }
  else
  {
    v55 = 22;
  }
  v56 = 3;
LABEL_56:
  WPP_RECORDER_SF_(*v4, v56, 0xAu, v55, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
}
