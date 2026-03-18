/*
 * XREFs of ?IsEscapeEnabled@DXGADAPTER@@QEBAEXZ @ 0x1C000B928
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsEscapeEnabled(DXGADAPTER *this)
{
  return *((_QWORD *)this + 57) != (_QWORD)ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
}
