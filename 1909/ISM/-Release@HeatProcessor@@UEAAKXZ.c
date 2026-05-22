/*
 * XREFs of ?Release@HeatProcessor@@UEAAKXZ @ 0x180029420
 * Callers:
 *     ?Release@HeatProcessor@@W7EAAKXZ @ 0x180039070 (-Release@HeatProcessor@@W7EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBA@EAAKXZ @ 0x180039080 (-Release@HeatProcessor@@WBA@EAAKXZ.c)
 *     ?Release@HeatProcessor@@WBI@EAAKXZ @ 0x180039090 (-Release@HeatProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall HeatProcessor::Release(HeatProcessor *this)
{
  return RefCountedObject::Release((HeatProcessor *)((char *)this + 24));
}
