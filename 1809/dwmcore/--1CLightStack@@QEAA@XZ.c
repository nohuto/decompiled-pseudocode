/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x1800C2DE8
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18008B940 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18008EBFC (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800C2B80 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18006B5B4 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18006E0A0 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 23);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this);
}
