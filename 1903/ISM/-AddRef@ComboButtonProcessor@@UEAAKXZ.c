/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x18000E0C0
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x180038050 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@MPCFocusTarget@@WEI@EAAKXZ @ 0x180038060 (-AddRef@MPCFocusTarget@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
