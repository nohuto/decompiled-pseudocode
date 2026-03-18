/*
 * XREFs of KiPrepareFlushParameters @ 0x1402AA888
 * Callers:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B91A0 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x1400B94E0 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KeFlushSingleCurrentTb @ 0x1401670BC (KeFlushSingleCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A27C (KeFlushMultipleRangeCurrentTb.c)
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
