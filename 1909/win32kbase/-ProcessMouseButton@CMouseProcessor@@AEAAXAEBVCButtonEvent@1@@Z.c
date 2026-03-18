/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C004A1B0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C0030950 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0032088 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0038E78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     IsPTPIVEnabled @ 0x1C004A2BC (IsPTPIVEnabled.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z @ 0x1C004A4AC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C004C04C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004C06C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C004C184 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C004C258 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C004C280 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C004C2BC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C004DD1C (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004DE68 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C004DF1C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004E350 (-GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C004E37C (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C004E434 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C004E514 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C004E538 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C004E5F4 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C004E61C (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     IsPointerPromotedMouseMessage @ 0x1C004E6C0 (IsPointerPromotedMouseMessage.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C004E6F4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C004E830 (ApiSetEditionLLMouseButtonHook.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C004E948 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ApiSetEditionCancelCoolSwitch @ 0x1C004E968 (ApiSetEditionCancelCoolSwitch.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C004EA08 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C004EB90 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C004EC28 (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C004ED00 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C004EDF0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     IsTouchpadDevice @ 0x1C018230C (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C018CA90 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E638 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C018F154 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C018F624 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C018F808 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // rdi
  __int64 v4; // rax
  int v5; // r14d
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // r12d
  unsigned int ButtonMessage; // r14d
  unsigned int v10; // edx
  __int64 v11; // rcx
  struct tagPOINT v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int HitTestContext; // eax
  int v17; // ecx
  int MessageWParamInfo; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _DEVICE_OBJECT *v21; // xmm0_8
  char v22; // bl
  unsigned int v23; // eax
  int v24; // edx
  int v25; // edx
  __int64 v26; // r9
  char v27; // r13
  __int64 v28; // r15
  _BOOL8 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edx
  BOOL v34; // ebx
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // r8
  char v38; // bl
  __int64 v39; // rax
  struct _VPB *v40; // rcx
  CMouseProcessor *v41; // rcx
  __int64 v42; // r9
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // r8
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  bool v47; // al
  __int64 v48; // r13
  int v49; // edx
  int v50; // ecx
  bool v51; // al
  CMouseProcessor::CButtonEvent *v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  int v55; // r14d
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // rax
  CMouseProcessor *v58; // rcx
  int v59; // eax
  unsigned int v60; // edi
  __int64 v61; // rcx
  __int64 v62; // r8
  const struct CMouseProcessor::CButtonEvent *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned int v66; // r9d
  int v67; // eax
  _QWORD *HasMouseOwner; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  int v76; // eax
  int v77; // eax
  unsigned __int8 v78; // al
  char v79; // r8
  __int64 v80; // r9
  __int64 v81; // r10
  LIST_ENTRY *p_DeferredRoutine; // rcx
  __int64 RawMouseInputDestination; // rax
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int64 v90; // rdx
  __int64 v91; // r8
  BOOL v92; // ebx
  unsigned int VKey; // eax
  int v94; // edx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rdx
  int v98; // eax
  int v99; // eax
  int v100; // r9d
  __int64 PtiFromInputDest; // rax
  unsigned __int64 v102; // rax
  CMouseProcessor *v103; // rcx
  unsigned __int64 v104; // rax
  CMouseProcessor *v105; // rcx
  __int64 v106; // [rsp+38h] [rbp-C8h]
  struct tagPOINT v107; // [rsp+60h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v108; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v109; // [rsp+70h] [rbp-90h] BYREF
  __int64 v110; // [rsp+78h] [rbp-88h]
  int v111; // [rsp+80h] [rbp-80h] BYREF
  int v112; // [rsp+84h] [rbp-7Ch] BYREF
  int v113; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v114; // [rsp+8Ch] [rbp-74h]
  const struct CMouseProcessor::CButtonEvent *v115; // [rsp+90h] [rbp-70h]
  __int64 v116; // [rsp+98h] [rbp-68h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-60h] BYREF
  HWND WindowHandle; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-50h] BYREF
  struct _DEVICE_OBJECT v120; // [rsp+C0h] [rbp-40h] BYREF
  char v121[128]; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v122[5]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v123; // [rsp+2F0h] [rbp+1F0h]
  __int128 v124; // [rsp+300h] [rbp+200h]
  __int64 v125; // [rsp+310h] [rbp+210h]
  struct tagPOINT v126; // [rsp+320h] [rbp+220h] BYREF
  int v127; // [rsp+328h] [rbp+228h]
  int v128; // [rsp+32Ch] [rbp+22Ch]
  int v129; // [rsp+330h] [rbp+230h]
  int v130; // [rsp+334h] [rbp+234h]
  unsigned __int64 ExtraInfoForHook; // [rsp+338h] [rbp+238h]
  _OWORD v132[7]; // [rsp+340h] [rbp+240h] BYREF
  __int64 v133; // [rsp+3B0h] [rbp+2B0h]
  _DWORD v134[32]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _BYTE v135[128]; // [rsp+440h] [rbp+340h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int64 *v137; // [rsp+4E0h] [rbp+3E0h]
  __int64 v138; // [rsp+4E8h] [rbp+3E8h]
  int *v139; // [rsp+4F0h] [rbp+3F0h]
  __int64 v140; // [rsp+4F8h] [rbp+3F8h]
  int *v141; // [rsp+500h] [rbp+400h]
  __int64 v142; // [rsp+508h] [rbp+408h]
  struct _LIST_ENTRY **v143; // [rsp+510h] [rbp+410h]
  __int64 v144; // [rsp+518h] [rbp+418h]
  HWND *p_WindowHandle; // [rsp+520h] [rbp+420h]
  __int64 v146; // [rsp+528h] [rbp+428h]

  v2 = a2;
  v115 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 6, 22, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
  }
  v4 = *((_QWORD *)v2 + 1);
  v5 = *(_DWORD *)(v4 + 132);
  v6 = *(_DWORD *)(v4 + 100);
  v110 = *(_QWORD *)(v4 + 124);
  ApiSetEditionCancelCoolSwitch(&v111);
  v8 = 0;
  if ( v111 )
  {
    if ( v6 != 1 )
    {
      *(_QWORD *)&v120.Type = v110;
      LODWORD(v120.DriverObject) = v5;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v120, v7, 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 23, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
        }
        v75 = 14LL;
LABEL_64:
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL), v75);
        return;
      }
    }
  }
  if ( !*((_QWORD *)v2 + 5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 6, 24, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
    v75 = 15LL;
    goto LABEL_64;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
  v114 = ButtonMessage;
  if ( !IsPTPIVEnabled()
    || !isChildPartition()
    || !(unsigned __int8)IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v2 + 1) + 8LL)) )
  {
    goto LABEL_7;
  }
  v76 = *((_DWORD *)v2 + 8);
  if ( v76 == 1 )
  {
    v77 = CMouseProcessor::InertiaEndSuppression::HandleMake(
            (char *)this + 3256,
            *(_QWORD *)(*((_QWORD *)v2 + 1) + 88LL));
  }
  else
  {
    if ( v76 != 2 )
      goto LABEL_7;
    if ( *((_BYTE *)this + 3256) )
    {
      *((_BYTE *)this + 3256) = 0;
      goto LABEL_76;
    }
    v77 = 1;
  }
  if ( v77 )
  {
LABEL_7:
    v11 = 2147516416LL;
    if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
    {
LABEL_8:
      v12 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
      v107 = v12;
      v116 = *((_QWORD *)gpsi + 619);
      v109 = v12;
      CMouseProcessor::InformUMObservers((CMouseProcessor *)v11, v2, &v109);
      v15 = *(unsigned int *)(*((_QWORD *)v2 + 1) + 104LL);
      if ( (v15 & 0x80u) == 0LL && CBaseProcessor::IsUMSuppressed(this) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v13, 6, 27, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
        }
        v75 = 4LL;
        goto LABEL_64;
      }
      if ( !*((_QWORD *)v2 + 5) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13, v14);
      HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
      v17 = 8;
      if ( *((_DWORD *)v2 + 8) != 1 )
        v17 = 0;
      CMouseProcessor::MouseHitTest(
        (__int64)this,
        (__int64)v122,
        &v107,
        (__int64)&v116,
        *(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL),
        v17,
        HitTestContext,
        0,
        0LL);
      if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
      {
        v117 = *(_QWORD *)(v80 + 80);
        v137 = &v117;
        v112 = *(_DWORD *)(v80 + 52);
        v139 = &v112;
        v113 = *(_DWORD *)(v80 + 56);
        v141 = &v113;
        v143 = &v108;
        v138 = 8LL;
        v140 = v81;
        v142 = v81;
        LODWORD(v108) = ButtonMessage;
        v144 = v81;
        WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v122);
        p_WindowHandle = &WindowHandle;
        v146 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E63D7, 0LL, 0LL, 7u, &pData);
      }
      v126 = v12;
      MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
      v19 = *((_QWORD *)v2 + 1);
      v127 = MessageWParamInfo;
      v128 = *(unsigned __int8 *)(v19 + 104) >> 7;
      v129 = *(_DWORD *)(v19 + 72);
      v130 = 0;
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest(
        (CThreadLockInputDest *)&v120.Dpc.DeferredRoutine,
        (struct CInputDest *)v122);
      v20 = *((_QWORD *)v2 + 1);
      v21 = *(struct _DEVICE_OBJECT **)(v20 + 124);
      v22 = ~*(_BYTE *)(v20 + 104);
      LODWORD(v120.AttachedDevice) = *(_DWORD *)(v20 + 132);
      v120.NextDevice = v21;
      v23 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                           (unsigned int)v122,
                           (unsigned int)&v126,
                           v23,
                           (unsigned int)&v120.NextDevice,
                           v22 & 1) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v24, 6, 28, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL), 0LL);
        p_DeferredRoutine = (LIST_ENTRY *)&v120.Dpc.DeferredRoutine;
        goto LABEL_141;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)&v120.Dpc.DeferredRoutine);
      CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3160, 0LL, 3LL);
      if ( anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL) )
      {
        RawMouseInputDestination = anonymous_namespace_::GetRawMouseInputDestination(v121);
        v84 = *(_OWORD *)(RawMouseInputDestination + 16);
        *(_OWORD *)&v120.Queue.Wcb.NumberOfChannels = *(_OWORD *)RawMouseInputDestination;
        v85 = *(_OWORD *)(RawMouseInputDestination + 32);
        *(_OWORD *)&v120.Queue.Wcb.DeviceContext = v84;
        v86 = *(_OWORD *)(RawMouseInputDestination + 48);
        *(_OWORD *)&v120.Queue.Wcb.DeviceObject = v85;
        v87 = *(_OWORD *)(RawMouseInputDestination + 64);
        *(_OWORD *)&v120.Queue.Wcb.BufferChainingDpc = v86;
        v88 = *(_OWORD *)(RawMouseInputDestination + 80);
        *(_OWORD *)&v120.DeviceQueue.Type = v87;
        v89 = *(_OWORD *)(RawMouseInputDestination + 96);
        *(_OWORD *)&v120.DeviceQueue.DeviceListHead.Blink = v88;
        *(_QWORD *)&v88 = *(_QWORD *)(RawMouseInputDestination + 112);
        *(_OWORD *)&v120.DeviceQueue.Busy = v89;
        v120.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)v88;
        CInputDest::CInputDest((CInputDest *)v134, (const struct tagINPUTDEST *)&v120.Queue.Wcb.NumberOfChannels);
        if ( v134[0] )
        {
          v92 = *((_DWORD *)v2 + 8) == 2;
          VKey = CMouseProcessor::CButtonEvent::GetVKey(v2);
          ApiSetEditionUpdateAsyncKeyState(v134, VKey, v92);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v94) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v94, 6, 29, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          }
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL), 19LL);
          CInputDest::SetEmpty((CInputDest *)v134, v95, v96);
          goto LABEL_48;
        }
        CInputDest::SetEmpty((CInputDest *)v134, v90, v91);
      }
      if ( !LODWORD(v122[0]) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v25) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v25, 6, 30, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
        }
        v97 = 13LL;
        goto LABEL_135;
      }
      if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, *((_QWORD *)v2 + 1) + 96LL) )
      {
        v27 = 1;
        if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v26 + 124), v122) )
          goto LABEL_110;
      }
      else
      {
        v27 = 0;
      }
      v28 = LOWORD(v107.x) | (LOWORD(v107.y) << 16);
      v29 = *((_DWORD *)v2 + 8) == 2;
      v110 = v28;
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v122, v29);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 850, 1, 1) )
      {
        if ( v27
          && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                 *(_QWORD *)(*((_QWORD *)v2 + 1) + 124LL),
                                 (char *)this + 3272) )
        {
          goto LABEL_110;
        }
        v132[0] = v122[0];
        v132[1] = v122[1];
        v132[2] = v122[2];
        v132[3] = v122[3];
        v132[4] = v122[4];
        v132[5] = v123;
        v132[6] = v124;
        v133 = v125;
        if ( *((_DWORD *)v2 + 8) == 1 )
        {
          v99 = *((_DWORD *)v2 + 7);
          if ( !v99 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
            v99 = *((_DWORD *)v2 + 7);
          }
          *((_DWORD *)this + 817) |= v99;
          CInputDest::operator=(v122, (char *)this + 3272);
        }
        else
        {
          HasMouseOwner = (_QWORD *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v135, v122, v2);
          CInputDest::operator=((__int64)v122, HasMouseOwner, v69);
          CInputDest::SetEmpty((CInputDest *)v135, v70, v71);
        }
        if ( !LODWORD(v122[0]) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v73, v72, v74);
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
          (unsigned int)v122,
          (unsigned int)v132,
          v109.x,
          v107.x,
          (__int64)&v107);
        LODWORD(v28) = LOWORD(v107.x) | (LOWORD(v107.y) << 16);
        v110 = (int)v28;
      }
      else if ( *((_DWORD *)v2 + 8) == 1 )
      {
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v122,
                v2,
                v28,
                v109,
                ButtonMessage) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v33) = 3;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v33, 6, 31, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          }
          v97 = 17LL;
          goto LABEL_135;
        }
      }
      else
      {
        v98 = *((_DWORD *)v2 + 7);
        if ( !v98 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
          v98 = *((_DWORD *)v2 + 7);
        }
        *((_DWORD *)this + 817) &= ~v98;
      }
      v34 = *((_DWORD *)v2 + 8) == 2;
      v35 = CMouseProcessor::CButtonEvent::GetVKey(v2);
      ApiSetEditionUpdateAsyncKeyState(v122, v35, v34);
      v38 = 1;
      if ( *((_DWORD *)v2 + 8) == 1 )
      {
        *(_QWORD *)&v120.Flags = v124;
        v39 = *((_QWORD *)v2 + 1);
        v120.DeviceExtension = (PVOID)4;
        v40 = *(struct _VPB **)(v39 + 8);
        *(_QWORD *)&v120.DeviceType = *((_QWORD *)this + 2);
        LODWORD(v108) = (__int16)v28;
        HIDWORD(v108) = SWORD1(v28);
        v120.Queue.ListEntry.Flink = v108;
        v120.Vpb = v40;
        InputExtensibilityCallout::CoreMsgSendMessage((__int64)v40, 6);
      }
      if ( (*(_DWORD *)(*((_QWORD *)v2 + 1) + 104LL) & 0x100) != 0
        || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v122)
        || (v38 = 0, CMouseProcessor::UpdateForegroundForInput(v41, (struct CInputDest *)v122, v2, v42)) )
      {
        if ( !LODWORD(v122[0]) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_127:
            v97 = 18LL;
            goto LABEL_135;
          }
          v100 = 33;
LABEL_126:
          LOBYTE(v36) = 3;
          WPP_RECORDER_SF_((_DWORD)gBaseLog, v36, 6, v100, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          goto LABEL_127;
        }
        if ( v27 )
        {
          PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v122, 2LL, v37);
          if ( PtiFromInputDest )
          {
            if ( (*(_DWORD *)(PtiFromInputDest + 480) & 1) != 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_127;
              v100 = 34;
              goto LABEL_126;
            }
          }
        }
        if ( anonymous_namespace_::InMouseRawInputMode((__int64)v122, 1LL, 1LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v43) = 3;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v43, 6, 35, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          }
          v97 = 12LL;
          goto LABEL_135;
        }
        if ( (unsigned int)(DWORD1(v122[0]) - 1) <= 2 )
        {
          v102 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
          v104 = CMouseProcessor::AddMouseKeysToWParam(v103, v102);
          if ( CMouseProcessor::ForwardInputToISM(
                 v105,
                 (const struct CInputDest *)v122,
                 v2,
                 &v109,
                 0,
                 ButtonMessage,
                 v104) )
          {
            goto LABEL_48;
          }
        }
        if ( CMouseProcessor::BufferInputDestinedForContainer(this, v2, (const struct CInputDest *)v122) )
          goto LABEL_48;
        CMouseProcessor::PostPendingMouseMoveToInputDest(this, (const struct CInputDest *)v122);
        DelegateThreadInfo = CInputDest::GetDelegateThreadInfo((CInputDest *)v122);
        if ( DelegateThreadInfo )
          CMouseProcessor::PostPendingMouseMove(this, *((struct tagQ **)DelegateThreadInfo + 53));
        CThreadLockInputDest::CThreadLockInputDest(
          (CThreadLockInputDest *)&v120.DeviceLock.Header.WaitListHead,
          (struct CInputDest *)v122);
        v47 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2);
        v48 = *((_QWORD *)v2 + 1);
        v49 = (2 * v47) | 4;
        if ( !v38 )
          v49 = 2 * v47;
        v50 = v49 | 0x40;
        if ( (v125 & 4) == 0 )
          v50 = v49;
        v119 = *(_QWORD *)(v48 + 124);
        LODWORD(v108) = v50;
        v51 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2);
        v53 = *(unsigned int *)(v48 + 40);
        v54 = *(_QWORD *)(v48 + 80);
        v55 = *(_DWORD *)(v48 + 72);
        v56 = (unsigned __int64)&v119 & -(__int64)v51;
        if ( HIDWORD(v123) == 2 )
          v8 = v123;
        v57 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v52);
        v59 = CMouseProcessor::AddMouseKeysToWParam(v58, v57);
        v106 = v53;
        v60 = v114;
        ApiSetEditionPostInputMessage(
          (unsigned int)v122,
          v8,
          v114,
          v59,
          v110,
          v55,
          v54,
          v106,
          (_DWORD)v108,
          v48 + 96,
          v48,
          v56);
        v63 = v115;
        if ( *((_DWORD *)v115 + 8) != 2
          || (v64 = *((_QWORD *)v115 + 1),
              v65 = *((unsigned int *)v115 + 6),
              v66 = *(_DWORD *)(v64 + 104),
              v67 = *(_DWORD *)(v64 + 132),
              v120.CurrentIrp = *(struct _IRP **)(v64 + 124),
              LODWORD(v120.Timer) = v67,
              (unsigned int)ApiSetEditionReportMouseBreakToAccessibility(v122, v65, &v120.CurrentIrp, (v66 >> 7) & 1)) )
        {
          if ( v60 == 513 )
          {
            if ( !LODWORD(v122[0]) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v63, v62);
            ApiSetEditionHandleHungWindow(v122);
          }
          CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)&v120.DeviceLock.Header.WaitListHead);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v44) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v44, 6, 37, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          }
          goto LABEL_48;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v63) = 3;
          WPP_RECORDER_SF_(
            (_DWORD)gBaseLog,
            (_DWORD)v63,
            6,
            36,
            (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
        }
        p_DeferredRoutine = &v120.DeviceLock.Header.WaitListHead;
LABEL_141:
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)p_DeferredRoutine);
        goto LABEL_48;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 3;
        WPP_RECORDER_SF_((_DWORD)gBaseLog, v36, 6, 32, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
      }
LABEL_110:
      v97 = 10LL;
LABEL_135:
      InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v2 + 1) + 80LL), v97);
LABEL_48:
      CInputDest::SetEmpty((CInputDest *)v122, v44, v45);
      return;
    }
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3260) )
      {
        v78 = 0;
      }
      else
      {
        v78 = 1;
        *((_DWORD *)this + 816) = *(_DWORD *)(*((_QWORD *)v2 + 1) + 72LL);
      }
      *((_BYTE *)this + 3260) = v78;
      v11 = v78;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_8;
      v79 = *((_BYTE *)this + 3260);
      if ( v79 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)v2 + 1) + 72LL) - *((_DWORD *)this + 816);
        if ( v10 <= dword_1C020D360 )
        {
          *((_BYTE *)this + 3260) = 0;
          v79 = 0;
        }
        if ( v79 )
        {
LABEL_90:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 6, 26, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
          }
          v75 = 16LL;
          goto LABEL_64;
        }
      }
      v11 = 1LL;
    }
    if ( (_DWORD)v11 )
      goto LABEL_8;
    goto LABEL_90;
  }
LABEL_76:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 6, 25, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
  }
}
