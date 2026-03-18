/*
 * XREFs of ??0CInjectionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801D5100
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A7518 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CInjectionAnimation *__fastcall CInjectionAnimation::CInjectionAnimation(
        CInjectionAnimation *this,
        struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CInjectionAnimation::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *(_QWORD *)((char *)this + 324) = 0LL;
  return this;
}
