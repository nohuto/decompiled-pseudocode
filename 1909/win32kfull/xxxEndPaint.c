/*
 * XREFs of xxxEndPaint @ 0x1C00E01C0
 * Callers:
 *     NtUserBeginPaint @ 0x1C0039310 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00E0014 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C00E0090 (NtUserEndPaint.c)
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221930 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C002868C (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, ghrgnUpdateSave, gRdwFlags);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, (__int64)a1, 0x402u, 1);
  }
  SetOrClrWF(0, (__int64)a1, 0x401u, 1);
  SetOrClrWF(0, (__int64)a1, 0x404u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 304LL) )
    zzzInternalShowCaret();
  return 1LL;
}
