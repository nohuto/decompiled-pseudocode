/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180025B84
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001FD30 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x1800259BC (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x18008F08C (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001EF80 (--0CVisual@@IEAA@XZ.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CAtlasedRectsVisual::`vftable';
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0LL;
  return (CAtlasedRectsVisual *)v1;
}
