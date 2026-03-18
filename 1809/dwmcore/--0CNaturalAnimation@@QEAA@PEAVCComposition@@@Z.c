/*
 * XREFs of ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801733BC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18004E940 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801A8844 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::CNaturalAnimation(CNaturalAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  memset_0((char *)this + 288, 0, 0x30uLL);
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_BYTE *)this + 540) |= 0x44u;
  CNaturalAnimation::ClearState(this);
  return this;
}
