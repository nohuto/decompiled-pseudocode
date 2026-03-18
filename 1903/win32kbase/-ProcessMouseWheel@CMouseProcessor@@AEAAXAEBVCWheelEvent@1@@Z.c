/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0190680 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0030E4C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C00316A0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034D34 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C0038DC0 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003904C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C00391EC (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0039EE8 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z @ 0x1C003FDAC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C004194C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0041BBC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00423E0 (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004252C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0042DB4 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0042FD4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0043008 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A1750 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C018EC80 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C0190ACC (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C0191344 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 *     ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C019165C (-GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA-AW4DIT_HITTESTATTRIBUTES@@XZ.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01916B8 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1C01917CC (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01918CC (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C0191BC8 (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C0191C48 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z @ 0x1C0192EA0 (-ProcessWheel@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@IFKPEAUHWND__@@_N@Z.c)
 *     ?RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C0193050 (-RerouteWheel@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C01930E4 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0193268 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C019AD58 (APISetEditionGetMouseWheelRoutingMode.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C019CE28 (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C019D9F0 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  __int64 v2; // r13
  __int64 v5; // rcx
  char v6; // r14
  struct tagPOINT v7; // rbx
  CMouseProcessor *v8; // rcx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  BOOL v13; // ebx
  __int64 v14; // rdx
  unsigned int WheelMessage; // eax
  BOOL v16; // esi
  unsigned __int64 v17; // rdi
  unsigned int HitTestContext; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int HitTestAttributes; // eax
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  CMouseProcessor *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  struct tagTHREADINFO *v33; // rbx
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int64 v41; // r8
  char v42; // di
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  CMouseProcessor *v44; // rcx
  __int64 v45; // rdi
  unsigned int v46; // r15d
  __int16 v47; // si
  unsigned __int64 v48; // r14
  HWND WindowHandle; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // eax
  int v53; // edi
  __int64 v54; // rdx
  CMouseProcessor *v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned int v60; // eax
  CMouseProcessor *v61; // rcx
  CMouseProcessor *v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rsi
  __int64 v65; // r14
  __int64 v66; // r15
  int v67; // r12d
  __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // r8
  unsigned int v71; // eax
  __int64 v72; // rbx
  __int64 v73; // r14
  __int64 v74; // r15
  int v75; // r12d
  unsigned __int64 v76; // rsi
  int v77; // r10d
  int v78; // edi
  __int64 v79; // rdx
  CMouseProcessor::CWheelEvent *v80; // rcx
  __int64 v81; // r8
  int v82; // eax
  bool ShouldDeliverWheelEventToInputDest; // [rsp+60h] [rbp-A0h]
  unsigned int v84; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v85; // [rsp+68h] [rbp-98h] BYREF
  CMouseProcessor *v86; // [rsp+70h] [rbp-90h]
  struct tagPOINT v87; // [rsp+78h] [rbp-88h] BYREF
  CMouseProcessor::CMouseEvent *v88; // [rsp+80h] [rbp-80h]
  __int64 v89; // [rsp+88h] [rbp-78h]
  struct tagPOINT v90; // [rsp+90h] [rbp-70h] BYREF
  __int64 v91; // [rsp+98h] [rbp-68h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-50h] BYREF
  int v94; // [rsp+B8h] [rbp-48h]
  _OWORD v95[7]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v96; // [rsp+130h] [rbp+30h]
  _BYTE v97[128]; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v98[7]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct tagPOINT v99; // [rsp+238h] [rbp+138h] BYREF
  int v100; // [rsp+240h] [rbp+140h]
  int v101; // [rsp+244h] [rbp+144h]
  int v102; // [rsp+248h] [rbp+148h]
  int v103; // [rsp+24Ch] [rbp+14Ch]
  __int64 ExtraInfoForHook; // [rsp+250h] [rbp+150h]
  _QWORD v105[15]; // [rsp+260h] [rbp+160h] BYREF
  char v106; // [rsp+2D8h] [rbp+1D8h]
  _BYTE v107[128]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v2 = 0LL;
  v86 = this;
  v84 = 0;
  v5 = *((_QWORD *)a2 + 1);
  v6 = 0;
  v88 = a2;
  v7 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v90 = v7;
  if ( (*(_DWORD *)(v5 + 104) & 0x200) != 0 )
    v7 = *(struct tagPOINT *)(v5 + 52);
  v87 = v7;
  v89 = (LOWORD(v7.y) << 16) | LOWORD(v7.x);
  memset(v105, 0, sizeof(v105));
  v106 = 0;
  CMouseProcessor::InformUMObservers(v8, a2, &v87);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 104LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 6, 39, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
    }
    goto LABEL_53;
  }
  v10 = *((_QWORD *)a2 + 1);
  v99 = v7;
  v100 = *(unsigned __int16 *)(v10 + 30) << 16;
  v101 = *(unsigned __int8 *)(v10 + 104) >> 7;
  v102 = *(_DWORD *)(v10 + 72);
  v103 = 0;
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v12 = *(_DWORD *)(v11 + 132);
  v13 = (*(_BYTE *)(v11 + 104) & 1) == 0;
  v93 = *(_QWORD *)(v11 + 124);
  v94 = v12;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v14, v11);
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v99, WheelMessage, &v93, v13) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 40, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
    goto LABEL_53;
  }
  if ( gpqForeground
    && (*(_DWORD *)(*((_QWORD *)a2 + 1) + 104LL) & 8) == 0
    && (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3200, 0, 0);
  }
  ShouldDeliverWheelEventToInputDest = 0;
  v84 = 0;
  if ( *((_DWORD *)a2 + 6) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v85 = *((_QWORD *)gpsi + 619);
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)this + 860, 1, 1) != 0;
    v17 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a2);
    HitTestAttributes = CMouseProcessor::CWheelEvent::GetHitTestAttributes(v20, v19, v21);
    v23 = (_QWORD *)CMouseProcessor::MouseHitTest(
                      (__int64)this,
                      (__int64)v97,
                      &v90,
                      (__int64)&v85,
                      v17,
                      HitTestAttributes,
                      HitTestContext,
                      v16,
                      &v84);
    CInputDest::operator=((__int64)v105, v23, v24);
    CInputDest::SetEmpty((CInputDest *)v97, v25, v26);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v27,
                                           a2,
                                           (const struct CInputDest *)v105);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((__int64)v105, 0) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v105);
      v29 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v29 + 104) & 8) != 0
        && (*(_DWORD *)(v29 + 100) == 1 || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v29 + 124), v105, v28)) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 3200, (int)v105, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v105);
      v33 = ThreadInfo;
      if ( !ThreadInfo )
        goto LABEL_27;
      if ( !anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)ThreadInfo) )
        goto LABEL_27;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v98);
      v35 = InputDestFromForegroundFocus[1];
      v95[0] = *InputDestFromForegroundFocus;
      v36 = InputDestFromForegroundFocus[2];
      v95[1] = v35;
      v37 = InputDestFromForegroundFocus[3];
      v95[2] = v36;
      v38 = InputDestFromForegroundFocus[4];
      v95[3] = v37;
      v39 = InputDestFromForegroundFocus[5];
      v95[4] = v38;
      v40 = InputDestFromForegroundFocus[6];
      v95[5] = v39;
      *(_QWORD *)&v39 = *((_QWORD *)InputDestFromForegroundFocus + 14);
      v95[6] = v40;
      v96 = v39;
      CInputDest::CInputDest((CInputDest *)v107, (const struct tagINPUTDEST *)v95);
      v6 = 1;
      v42 = 1;
      if ( CInputDest::operator==((unsigned int *)v105, (__int64)v107, v41) )
LABEL_27:
        v42 = 0;
      if ( (v6 & 1) != 0 )
        CInputDest::SetEmpty((CInputDest *)v107, v31, v32);
      if ( v42 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 41, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
        goto LABEL_53;
      }
      MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
      if ( MouseWheelForegroundThread
        && *((_QWORD *)v33 + 52) != *(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread(MouseWheelForegroundThread)
                                              + 416)
        && !(unsigned int)APISetEditionGetMouseWheelRoutingMode()
        && CMouseProcessor::HittestWheelRoutingRequested(v44) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 6, 42, (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids);
        InputTraceLogging::Mouse::RerouteWheel(*(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL));
        ShouldDeliverWheelEventToInputDest = 0;
      }
    }
  }
  v45 = *((_QWORD *)a2 + 1);
  v46 = *((_DWORD *)a2 + 6);
  v47 = *(_WORD *)(v45 + 30);
  v48 = *(_QWORD *)(v45 + 80);
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v105);
  v52 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v50, v51);
  InputTraceLogging::Mouse::ProcessWheel(
    v48,
    (const struct tagPOINT *)(v45 + 52),
    v52,
    v47,
    v46,
    WindowHandle,
    ShouldDeliverWheelEventToInputDest);
  v53 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  LODWORD(v85) = v53;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v105, 1LL, 1LL) )
    {
      if ( (unsigned int)(HIDWORD(v105[0]) - 1) > 2
        || (v57 = CMouseProcessor::AddMouseKeysToWParam(
                    v55,
                    (unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 30LL) << 16,
                    v56),
            v60 = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v58, v59),
            !CMouseProcessor::ForwardInputToISM(v61, (const struct CInputDest *)v105, a2, &v87, v84, v60, v57)) )
      {
        if ( !CMouseProcessor::BufferInputDestinedForContainer(v86, a2, (const struct CInputDest *)v105) )
        {
          v91 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 124LL);
          v86 = (CMouseProcessor *)((unsigned __int64)&v91 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0));
          if ( CInputDest::IsCompositionInput((CInputDest *)v105) && HIDWORD(v105[11]) == 2 )
            v2 = v105[10];
          v64 = *((_QWORD *)a2 + 1);
          v65 = *(unsigned int *)(v64 + 40);
          v66 = *(_QWORD *)(v64 + 80);
          v67 = *(_DWORD *)(v64 + 72);
          v68 = CMouseProcessor::AddMouseKeysToWParam(v62, (unsigned __int64)*(unsigned __int16 *)(v64 + 30) << 16, v63);
          v71 = CMouseProcessor::CWheelEvent::GetWheelMessage(v88, v69, v70);
          ApiSetEditionPostInputMessage(
            (__int64)v105,
            v2,
            v71,
            v68,
            v89,
            v67,
            v66,
            v65,
            v85,
            (__int64 *)(v64 + 96),
            v64,
            (__int64)v86);
        }
      }
    }
  }
  else
  {
    if ( !gpqForeground || anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
    {
LABEL_53:
      InputTraceLogging::Mouse::DropWheel();
      goto LABEL_54;
    }
    v72 = *((_QWORD *)a2 + 1);
    v73 = *(unsigned int *)(v72 + 40);
    v74 = *(_QWORD *)(v72 + 80);
    v75 = *(_DWORD *)(v72 + 72);
    v92 = *(_QWORD *)(v72 + 124);
    v76 = (unsigned __int64)&v92 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v88) != 0);
    LODWORD(v85) = v53 | 0x20;
    v78 = v77 << 16;
    v82 = CMouseProcessor::CWheelEvent::GetWheelMessage(v80, v79, v81);
    ApiSetEditionPostMouseWheelToForeground(v82, v78, v89, v75, v74, v73, v85, v72 + 96, v76);
  }
LABEL_54:
  CInputDest::SetEmpty((CInputDest *)v105, v54, v56);
}
