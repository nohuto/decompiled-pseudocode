/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x140277438
 * Callers:
 *     HvlMarkHiberPhase @ 0x140276DC4 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x14027A4C8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14027A7C8 (HvlpStartPageListIteration.c)
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
  qword_1404384C8 = 0LL;
  HvlpIteratorHibernate = 0;
}
