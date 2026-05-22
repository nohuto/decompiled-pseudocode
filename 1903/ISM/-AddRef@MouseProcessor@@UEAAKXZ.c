/*
 * XREFs of ?AddRef@MouseProcessor@@UEAAKXZ @ 0x18000F8B0
 * Callers:
 *     ?AddRef@MouseProcessor@@W7EAAKXZ @ 0x18003A220 (-AddRef@MouseProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WBA@EAAKXZ @ 0x18003A230 (-AddRef@MouseProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WBI@EAAKXZ @ 0x18003A240 (-AddRef@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WCA@EAAKXZ @ 0x18003A250 (-AddRef@MouseProcessor@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(MouseProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
