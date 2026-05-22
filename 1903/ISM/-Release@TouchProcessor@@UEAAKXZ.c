/*
 * XREFs of ?Release@TouchProcessor@@UEAAKXZ @ 0x180029880
 * Callers:
 *     ?Release@ControllerProcessor@@W7EAAKXZ @ 0x180037E00 (-Release@ControllerProcessor@@W7EAAKXZ.c)
 *     ?Release@TapProcessor@@WBA@EAAKXZ @ 0x180037E10 (-Release@TapProcessor@@WBA@EAAKXZ.c)
 *     ?Release@ControllerProcessor@@WEA@EAAKXZ @ 0x180038570 (-Release@ControllerProcessor@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall TouchProcessor::Release(TouchProcessor *this)
{
  return RefCountedObject::Release((TouchProcessor *)((char *)this + 16));
}
