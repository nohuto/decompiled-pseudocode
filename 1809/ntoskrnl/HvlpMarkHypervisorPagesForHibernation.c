/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x140277148
 * Callers:
 *     HvlMarkHiberPhase @ 0x140276AD4 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401447B0 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x14027A1D8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14027A4D8 (HvlpStartPageListIteration.c)
 */

void HvlpMarkHypervisorPagesForHibernation()
{
  int PageList; // ebx
  ULONG_PTR Length; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  HvlpStartPageListIteration(0LL);
  do
  {
    PageList = HvlpGetPageList(0LL, &Address, &Length);
    if ( (_DWORD)Length )
      PoSetHiberRange(0LL, 0x14000u, Address, (unsigned int)Length, 0x686C7648u);
  }
  while ( PageList == 261 );
  qword_140437408 = 0LL;
  HvlpIteratorHibernate = 0;
}
