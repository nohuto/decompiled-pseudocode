/*
 * XREFs of ??0DripsBlockerInfoEntry@DripsBlockerInfoList@@QEAA@XZ @ 0x1C001AFD0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

DripsBlockerInfoList::DripsBlockerInfoEntry *__fastcall DripsBlockerInfoList::DripsBlockerInfoEntry::DripsBlockerInfoEntry(
        DripsBlockerInfoList::DripsBlockerInfoEntry *this)
{
  memset((char *)this + 24, 0, 0x30uLL);
  *((_QWORD *)this + 1) = 0LL;
  return this;
}
