/*
 * XREFs of MiFreeReservationRun @ 0x140633CE8
 * Callers:
 *     MiFreeReservationRuns @ 0x140673F84 (MiFreeReservationRuns.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406ED9BC (MiFreeWorkingSetSwapContext.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileHigh @ 0x1400BDF68 (MiGetPageFileHigh.c)
 */

void __fastcall MiFreeReservationRun(__int64 a1, __int64 a2)
{
  unsigned __int64 PageFileHigh; // rdi
  __int64 updated; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v6 );
  }
}
