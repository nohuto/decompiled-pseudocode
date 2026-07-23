/*
 * XREFs of sub_180115154 @ 0x180115154
 * Callers:
 *     sub_180101750 @ 0x180101750 (sub_180101750.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1801152C8 @ 0x1801152C8 (sub_1801152C8.c)
 */

void __fastcall sub_180115154(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  signed __int32 i; // eax
  _RTL_SRWLOCK *v6; // rsi
  _QWORD *j; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 16);
  for ( i = v2; (i & 0xFFFFFF) != 1; v2 = i )
  {
    i = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF, v2);
    if ( v2 == i )
      break;
  }
  if ( (v2 & 0xFFFFFFu) <= 1 )
  {
    v6 = (_RTL_SRWLOCK *)(a1 + 32);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      RtlReleaseSRWLockExclusive(v6);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      for ( j = (_QWORD *)(*(_QWORD *)(a1 + 24)
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
            (*j & 1) == 0;
            j = (_QWORD *)*j )
      {
        if ( *j == a2 )
        {
          *j = *(_QWORD *)a2;
          --*(_DWORD *)(a1 + 16);
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v6);
      sub_1801152C8(a1, a2);
    }
  }
}
