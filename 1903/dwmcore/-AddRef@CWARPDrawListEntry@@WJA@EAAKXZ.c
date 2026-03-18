/*
 * XREFs of ?AddRef@CWARPDrawListEntry@@WJA@EAAKXZ @ 0x1800ED440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPDrawListEntry::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 144));
}
