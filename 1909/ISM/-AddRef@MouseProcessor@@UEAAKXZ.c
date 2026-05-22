/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x18000F860
 * Callers:
 *     ?AddRef@MouseProcessor@@W7EAAKXZ @ 0x180039D00 (-AddRef@MouseProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WBA@EAAKXZ @ 0x180039D10 (-AddRef@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WBI@EAAKXZ @ 0x180039D20 (-AddRef@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WCA@EAAKXZ @ 0x180039D30 (-AddRef@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
