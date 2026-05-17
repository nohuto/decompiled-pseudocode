/*
 * XREFs of sub_1800D559C @ 0x1800D559C
 * Callers:
 *     sub_1800723A8 @ 0x1800723A8 (sub_1800723A8.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 */

__int64 __fastcall sub_1800D559C(__int64 a1)
{
  int InformationProcess; // ebx

  if ( *(_QWORD *)(a1 + 56) == qword_180164FC8 )
  {
    InformationProcess = ZwQueryInformationProcess();
    if ( InformationProcess >= 0 )
    {
      InformationProcess = ZwMapViewOfSection();
      if ( InformationProcess >= 0 )
        *(_QWORD *)(a1 + 184) = 0LL;
      ZwClose();
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)InformationProcess;
}
