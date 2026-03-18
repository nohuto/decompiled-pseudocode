/*
 * XREFs of CleanupInputDelegation @ 0x1C0087630
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0087654 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ScrubDelegatedWindow @ 0x1C00876E0 (ScrubDelegatedWindow.c)
 *     ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C0107B6C (-ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z.c)
 */

void __fastcall CleanupInputDelegation(struct tagTHREADINFO *a1, struct tagBWND *a2, __int64 a3)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v4,
      (__int64)a2,
      a3);
    if ( *((_BYTE *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 24) == 1 )
      ScrubDelegatedWindow(a2);
    else
      ScrubDelegatedBaseWindow(a2);
  }
  else
  {
    ScrubDelegatedWindows(a1);
  }
}
