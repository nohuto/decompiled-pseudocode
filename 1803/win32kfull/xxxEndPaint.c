/*
 * XREFs of xxxEndPaint @ 0x1C00E2444
 * Callers:
 *     NtUserBeginPaint @ 0x1C0037C30 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00E22F4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C00E2360 (NtUserEndPaint.c)
 *     xxxTooltipWndProc @ 0x1C01044C0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01E44E4 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     InternalInvalidate3 @ 0x1C002C088 (InternalInvalidate3.c)
 *     zzzInternalShowCaret @ 0x1C003A940 (zzzInternalShowCaret.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  __int64 v3; // r9

  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, ghrgnUpdateSave, (unsigned int)gRdwFlags, v3);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, (__int64)a1, 1026, 1);
  }
  SetOrClrWF(0, (__int64)a1, 1025, 1);
  SetOrClrWF(0, (__int64)a1, 1028, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 296LL) )
    zzzInternalShowCaret();
  return 1LL;
}
