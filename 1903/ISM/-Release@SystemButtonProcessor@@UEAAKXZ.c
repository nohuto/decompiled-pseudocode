/*
 * XREFs of ?Release@SystemButtonProcessor@@UEAAKXZ @ 0x1800361E0
 * Callers:
 *     ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x1800380F0 (-Release@ComboButtonProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WEI@EAAKXZ @ 0x180038100 (-Release@MPCFocusTarget@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemButtonProcessor::Release(SystemButtonProcessor *this)
{
  return RefCountedObject::Release((SystemButtonProcessor *)((char *)this + 8));
}
