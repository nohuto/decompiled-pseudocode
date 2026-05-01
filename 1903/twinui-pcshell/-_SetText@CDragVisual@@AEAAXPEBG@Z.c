/*
 * XREFs of ?_SetText@CDragVisual@@AEAAXPEBG@Z @ 0x1803DA8B8
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803D8530 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     McTemplateU0 @ 0x180066634 (McTemplateU0.c)
 */

void __fastcall CDragVisual::_SetText(HWND *this, const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8

  SetWindowTextW(this[19], a2);
  if ( *((_BYTE *)this + 272) )
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v3, &DragVisual_AppChange_Info, v4);
  }
}
