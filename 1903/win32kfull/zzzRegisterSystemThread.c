/*
 * XREFs of zzzRegisterSystemThread @ 0x1C015DDE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E802C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzRegisterSystemThread(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( (a1 & 1) != 0 )
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x40u;
  if ( (a1 & 2) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 480LL) |= 0x80u;
    if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 456) + 56LL)
      || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7) + 456) + 48LL) )
    {
      zzzJournalAttach(gptiCurrent, 0);
      zzzJournalAttach(gptiCurrent, 1);
    }
  }
  return 1LL;
}
