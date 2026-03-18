/*
 * XREFs of KiTestForAlertPending @ 0x14009A768
 * Callers:
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiTestForAlertPending(__int64 a1, char a2, char a3, int a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a3 + a1 + 114) )
    {
      if ( a4 )
        *(_BYTE *)(a3 + a1 + 114) = 0;
    }
    else
    {
      if ( a3 && *(_QWORD *)(a1 + 168) != a1 + 168 )
      {
        if ( a4 )
          *(_BYTE *)(a1 + 194) |= 2u;
        return 192;
      }
      if ( !*(_BYTE *)(a1 + 114) )
        return v4;
      if ( a4 )
        *(_BYTE *)(a1 + 114) = 0;
    }
    return 257;
  }
  if ( (*(_BYTE *)(a1 + 194) & 2) != 0 && a3 )
    return 192;
  return v4;
}
