/*
 * XREFs of RtlpHpHeapCompact @ 0x18004F1D0
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18004F0F0 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCFlushCallback @ 0x18004F170 (RtlpHpGCFlushCallback.c)
 *     RtlCompactHeap @ 0x180089B20 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHpSegContextCompact @ 0x18004F270 (RtlpHpSegContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x18004F3B8 (RtlpHpLfhContextCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1800A09E0 (RtlpInterlockedFlushSList.c)
 *     RtlpHpVsContextFreeList @ 0x18010C2F4 (RtlpHpVsContextFreeList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx

  v5 = a2 | *(_DWORD *)(a1 + 20) & 0x13000003;
  v6 = 0LL;
  v7 = *(unsigned int *)(a1 + 220);
  if ( (_DWORD)v7 )
    LOBYTE(v6) = (_DWORD)v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v8 = v5 | 1;
  if ( !(_DWORD)v6 )
    v8 = v5;
  if ( RtlpInterlockedFlushSList(a1 + 704, v6, v7, a4) )
    RtlpHpVsContextFreeList((PRTL_SRWLOCK)(a1 + 640));
  RtlpHpLfhContextCompact(a1 + 832, v8);
  RtlpHpSegContextCompact(a1 + 256, v8);
  RtlpHpSegContextCompact(a1 + 448, v8);
  return 0LL;
}
