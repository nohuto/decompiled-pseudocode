/*
 * XREFs of WindowArrangementAllowed @ 0x1C01D688C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0135B88 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall WindowArrangementAllowed(struct tagWND *a1)
{
  _BOOL8 result; // rax

  result = WindowArrangementApplicable(a1);
  if ( result )
    return dword_1C031D794 & 1;
  return result;
}
