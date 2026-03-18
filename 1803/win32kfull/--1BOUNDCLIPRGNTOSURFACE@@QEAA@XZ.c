/*
 * XREFs of ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C00E335C
 * Callers:
 *     EngStrokePath @ 0x1C00E3150 (EngStrokePath.c)
 * Callees:
 *     <none>
 */

void __fastcall BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE(BOUNDCLIPRGNTOSURFACE *this)
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 19);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v1);
}
