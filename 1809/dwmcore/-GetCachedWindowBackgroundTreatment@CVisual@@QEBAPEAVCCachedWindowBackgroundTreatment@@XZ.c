/*
 * XREFs of ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x180004284
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

struct CCachedWindowBackgroundTreatment *__fastcall CVisual::GetCachedWindowBackgroundTreatment(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  char *v4; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x80000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 13 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (char *)v1 + v2 + 8LL * i - (((_BYTE)v2 + 15) & 7) + 15;
  return *(struct CCachedWindowBackgroundTreatment **)v4;
}
