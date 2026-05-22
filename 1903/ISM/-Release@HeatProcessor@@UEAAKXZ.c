/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x1800298A0
 * Callers:
 *     ?Release@HeatProcessor@@W7EAAKXZ @ 0x180039590 (-Release@HeatProcessor@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x1800395A0 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x1800395B0 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return RefCountedObject::Release((HeatProcessor *)((char *)this + 24));
}
