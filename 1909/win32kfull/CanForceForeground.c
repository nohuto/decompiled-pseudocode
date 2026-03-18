/*
 * XREFs of CanForceForeground @ 0x1C0021100
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0011AAC (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     CheckAllowForeground @ 0x1C0020E70 (CheckAllowForeground.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C013438C (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0137440 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D5FB0 (-_LockSetForegroundWindow@@YAHI@Z.c)
 *     xxxHardErrorControl @ 0x1C023EA4C (xxxHardErrorControl.c)
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
    v3 = (_QWORD *)*((_QWORD *)PtiLastWoken + 52);
    if ( v3 != (_QWORD *)a1
      && gptiForeground
      && *(_QWORD *)(gptiForeground + 416LL) != a1
      && (*(_DWORD *)(a1 + 12) & 0x80100) == 0
      && a1 != gppiInputProvider
      && gpqForeground
      && (LODWORD(WPP_MAIN_CB.DeviceQueue.Lock)
       || !PsGetProcessDebugPort(*v3) && !PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 416LL))) )
    {
      v4 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v4) )
        return 0;
    }
  }
  return result;
}
