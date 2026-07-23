/*
 * XREFs of sub_180102028 @ 0x180102028
 * Callers:
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     sub_180101F60 @ 0x180101F60 (sub_180101F60.c)
 */

__int64 __fastcall sub_180102028(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *i; // rdx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  v4 = (_QWORD *)sub_180101F60(a1, a2);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v10 = v4[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8LL
                       * ((37
                         * (BYTE6(v10)
                          + 37
                          * (BYTE5(v10)
                           + 37
                           * (BYTE4(v10)
                            + 37
                            * (BYTE3(v10)
                             + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                         + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v4 )
      {
        *i = *v4;
        --*(_DWORD *)(a1 + 16);
        *v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    v6 = v4[2];
  }
  else
  {
    v6 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( v5 )
  {
    v9 = xmmword_1801638B0;
    sub_18004F690(v5, &v9);
  }
  return v6;
}
