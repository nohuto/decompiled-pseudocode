/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x1801049E4
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x1801048D8 (RtlpHpStackTraceAllocFindMapping.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(__int64 a1, __int64 a2)
{
  _QWORD *Mapping; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  _QWORD *i; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = (_QWORD *)RtlpHpStackTraceAllocFindMapping(a1, a2);
  v5 = (__int64)Mapping;
  if ( Mapping )
  {
    v7 = Mapping[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8
                       * ((HIBYTE(v7)
                         + 37
                         * (BYTE6(v7)
                          + 37
                          * (BYTE5(v7)
                           + 37
                           * (BYTE4(v7)
                            + 37
                            * ((((_DWORD)Mapping[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)(((_DWORD)Mapping[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(Mapping[1] & (-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v7 + 11623883)))))))) & ((*(_DWORD *)(a1 + 20) >> 5) - 1)));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == Mapping )
      {
        *i = *Mapping;
        --*(_DWORD *)(a1 + 16);
        *Mapping |= 0x8000000000000002uLL;
        break;
      }
    }
    v6 = Mapping[2];
  }
  else
  {
    v6 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( v5 )
  {
    v10 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v5, &v10);
  }
  return v6;
}
