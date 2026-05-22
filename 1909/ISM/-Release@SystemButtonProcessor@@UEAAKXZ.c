/*
 * XREFs of ?Release@SystemButtonProcessor@@UEAAKXZ @ 0x180035CF0
 * Callers:
 *     ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x180037C00 (-Release@ComboButtonProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WEI@EAAKXZ @ 0x180037C10 (-Release@MPCFocusTarget@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemButtonProcessor::Release(SystemButtonProcessor *this)
{
  return RefCountedObject::Release((SystemButtonProcessor *)((char *)this + 8));
}
