/*
 * XREFs of ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A55CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A560C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A7518 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CExpression *__fastcall CExpression::CExpression(CExpression *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CExpression::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 360, 0LL, 0LL);
  return this;
}
