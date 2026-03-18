/*
 * XREFs of ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801D2700
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x1800A7518 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1801D3684 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::CConditionalExpression(
        CConditionalExpression *this,
        struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *((_DWORD *)this + 78) = -1;
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  *((_DWORD *)this + 79) = 0x7FFFFFFF;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  CConditionalExpression::Reset(this);
  return this;
}
