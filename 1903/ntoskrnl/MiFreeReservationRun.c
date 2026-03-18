/*
 * XREFs of MiFreeReservationRun @ 0x14062FE68
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x1406A4F30 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1406A4F98 (MiFreeReservationRuns.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileHigh @ 0x1400DE0E8 (MiGetPageFileHigh.c)
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
