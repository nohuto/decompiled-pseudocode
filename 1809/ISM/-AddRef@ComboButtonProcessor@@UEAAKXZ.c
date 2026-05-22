/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x18000B6C0
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x18000B300 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MPCFocusTarget@@WEI@EAAKXZ @ 0x18000B320 (-AddRef@MPCFocusTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WCI@EAAKXZ @ 0x1800383D0 (-AddRef@ControllerProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
