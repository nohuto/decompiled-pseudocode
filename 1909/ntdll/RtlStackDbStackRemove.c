/*
 * XREFs of RtlStackDbStackRemove @ 0x180115284
 * Callers:
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180101830 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180102864 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpStackDbEntryCleanup @ 0x1801153F8 (RtlpStackDbEntryCleanup.c)
 */

signed __int64 __fastcall RtlStackDbStackRemove(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  signed __int64 result; // rax
  volatile signed __int64 *v6; // rsi
  _QWORD *i; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 16);
  LODWORD(result) = v2;
  while ( 1 )
  {
    result &= 0xFFFFFFu;
    if ( (_DWORD)result == 1 )
      break;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a2 + 16),
                             v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF,
                             v2);
    if ( v2 == (_DWORD)result )
      break;
    v2 = result;
  }
  if ( (v2 & 0xFFFFFFu) <= 1 )
  {
    v6 = (volatile signed __int64 *)(a1 + 32);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      return RtlReleaseSRWLockExclusive(v6);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                         + 8LL
                         * ((37
                           * (BYTE6(v8)
                            + 37
                            * (BYTE5(v8)
                             + 37
                             * (BYTE4(v8)
                              + 37
                              * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                           + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == a2 )
        {
          *i = *(_QWORD *)a2;
          --*(_DWORD *)(a1 + 16);
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v6);
      return RtlpStackDbEntryCleanup(a1, a2);
    }
  }
  return result;
}
