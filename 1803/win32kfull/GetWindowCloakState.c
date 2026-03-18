/*
 * XREFs of GetWindowCloakState @ 0x1C0074700
 * Callers:
 *     NextTopWindow @ 0x1C002DCFC (NextTopWindow.c)
 *     FBadWindow @ 0x1C006BF08 (FBadWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00745DC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     ShouldProcessHungWindow @ 0x1C00C0BD4 (ShouldProcessHungWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C012D97C (_ChildWindowFromPointEx.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01AEC50 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01BB774 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01BC474 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CB1F0 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01CC944 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C02034F8 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCloakState(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _OWORD *Prop; // rax
  __int16 v8; // cx
  __int64 result; // rax

  v1 = a1[10];
  v2 = 0;
  if ( !v1 )
    goto LABEL_21;
  v4 = a1[3];
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    if ( v6 )
      v5 = *(_QWORD *)(v6 + 24);
  }
  if ( v1 != v5 )
  {
LABEL_21:
    if ( (*(_BYTE *)(a1[5] + 26LL) & 8) == 0 || !GetTopLevelWindow((__int64)a1) )
      return 0LL;
  }
  Prop = (_OWORD *)RealGetProp(a1[15], (unsigned __int16)atomDWMProp, 1LL);
  if ( Prop )
    v8 = *Prop;
  else
    v8 = 0;
  if ( (v8 & 0x400) != 0 || (v8 & 0x2000) != 0 )
    v2 = 1;
  result = v2 | 2;
  if ( (v8 & 0x800) == 0 )
    return v2;
  return result;
}
