/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x18018F860
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x18009F840 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
