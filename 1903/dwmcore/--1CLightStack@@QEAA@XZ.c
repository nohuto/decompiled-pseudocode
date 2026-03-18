/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x180046DF0
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180046554 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800C80F0 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800CBCB8 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180046E28 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 13);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
