/*
 * XREFs of ??0CNaturalAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18019D558
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180082808 (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x1801E5588 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 */

CNaturalAnimation *__fastcall CNaturalAnimation::CNaturalAnimation(CNaturalAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  memset_0((char *)this + 312, 0, 0x30uLL);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_BYTE *)this + 564) |= 0x44u;
  CNaturalAnimation::ClearState(this);
  return this;
}
