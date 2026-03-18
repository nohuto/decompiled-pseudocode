/*
 * XREFs of ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800807E4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x180080824 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180082808 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CExpression *__fastcall CExpression::CExpression(CExpression *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CExpression::`vftable';
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 360, 0LL, 0LL);
  return this;
}
