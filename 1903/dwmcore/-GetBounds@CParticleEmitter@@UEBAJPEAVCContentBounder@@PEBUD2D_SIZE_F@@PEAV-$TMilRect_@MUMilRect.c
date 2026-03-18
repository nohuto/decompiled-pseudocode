/*
 * XREFs of ?GetBounds@CParticleEmitter@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EA4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z @ 0x1801EEAA4 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJPEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CParticleEmitter::GetBounds(__int64 a1, __int64 a2, const struct D2D_SIZE_F *a3, _OWORD *a4)
{
  __int64 v4; // rdi
  int updated; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v4 + 6281)
    && (updated = CParticleEmitterVisual::UpdateParticleSystem((CParticleEmitterVisual *)v4, a3),
        v7 = updated,
        updated < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\particleemittervisual.cpp",
      (const char *)(unsigned int)updated);
  }
  else
  {
    v7 = 0;
    *a4 = *(_OWORD *)(v4 + 6152);
  }
  return v7;
}
