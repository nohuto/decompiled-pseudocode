/*
 * XREFs of ??0CContextState@@QEAA@XZ @ 0x180046CE0
 * Callers:
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x180046878 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180046D90 (--0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

CContextState *__fastcall CContextState::CContextState(CContextState *this)
{
  CContextState *result; // rax

  *((_DWORD *)this + 16) = 0;
  CAliasedClip::CAliasedClip((CContextState *)((char *)this + 68), 0LL, D2D1_ANTIALIAS_MODE_ALIASED);
  result = this;
  *(_OWORD *)((char *)this + 92) = _xmm;
  *((_WORD *)this + 78) = 32085;
  *(_OWORD *)((char *)this + 108) = _xmm;
  *(_OWORD *)((char *)this + 124) = _xmm;
  *(_OWORD *)((char *)this + 140) = _xmm;
  *((_DWORD *)this + 22) &= ~1u;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_BYTE *)this + 196) = 1;
  *((_DWORD *)this + 50) = 1068827891;
  *((_DWORD *)this + 44) = 1;
  *((_DWORD *)this + 45) = 1;
  *((_DWORD *)this + 68) = 0;
  return result;
}
