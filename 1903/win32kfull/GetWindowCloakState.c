/*
 * XREFs of GetWindowCloakState @ 0x1C00C8BCC
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0026CB4 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C002D8D4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C008A3A4 (GetWindowCloakStateComponentUIAware.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0100D18 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0101044 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ShouldProcessHungWindow @ 0x1C013CAD4 (ShouldProcessHungWindow.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     _ChildWindowFromPointEx @ 0x1C015AF5C (_ChildWindowFromPointEx.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E6770 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01F41A8 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0205968 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C0207040 (xxxTouchTargetWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C0244F94 (_RealChildWindowFromPoint.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 */

__int64 __fastcall GetWindowCloakState(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 Prop; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx

  v2 = a1[13];
  if ( v2 )
  {
    v3 = a1[3];
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 24);
    }
    if ( v2 == v4 )
      goto LABEL_6;
  }
  if ( (*(_BYTE *)(a1[5] + 26LL) & 8) != 0 && GetTopLevelWindow(a1) )
  {
LABEL_6:
    Prop = RealGetProp(a1[18], (unsigned __int16)atomDWMProp, 1LL);
    if ( Prop )
      LODWORD(Prop) = *(_OWORD *)Prop;
    v7 = 0;
    if ( (Prop & 0x400) != 0 || (Prop & 0x2000) != 0 )
      v7 = 1;
    v8 = v7 | 2;
    if ( (Prop & 0x800) == 0 )
      return v7;
  }
  else
  {
    return 0;
  }
  return v8;
}
