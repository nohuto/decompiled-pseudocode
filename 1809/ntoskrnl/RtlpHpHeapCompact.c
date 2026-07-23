/*
 * XREFs of RtlpHpHeapCompact @ 0x1401B63AC
 * Callers:
 *     ExpHpCompactSessionPools @ 0x1401B7788 (ExpHpCompactSessionPools.c)
 *     ExpHpCompactionRoutine @ 0x1401B78D0 (ExpHpCompactionRoutine.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x1401B6530 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1401B66BC (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6D18 (RtlpHpVsContextFreeList.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // edi

  v2 = *(_DWORD *)(a1 + 220);
  v3 = *(_DWORD *)(a1 + 20) & 0x13000003;
  v4 = 0;
  if ( v2 )
    LOBYTE(v4) = v2 == KeGetCurrentThread()[1].CurrentRunTime;
  v5 = v3 | 1;
  if ( !v4 )
    v5 = v3;
  if ( RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 704)) )
    RtlpHpVsContextFreeList(a1 + 640, v5);
  RtlpHpLfhContextCompact(a1 + 832, v5);
  RtlpHpSegContextCompact(a1 + 256, v5);
  RtlpHpSegContextCompact(a1 + 448, v5);
  return 0LL;
}
