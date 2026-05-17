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

__int64 __fastcall RtlpHpStackTraceAllocRemove(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *Mapping; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // r9
  _QWORD *i; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3, a4);
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = (_QWORD *)RtlpHpStackTraceAllocFindMapping(a1, a2);
  v7 = (__int64)Mapping;
  if ( Mapping )
  {
    v9 = Mapping[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8
                       * ((HIBYTE(v9)
                         + 37
                         * (BYTE6(v9)
                          + 37
                          * (BYTE5(v9)
                           + 37
                           * (BYTE4(v9)
                            + 37
                            * ((((_DWORD)Mapping[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)(((_DWORD)Mapping[1] & (unsigned int)(-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(Mapping[1] & (-1 << (*(_DWORD *)(a1 + 20) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v9 + 11623883)))))))) & ((*(_DWORD *)(a1 + 20) >> 5) - 1)));
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
    v8 = Mapping[2];
  }
  else
  {
    v8 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v7 )
  {
    v12 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v7, &v12);
  }
  return v8;
}
