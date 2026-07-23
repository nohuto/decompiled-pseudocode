/*
 * XREFs of sub_18004F130 @ 0x18004F130
 * Callers:
 *     sub_18004F050 @ 0x18004F050 (sub_18004F050.c)
 *     sub_18004F0D0 @ 0x18004F0D0 (sub_18004F0D0.c)
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 * Callees:
 *     sub_18004F1D0 @ 0x18004F1D0 (sub_18004F1D0.c)
 *     sub_18004F318 @ 0x18004F318 (sub_18004F318.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A0230 (RtlInterlockedFlushSList_0.c)
 *     sub_18010C1C4 @ 0x18010C1C4 (sub_18010C1C4.c)
 */

__int64 __fastcall sub_18004F130(__int64 a1, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // r8d
  unsigned int v6; // ebx

  v3 = a2 | *(_DWORD *)(a1 + 20) & 0x13000003;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 )
    LOBYTE(v4) = v5 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v6 = v3 | 1;
  if ( !v4 )
    v6 = v3;
  if ( RtlInterlockedFlushSList_0((PSLIST_HEADER)(a1 + 704)) )
    sub_18010C1C4((PRTL_SRWLOCK)(a1 + 640));
  sub_18004F318(a1 + 832, v6);
  sub_18004F1D0(a1 + 256, v6);
  sub_18004F1D0(a1 + 448, v6);
  return 0LL;
}
