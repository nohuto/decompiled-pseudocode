/*
 * XREFs of ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C00168E0
 * Callers:
 *     VidSchEnterIndependentFlip @ 0x1C00161F0 (VidSchEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C0016598 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     <none>
 */

VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *__fastcall VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this,
        struct _VIDSCH_INDEPENDENT_FLIP_STATE *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax

  v2 = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = v2;
  *((_QWORD *)this + 2) = (char *)a2 + 20;
  if ( v2 )
  {
    do
    {
      v3 = v2;
      if ( (v2 & 1) != 0 )
        break;
      ++*((_DWORD *)this + 1);
      v2 >>= 1;
      *(_DWORD *)this = v2;
    }
    while ( v3 >= 2 );
  }
  return this;
}
