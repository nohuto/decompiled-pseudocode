/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x180116AD4
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x180116144 (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned __int64 v5; // rbx
  signed __int64 result; // rax
  unsigned __int64 *v8; // r8
  volatile signed __int64 *v9; // rsi
  unsigned __int64 v10; // r10
  _QWORD *i; // rdx

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a2;
  LODWORD(result) = v4;
  while ( 1 )
  {
    result &= 0xFFFFFFu;
    if ( (_DWORD)result == 1 )
      break;
    a2 = v4 ^ (v4 ^ (v4 - 1)) & 0xFFFFFFu;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 16), a2, v4);
    if ( v4 == (_DWORD)result )
      break;
    v4 = result;
  }
  v8 = (unsigned __int64 *)(v4 & 0xFFFFFF);
  if ( (unsigned int)v8 <= 1 )
  {
    v9 = (volatile signed __int64 *)(a1 + 40);
    RtlAcquireSRWLockExclusive(a1 + 40, a2, v8, a4);
    if ( (_InterlockedDecrement((volatile signed __int32 *)(v5 + 16)) & 0xFFFFFF) != 0 )
    {
      return RtlReleaseSRWLockExclusive(v9);
    }
    else
    {
      v10 = *(_QWORD *)(v5 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8
                         * ((HIBYTE(v10)
                           + 37
                           * (BYTE6(v10)
                            + 37
                            * (BYTE5(v10)
                             + 37
                             * (BYTE4(v10)
                              + 37
                              * (BYTE3(v10)
                               + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
            (*i & 1) == 0;
            i = (_QWORD *)*i )
      {
        if ( *i == v5 )
        {
          *i = *(_QWORD *)v5;
          --*(_DWORD *)a1;
          *(_QWORD *)v5 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v9);
      return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 56))(v5, *(_QWORD *)(a1 + 64));
    }
  }
  return result;
}
