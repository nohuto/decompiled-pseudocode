/*
 * XREFs of RtlpHpHeapCompact @ 0x180068A30
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180068950 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCFlushCallback @ 0x1800689D0 (RtlpHpGCFlushCallback.c)
 *     RtlCompactHeap @ 0x18008C090 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpLfhContextCompact @ 0x1800208FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x180068ADC (RtlpHpSegContextCompact.c)
 *     RtlpHpVsContextFreeList @ 0x18009FD74 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x18009FDF8 (RtlpHpVsDelayFreeContextFlush.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // r8d
  unsigned int v6; // ebx
  PSLIST_ENTRY v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = a2 | *(_DWORD *)(a1 + 20) & 0x13000003;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 )
    LOBYTE(v4) = v5 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v6 = v3 | 1;
  if ( !v4 )
    v6 = v3;
  v7 = RtlpHpVsDelayFreeContextFlush((PSLIST_HEADER)(a1 + 704));
  if ( v7 )
    RtlpHpVsContextFreeList(a1 + 640, v6, v7, v9);
  RtlpHpLfhContextCompact(a1 + 832, (char *)v6, v8, v9);
  RtlpHpSegContextCompact(a1 + 256, v6);
  RtlpHpSegContextCompact(a1 + 448, v6);
  return 0LL;
}
