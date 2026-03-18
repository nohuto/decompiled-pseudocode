/*
 * XREFs of CanForceForeground @ 0x1C0012630
 * Callers:
 *     CheckAllowForeground @ 0x1C00123D0 (CheckAllowForeground.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0061534 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C006DC70 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     _AllowSetForegroundWindow @ 0x1C006E100 (_AllowSetForegroundWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00FB27C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _LockSetForegroundWindow @ 0x1C01A1A30 (_LockSetForegroundWindow.c)
 *     xxxHardErrorControl @ 0x1C01FE504 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CanForceForeground(__int64 a1)
{
  struct tagTHREADINFO *PtiLastWoken; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rdx
  unsigned int *v5; // rax

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(gpInputGlobals);
  v3 = 0;
  if ( !PtiLastWoken )
    return 1LL;
  v4 = (_QWORD *)*((_QWORD *)PtiLastWoken + 52);
  if ( v4 == (_QWORD *)a1
    || !gptiForeground
    || *(_QWORD *)(gptiForeground + 416LL) == a1
    || (*(_DWORD *)(a1 + 12) & 0x80100) != 0
    || a1 == gppiInputProvider
    || !gpqForeground
    || !gfDebugForegroundIgnoreDebugPort
    && (PsGetProcessDebugPort(*v4) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 416LL))) )
  {
    return 1LL;
  }
  v5 = (unsigned int *)UPDWORDPointer(0x2000LL);
  LOBYTE(v3) = CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v5);
  return v3;
}
