/*
 * XREFs of zzzRegisterSystemThread @ 0x1C01362F0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01B0444 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzRegisterSystemThread(char a1)
{
  __int64 v2; // rcx

  if ( (a1 & 1) != 0 )
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x40u;
  if ( (a1 & 2) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x80u;
    v2 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( *(_QWORD *)(v2 + 56) || *(_QWORD *)(v2 + 48) )
    {
      zzzJournalAttach(gptiCurrent, 0);
      zzzJournalAttach(gptiCurrent, 1);
    }
  }
  return 1LL;
}
