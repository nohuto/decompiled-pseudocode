/*
 * XREFs of sub_18002AC94 @ 0x18002AC94
 * Callers:
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x180029A80 (RtlAddRefActivationContext.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlGetActiveActivationContext @ 0x18002D830 (RtlGetActiveActivationContext.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18002AC94(__int64 a1)
{
  __int64 Heap; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rsi
  bool v8; // zf

  Heap = RtlAllocateHeap(qword_180165420, (dword_18016542C + 0x40000) | 8u, 288LL);
  if ( Heap )
  {
    v3 = RtlAllocateHeap(qword_180165420, (dword_18016542C + 0x40000) | 8u, 80LL);
    v4 = v3;
    if ( v3 )
    {
      LOBYTE(v5) = 0;
      *(_QWORD *)(Heap + 152) = v3;
      if ( a1 )
      {
        *(_QWORD *)(Heap + 176) = a1;
        *(_DWORD *)(Heap + 272) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v5 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 56) = Heap;
        v6 = *(_QWORD *)(a1 + 48);
        if ( v6 )
        {
          v7 = *(volatile signed __int32 **)(v6 + 136);
          if ( v7 )
          {
            RtlAddRefActivationContext(v7);
            *(_QWORD *)(Heap + 136) = v7;
          }
        }
        else
        {
          RtlGetActiveActivationContext(Heap + 136);
          *(_DWORD *)(Heap + 268) = 4;
        }
      }
      *(_QWORD *)(Heap + 120) = Heap + 112;
      *(_QWORD *)(Heap + 112) = Heap + 112;
      *(_QWORD *)(Heap + 160) = v4;
      *(_QWORD *)(Heap + 168) = v4;
      *(_QWORD *)v4 = Heap + 160;
      *(_QWORD *)(v4 + 8) = Heap + 160;
      *(_QWORD *)(Heap + 144) = 0LL;
      v8 = dword_1801664E0 == 1;
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(Heap + 276) = 2;
      if ( v8 && !RtlIsCriticalSectionLockedByThread((__int64)&off_18015F3F0) )
        *(_DWORD *)(Heap + 104) |= 0x20u;
      if ( (v5 & 4) != 0 )
        *(_DWORD *)(Heap + 104) |= 0x10000000u;
      if ( (v5 & 0x40) == 0 )
        *(_DWORD *)(Heap + 104) |= 4u;
      *(_WORD *)(Heap + 108) = 6;
    }
    else
    {
      RtlFreeHeap(qword_180165420, 0LL, Heap);
      return 0LL;
    }
  }
  return Heap;
}
