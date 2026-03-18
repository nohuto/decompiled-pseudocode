/*
 * XREFs of MiGetLargePageChain @ 0x1400A3BCC
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022864 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     MiGetLargePageDemoteAsNeeded @ 0x1400A3C88 (MiGetLargePageDemoteAsNeeded.c)
 *     MiFreeLargePageChain @ 0x1402E6A1C (MiFreeLargePageChain.c)
 */

_QWORD *__fastcall MiGetLargePageChain(unsigned int a1, unsigned __int64 a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  BOOL v5; // ebx
  unsigned __int64 v6; // r14
  _QWORD *LargePageDemoteAsNeeded; // rax

  if ( *(_QWORD *)(1984LL * a1 + qword_140468490 + 1808) || !(_DWORD)InitializationPhase )
  {
    v3 = 0LL;
    v4 = a2 >> 9;
    v5 = qword_14046A348 > 0x110000;
    v6 = 0LL;
    if ( !(a2 >> 9) )
      return v3;
    while ( 1 )
    {
      LargePageDemoteAsNeeded = (_QWORD *)MiGetLargePageDemoteAsNeeded(
                                            (unsigned int)&MiSystemPartition,
                                            a1,
                                            512,
                                            512,
                                            v5);
      if ( !LargePageDemoteAsNeeded )
        break;
      ++v6;
      *LargePageDemoteAsNeeded = v3;
      v3 = LargePageDemoteAsNeeded;
      if ( v6 >= v4 )
        return v3;
    }
    MiFreeLargePageChain(v3);
  }
  return 0LL;
}
