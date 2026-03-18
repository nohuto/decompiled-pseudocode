/*
 * XREFs of GetWindowCloakState @ 0x1C002BE10
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C000CCBC (GetWindowCloakStateComponentUIAware.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C002B790 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0041730 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C006ECA0 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     ShouldProcessHungWindow @ 0x1C00F2D78 (ShouldProcessHungWindow.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0107FB4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C014FF1C (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01D1B50 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01DE298 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01EF578 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01F0D9C (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C022C400 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCloakState(__int64 a1)
{
  _OWORD *Prop; // rax
  int v3; // ecx
  unsigned int v4; // edx
  __int64 result; // rax

  if ( !(unsigned int)IsTopLevelWindow(a1)
    && ((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) == 0 || !GetTopLevelWindow(a1)) )
  {
    return 0LL;
  }
  Prop = (_OWORD *)RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
    v3 = *Prop;
  else
    LOWORD(v3) = 0;
  v4 = 0;
  if ( (v3 & 0x400) != 0 || (v3 & 0x2000) != 0 )
    v4 = 1;
  result = v4 | 2;
  if ( (v3 & 0x800) == 0 )
    return v4;
  return result;
}
