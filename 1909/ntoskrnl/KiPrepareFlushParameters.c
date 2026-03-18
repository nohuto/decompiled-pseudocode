/*
 * XREFs of KiPrepareFlushParameters @ 0x1402AA5E8
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140166B0C (KeFlushSingleCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017A8A0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
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
