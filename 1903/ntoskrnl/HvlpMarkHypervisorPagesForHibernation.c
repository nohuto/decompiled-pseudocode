/*
 * XREFs of HvlpMarkHypervisorPagesForHibernation @ 0x14028B5A8
 * Callers:
 *     HvlMarkHiberPhase @ 0x14028AE20 (HvlMarkHiberPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14015F820 (PoSetHiberRange.c)
 *     HvlpGetPageList @ 0x14028E6B8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14028E970 (HvlpStartPageListIteration.c)
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
  qword_140463048 = 0LL;
  HvlpIteratorHibernate = 0;
}
