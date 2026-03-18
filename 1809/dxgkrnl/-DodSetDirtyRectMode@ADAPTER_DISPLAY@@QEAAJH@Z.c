/*
 * XREFs of ?DodSetDirtyRectMode@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01C21B0
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::DodSetDirtyRectMode(ADAPTER_DISPLAY *this, int a2)
{
  if ( !*((_QWORD *)this + 33) )
    return 3221225485LL;
  *((_DWORD *)this + 68) = a2;
  return 0LL;
}
