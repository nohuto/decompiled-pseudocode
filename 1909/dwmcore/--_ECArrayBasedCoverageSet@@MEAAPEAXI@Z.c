/*
 * XREFs of ??_ECArrayBasedCoverageSet@@MEAAPEAXI@Z @ 0x180024910
 * Callers:
 *     ??_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z @ 0x1800F0B00 (--_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CArrayBasedCoverageSet *__fastcall CArrayBasedCoverageSet::`vector deleting destructor'(
        CArrayBasedCoverageSet *this,
        char a2)
{
  *(_QWORD *)this = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  *((_QWORD *)this + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 416);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 24);
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
