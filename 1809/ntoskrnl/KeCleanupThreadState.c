/*
 * XREFs of KeCleanupThreadState @ 0x14008D800
 * Callers:
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 * Callees:
 *     KeFlushQueuedDpcs @ 0x1400DBED0 (KeFlushQueuedDpcs.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v2; // r9
  unsigned int v3; // r11d
  ULONG_PTR v4; // r8

  BugCheckParameter4 = 0LL;
  v2 = 1LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 1) != 0 )
  {
    v3 = 0;
    v4 = BugCheckParameter1 + 824;
    while ( !*(_QWORD *)(v4 + 8) )
    {
      if ( *(_DWORD *)v4 >= 0x100u )
      {
        v2 = 2LL;
        goto LABEL_14;
      }
      if ( BugCheckParameter1 != v4 - 24 - 16LL * (unsigned __int8)*(_DWORD *)v4 )
      {
        v2 = 3LL;
        goto LABEL_14;
      }
      if ( (*(_DWORD *)(v4 + 64) & 0x1FFFF) != 0 )
      {
        v2 = 4LL;
        goto LABEL_14;
      }
      ++v3;
      v4 += 96LL;
      if ( v3 >= 6 )
        goto LABEL_8;
    }
    BugCheckParameter4 = *(_QWORD *)(v4 + 8) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL;
LABEL_14:
    KeBugCheckEx(0x153u, BugCheckParameter1, v4 - 24, v2, BugCheckParameter4);
  }
LABEL_8:
  if ( *(_WORD *)(BugCheckParameter1 + 1420) )
    KeFlushQueuedDpcs();
}
