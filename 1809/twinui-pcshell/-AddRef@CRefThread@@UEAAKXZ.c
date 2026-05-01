/*
 * XREFs of ?AddRef@CRefThread@@UEAAKXZ @ 0x180081F20
 * Callers:
 *     ?AddRef@CDuiRefThread@@WCA@EAAKXZ @ 0x18009F810 (-AddRef@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefThread::AddRef(volatile signed __int32 **this)
{
  return (unsigned int)_InterlockedIncrement(this[1]);
}
