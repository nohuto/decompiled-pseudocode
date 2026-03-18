/*
 * XREFs of _GetTopLevelWindow @ 0x1C00C8D90
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0005870 (EditionUpdateInputTransformFromHitTest.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0005ADC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     NtUserNavigateFocus @ 0x1C00096B0 (NtUserNavigateFocus.c)
 *     _lambda_75e919a46692d6b7e31e9e50a1c7a298_::_lambda_invoker_cdecl_ @ 0x1C000F9B0 (_lambda_75e919a46692d6b7e31e9e50a1c7a298_--_lambda_invoker_cdecl_.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0010414 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00107FC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C008A3A4 (GetWindowCloakStateComponentUIAware.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4B4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C008AB90 (NtUserGetWindowCompositionAttribute.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00C7314 (IsTopLevelOrLayeredChildWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C00C7604 (ShouldUseLogPixelsForWindowMetrics.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     IsWindowHolographicForHitTest @ 0x1C00C8B00 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00ED5E8 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C00ED6B8 (TransformVectorWithInputTargetPrecedence.c)
 *     _lambda_483a8efb490f6fe72acc053c62272df4_::_lambda_invoker_cdecl_ @ 0x1C0100EF0 (_lambda_483a8efb490f6fe72acc053c62272df4_--_lambda_invoker_cdecl_.c)
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C011FEC4 (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 *     CitGetWindowInfo @ 0x1C0123110 (CitGetWindowInfo.c)
 *     NtUserLayoutCompleted @ 0x1C0125030 (NtUserLayoutCompleted.c)
 *     NtUserBeginLayoutUpdate @ 0x1C0139AB0 (NtUserBeginLayoutUpdate.c)
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D6428 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D9048 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E6E50 (GetDPITransformationMonitor.c)
 *     IsChildWindowDpiMessageEnabledX @ 0x1C01E702C (IsChildWindowDpiMessageEnabledX.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EBA44 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     NtUserGetTopLevelWindow @ 0x1C022EFB0 (NtUserGetTopLevelWindow.c)
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
      v1 = *(_QWORD *)(a1 + 104);
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
      a1 = *(_QWORD *)(a1 + 104);
    }
    while ( v1 );
  }
  return a1;
}
