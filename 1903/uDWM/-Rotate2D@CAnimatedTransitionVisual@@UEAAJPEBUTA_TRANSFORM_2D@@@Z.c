/*
 * XREFs of ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800A0450
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 197) != v2
    || *((float *)this + 200) != *((float *)a2 + 9)
    || *((float *)this + 201) != *((float *)a2 + 10) )
  {
    *((float *)this + 197) = v2;
    *((_QWORD *)this + 99) = 0LL;
    if ( !*((_BYTE *)this + 973) )
    {
      *((_DWORD *)this + 200) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 804) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
