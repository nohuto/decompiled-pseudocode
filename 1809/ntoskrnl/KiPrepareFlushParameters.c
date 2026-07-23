/*
 * XREFs of KiPrepareFlushParameters @ 0x140294098
 * Callers:
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173D9C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     <none>
 */

void __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, char *a3)
{
  char v3; // al
  int v4; // ecx

  if ( !KiKvaShadow )
  {
    if ( a1 )
    {
      v4 = a1 - 1;
      if ( !v4 )
      {
        *a2 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_10;
      }
      if ( v4 == 1 )
      {
        *a2 = 0LL;
LABEL_10:
        *a3 = 0;
        return;
      }
    }
LABEL_11:
    v3 = 1;
    goto LABEL_12;
  }
  if ( a1 && a1 != 2 )
    goto LABEL_11;
  v3 = 0;
LABEL_12:
  *a2 = 0LL;
  *a3 = v3;
}
