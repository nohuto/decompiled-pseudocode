/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x1801D6160
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1800B5E90 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
