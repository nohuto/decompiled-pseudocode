/*
 * XREFs of RtlpHeapTrkFindStack @ 0x1800FA2E8
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x1800FA660 (RtlpHeapTrkLeakCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800FA3DC (RtlpHeapTrkHash.c)
 */

__int64 __fastcall RtlpHeapTrkFindStack(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // r9
  _QWORD *i; // rcx
  __int64 v6; // rbx

  v2 = RtlpHeapTrkHash();
  v3 = v2 & 0xF;
  if ( _interlockedbittestandset64(*(volatile signed __int32 **)(qword_180166898 + 8 * v3), 0LL) )
    return 0LL;
  for ( i = *(_QWORD **)(qword_1801667F0 + 16LL * v2); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(qword_1801667F0 + 16LL * v2) )
    {
      v6 = 0LL;
      goto LABEL_8;
    }
    if ( i[3] == a1 )
      break;
  }
  v6 = i[4];
  i[3] = 0LL;
LABEL_8:
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166898 + 8 * v3));
  return v6;
}
