/*
 * XREFs of ??_ECArrayBasedCoverageSet@@MEAAPEAXI@Z @ 0x1800CFF38
 * Callers:
 *     ??_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z @ 0x1800ECE40 (--_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CArrayBasedCoverageSet *__fastcall CArrayBasedCoverageSet::`vector deleting destructor'(
        CArrayBasedCoverageSet *this,
        char a2)
{
  *(_QWORD *)this = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  *((_QWORD *)this + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 416);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 24);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
