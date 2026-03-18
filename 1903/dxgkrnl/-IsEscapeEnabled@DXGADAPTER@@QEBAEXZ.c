/*
 * XREFs of ?IsEscapeEnabled@DXGADAPTER@@QEBAEXZ @ 0x1C000B738
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsEscapeEnabled(DXGADAPTER *this)
{
  return *((_QWORD *)this + 57) != (_QWORD)ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
}
