/*
 * XREFs of ?Release@MouseProcessor@@UEAAKXZ @ 0x18012B960
 * Callers:
 *     ?Release@MouseProcessor@@W7EAAKXZ @ 0x180039D80 (-Release@MouseProcessor@@W7EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBA@EAAKXZ @ 0x180039D90 (-Release@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x180039DA0 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WCA@EAAKXZ @ 0x180039DB0 (-Release@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::Release(MouseProcessor *this)
{
  return RefCountedObject::Release((MouseProcessor *)((char *)this + 32));
}
