/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800024B0
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800A08E8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800A19B8 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4
  int v3; // eax
  CVisual *v4; // rcx
  int v5; // eax

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 188) != v2 || *((float *)this + 189) != *((float *)a2 + 6) )
  {
    *((float *)this + 188) = v2;
    v3 = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 190) = 0;
    *((_DWORD *)this + 189) = v3;
    v4 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v5 = *((_DWORD *)v4 + 20);
    if ( (v5 & 0x1000) == 0 )
    {
      *((_DWORD *)v4 + 20) = v5 | 0x1000;
      CVisual::PropagateDirtyChildren(v4);
    }
  }
  return 0LL;
}
