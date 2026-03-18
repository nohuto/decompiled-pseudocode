/*
 * XREFs of CanForceForeground @ 0x1C00B3040
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000B40C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     CheckAllowForeground @ 0x1C00B2DC0 (CheckAllowForeground.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C00B3A80 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CFCF4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NXZ @ 0x1C00D7EC8 (-CheckCanonicalForegroundAccess@@YA_NXZ.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01C2E60 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     xxxHardErrorControl @ 0x1C02273E0 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CanForceForeground(__int64 a1)
{
  struct tagTHREADINFO *PtiLastWoken; // rax
  _QWORD *v3; // rdx
  unsigned int *v4; // rax
  _BOOL8 result; // rax

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(gpInputGlobals);
  result = 1;
  if ( PtiLastWoken )
  {
    v3 = (_QWORD *)*((_QWORD *)PtiLastWoken + 53);
    if ( v3 != (_QWORD *)a1
      && gptiForeground
      && *(_QWORD *)(gptiForeground + 424LL) != a1
      && (*(_DWORD *)(a1 + 12) & 0x80100) == 0
      && a1 != gppiInputProvider
      && gpqForeground
      && (gfDebugForegroundIgnoreDebugPort
       || !PsGetProcessDebugPort(*v3) && !PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 424LL))) )
    {
      v4 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v4) )
        return 0;
    }
  }
  return result;
}
