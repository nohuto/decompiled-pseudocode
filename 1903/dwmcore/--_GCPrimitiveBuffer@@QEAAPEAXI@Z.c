/*
 * XREFs of ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x180258134
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180088980 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CPrimitiveBuffer::`scalar deleting destructor'(void **this)
{
  operator delete(*this);
  operator delete(this);
  return this;
}
