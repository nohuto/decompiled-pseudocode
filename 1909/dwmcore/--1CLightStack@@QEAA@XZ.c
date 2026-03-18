/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x180025500
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180023E30 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18002484C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180024C68 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180025568 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CDisplay>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
