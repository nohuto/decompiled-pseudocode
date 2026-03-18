/*
 * XREFs of _GetTopLevelWindow @ 0x1C0030730
 * Callers:
 *     ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C000489C (-UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     NtUserNavigateFocus @ 0x1C00061C0 (NtUserNavigateFocus.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00062F8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C002DE64 (IsTopLevelOrLayeredChildWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C002F2E4 (ShouldUseLogPixelsForWindowMetrics.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     IsWindowHolographicForHitTest @ 0x1C00352C0 (IsWindowHolographicForHitTest.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C003A190 (NtUserGetWindowCompositionAttribute.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendNCActivateMessage @ 0x1C005E010 (xxxSendNCActivateMessage.c)
 *     ?GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@1@@Z @ 0x1C006B5FC (-GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActiva.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 *     xxxDCompSpeedHitTest @ 0x1C00741EC (xxxDCompSpeedHitTest.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     ShouldProcessHungWindow @ 0x1C00C0BD4 (ShouldProcessHungWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C00F94D4 (TransformVectorWithInputTargetPrecedence.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F95BC (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C00FBAF8 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     CitGetWindowInfo @ 0x1C00FCBE0 (CitGetWindowInfo.c)
 *     NtUserLayoutCompleted @ 0x1C00FF110 (NtUserLayoutCompleted.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0109D10 (NtUserBeginLayoutUpdate.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01A1BA0 (xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01A3AB8 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01AF3F0 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01AF5E8 (IsChildWindowDpiMessageEnabledX.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01B3BC0 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01BC474 (_GetNextQueueWindow.c)
 *     EditionGetTopLevelWindowWithComponentUI @ 0x1C01BF550 (EditionGetTopLevelWindowWithComponentUI.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 *     NtUserGetTopLevelWindow @ 0x1C01EFE90 (NtUserGetTopLevelWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTopLevelWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 80);
      if ( v1 )
      {
        v2 = *(_QWORD *)(a1 + 24);
        v3 = 0LL;
        if ( v2 )
        {
          v4 = *(_QWORD *)(v2 + 8);
          if ( v4 )
            v3 = *(_QWORD *)(v4 + 24);
        }
        if ( v1 == v3 )
          break;
      }
      a1 = *(_QWORD *)(a1 + 80);
    }
    while ( v1 );
  }
  return a1;
}
