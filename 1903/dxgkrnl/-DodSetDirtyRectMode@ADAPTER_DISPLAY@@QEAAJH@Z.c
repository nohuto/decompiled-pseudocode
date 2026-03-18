/*
 * XREFs of ?DodSetDirtyRectMode@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01F1448
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::DodSetDirtyRectMode(ADAPTER_DISPLAY *this, int a2)
{
  if ( !*((_QWORD *)this + 46) )
    return 3221225485LL;
  *((_DWORD *)this + 94) = a2;
  return 0LL;
}
