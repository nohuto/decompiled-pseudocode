/*
 * XREFs of xxxEndPaint @ 0x1C00FD91C
 * Callers:
 *     NtUserBeginPaint @ 0x1C001DDB0 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00FD7BC (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C00FD820 (NtUserEndPaint.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C020A3D0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     InternalInvalidate3 @ 0x1C003B9D4 (InternalInvalidate3.c)
 *     zzzInternalShowCaret @ 0x1C0073D24 (zzzInternalShowCaret.c)
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
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzInternalShowCaret();
  return 1LL;
}
